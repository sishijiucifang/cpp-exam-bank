#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
按章节知识点整理全部C++题目。
解析C++题库.txt，合并已有文件夹，处理期末考试题，统一输出到章节文件夹。
"""
import sys, os, re, shutil

sys.stdout.reconfigure(encoding='utf-8')
BASE = r'D:\finalReview'

# ─── 第1步：章节知识点名称 ───────────────────────────────────
CHAPTER_NAMES = {
    1:  "第1章-C++基本语法",
    2:  "第2章-流程控制",
    3:  "第3章-函数",
    4:  "第4章-数组与综合设计",
    5:  "第5章-指针",
    6:  "第6章-数组与字符串",
    7:  "第7章-结构体与链表",
    8:  "第8章-文件操作",
    9:  "第9章-综合程序设计",
    10: "第10章-类与对象",
    11: "第11章-运算符重载",
    12: "第12章-继承与模板",
    13: "第13章-综合应用",
}

# ─── 第2步：解析C++题库.txt，建立 题号→(章, 完整文本) 映射 ───
def parse_bank(filepath):
    """解析题库，返回 {题号: {'chapter': int, 'title': str, 'full_text': str}}"""
    with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
        text = f.read()

    problems = {}

    # 匹配每个题目的头部：第N题 （分数） 题号:ID 难度:X 第X章
    header_re = re.compile(
        r'第(\d+)题\s*（([\d.]+)分）\s*题号:(\d+)\s*难度:(\S+)\s*第(\d+)章'
    )

    # 找到所有题头位置
    matches = list(header_re.finditer(text))
    print(f"  找到 {len(matches)} 个题头")

    for i, m in enumerate(matches):
        qnum = int(m.group(1))
        score = m.group(2)
        topic_id = int(m.group(3))
        difficulty = m.group(4)
        chapter = int(m.group(5))

        start = m.start()
        # 找到下一个题头或文件末尾作为结束
        if i + 1 < len(matches):
            end = matches[i + 1].start()
        else:
            end = len(text)

        block = text[start:end]

        # 提取题目描述（从"题目："到"注意："或第一个"----"）
        title_match = re.search(r'题目[：:]\s*(.+?)(?:。|\n)', block, re.DOTALL)
        if title_match:
            title = title_match.group(1).strip().replace('\n', ' ')[:60]
        else:
            title = f"题号{topic_id}"

        # 提取Program/End之间的骨架代码
        prog_match = re.search(
            r'/[*]+Program[*]+/\s*\n(.*?)\n\s*/[*]+\s*End\s*[*]+/',
            block, re.DOTALL
        )
        skeleton = prog_match.group(1) if prog_match else ''

        # 提取答案
        ans_match = re.search(r'答案[：:]\s*\n?(.*?)(?=\n\s*\n\s*第\d+题|\Z)', block, re.DOTALL)
        answer = ans_match.group(1).strip() if ans_match else ''

        # 构建完整题目文本（去掉评分函数）
        # 去掉 //以下忽略阅读 到 //忽略阅读结束 之间的内容
        clean_block = re.sub(
            r'//以下忽略阅读.*?//忽略阅读结束',
            '// [评分函数已省略]',
            block,
            flags=re.DOTALL
        )
        # 截断在答案之前
        ans_pos = clean_block.find('答案')
        if ans_pos > 0:
            clean_block = clean_block[:ans_pos]

        problems[topic_id] = {
            'chapter': chapter,
            'qnum': qnum,
            'title': title,
            'difficulty': difficulty,
            'score': score,
            'full_text': clean_block,
            'skeleton': skeleton,
            'answer': answer,
        }

    return problems


# ─── 第3步：扫描已有cpp文件，提取题号 ─────────────────────
def scan_existing_files():
    """扫描链表/文件/指针/中的cpp文件，返回 {题号: 文件路径}"""
    existing = {}
    folders = ['链表', '文件', '指针']

    for folder in folders:
        fpath = os.path.join(BASE, folder)
        if not os.path.isdir(fpath):
            continue
        for fname in os.listdir(fpath):
            if not fname.endswith('.cpp'):
                continue
            # 排除非题库文件
            if fname in ('pointer_quiz.cpp', 'grading_stub.cpp'):
                continue
            # 排除副本
            if '_副本' in fname:
                continue

            full = os.path.join(fpath, fname)
            # 提取题号
            tid = None
            # 文件/ 格式: Q{题号}_文件_xxx.cpp
            m = re.match(r'Q(\d+)_文件_', fname)
            if m:
                tid = int(m.group(1))
            # 链表/ 格式: Q{pos}_{题号}_链表_xxx.cpp 或 QS{pos}_{题号}_链表_xxx.cpp
            if tid is None:
                m = re.match(r'QS?\d+_(\d+)_链表_', fname)
                if m:
                    tid = int(m.group(1))
            # 指针/ 格式: Q{pos}_{题号}_xxx.cpp
            if tid is None:
                m = re.match(r'Q\d+_(\d+)_', fname)
                if m:
                    tid = int(m.group(1))

            if tid:
                existing[tid] = full

    return existing


# ─── 第4步：生成简短描述 ───────────────────────────────────
# Windows文件名禁止字符
_INVALID_CHARS = re.compile(r'[\\/:*?"<>|\r\n\t]')

def sanitize(s):
    """移除文件名中的非法字符，限制长度"""
    s = _INVALID_CHARS.sub('', s)
    s = s.strip()
    return s[:16] if len(s) > 16 else s

def make_description(title, chapter):
    """从题目描述生成简短文件名片段"""
    # 常见模式替换（按优先级排列）
    keywords = [
        ('约瑟夫', '约瑟夫问题'),
        ('链表', '链表'), ('结点', '链表'), ('Node', '链表'),
        ('文件', '文件'), ('fstream', '文件'),
        ('字符串', '字符串'), ('str', '字符串'),
        ('矩阵', '矩阵'), ('二维', '二维数组'),
        ('排序', '排序'), ('sort', '排序'),
        ('插入', '插入'), ('删除', '删除'), ('delete', '删除'),
        ('统计', '统计'), ('count', '统计'),
        ('平均', '平均'), ('查找', '查找'),
        ('递归', '递归'), ('阶乘', '阶乘'),
        ('Fibonacci', '斐波那契'), ('斐波那契', '斐波那契'),
        ('素数', '素数'), ('完数', '完数'), ('水仙花', '水仙花'),
        ('结构体', '结构体'), ('struct', '结构体'),
        ('指针', '指针'), ('pointer', '指针'),
        ('类', '类'), ('class', '类'),
        ('继承', '继承'), ('派生', '派生'),
        ('模板', '模板'), ('template', '模板'),
        ('重载', '重载'), ('operator', '运算符'),
        ('分段', '分段函数'), ('四舍五入', '四舍五入'),
        ('最大公约数', '最大公约数'), ('GCD', '最大公约数'),
        ('杨辉', '杨辉三角'), ('个人所得税', '个税'),
        ('存款', '复利'), ('利息', '复利'),
        ('二进制', '二进制'), ('八进制', '进制转换'),
        ('数组', '数组'), ('字符', '字符'),
    ]

    for kw, desc in keywords:
        if kw in title:
            return sanitize(desc)

    # 默认取前几个字，移除标点
    clean = re.sub(r'[，。；：""！？、\s]+', '', title)
    return sanitize(clean[:12] if len(clean) > 12 else clean)


# ─── 第5步：生成cpp文件内容 ─────────────────────────────────
def make_cpp_content(topic_id, info, source='T'):
    """生成题目cpp文件的完整内容"""
    chapter = info['chapter']
    chap_name = CHAPTER_NAMES.get(chapter, f"第{chapter}章")

    # 构建文件头注释
    header = f'''/*
 * 来源：C++题库 题号{topic_id}
 * 章节：{chap_name}
 * 难度：{info.get('difficulty', '?')}
 * 题序：第{info.get('qnum', '?')}题
 *
 * 题目：{info.get('title', '')}
 */
'''
    # 题目正文
    body = info.get('full_text', '')

    # 答案（注释形式保存）
    answer = info.get('answer', '')
    if answer:
        answer_block = f'''
/* ───────── 参考答案 ─────────
{answer}
   ─────────────────────────── */
'''
    else:
        answer_block = '\n/* 参考答案未提供 */\n'

    return header + '\n' + body + answer_block


# ─── 第6步：期末考试题章节映射 ─────────────────────────────────
EXAM_MAPPING = {
    # final-24 A卷
    ('final-24', 'A', 1):  (1, '海底深度公式'),
    ('final-24', 'A', 2):  (2, '分段函数'),
    ('final-24', 'A', 3):  (3, '逆向查找'),
    ('final-24', 'A', 4):  (4, '评分统计'),
    ('final-24', 'A', 5):  (4, '修剪平均'),
    ('final-24', 'A', 6):  (6, '极简压缩'),
    ('final-24', 'A', 7):  (6, '子串逆置'),
    ('final-24', 'A', 8):  (7, '冠军评选'),
    ('final-24', 'A', 9):  (7, '约瑟夫问题'),
    ('final-24', 'A', 10): (8, '分数线平均'),
    # final-24 B卷
    ('final-24', 'B', 1):  (1, '脊深度公式'),
    ('final-24', 'B', 2):  (2, '分段函数'),
    ('final-24', 'B', 3):  (3, '后N平均'),
    ('final-24', 'B', 4):  (4, '满意度评分'),
    ('final-24', 'B', 5):  (4, '山脉数组'),
    ('final-24', 'B', 6):  (4, '极端数矩阵'),
    ('final-24', 'B', 7):  (6, '子串替换'),
    ('final-24', 'B', 8):  (7, '奖学金评选'),
    ('final-24', 'B', 9):  (7, '偶数节点计数'),
    ('final-24', 'B', 10): (8, '分数线最大'),
    # final-25 A卷
    ('final-25', 'A', 1):  (2, '分段exp函数'),
    ('final-25', 'A', 2):  (2, '交通灯逻辑'),
    ('final-25', 'A', 3):  (4, '战斗安全范围'),
    ('final-25', 'A', 4):  (5, '递归数列'),
    ('final-25', 'A', 5):  (4, '股票最大利润'),
    ('final-25', 'A', 6):  (4, '纵横数'),
    ('final-25', 'A', 7):  (6, '删除关键词'),
    ('final-25', 'A', 8):  (7, '进货需求'),
    ('final-25', 'A', 9):  (7, '链表去重'),
    ('final-25', 'A', 10): (8, '文件加密'),
    # final-25 B卷
    ('final-25', 'B', 1):  (2, '分段exp函数'),
    ('final-25', 'B', 2):  (4, '字符分类'),
    ('final-25', 'B', 3):  (4, '查找最后出现'),
    ('final-25', 'B', 4):  (5, '组合数递归'),
    ('final-25', 'B', 5):  (4, '不同元素计数'),
    ('final-25', 'B', 6):  (4, '行最大值最小'),
    ('final-25', 'B', 7):  (6, '字符串拼接'),
    ('final-25', 'B', 8):  (7, '士兵得分'),
    ('final-25', 'B', 9):  (7, '链表删值'),
    ('final-25', 'B', 10): (8, '成绩区间统计'),
}


def process_exam_files():
    """处理期末考试cpp文件，返回 [(源路径, 目标文件夹, 目标文件名)]"""
    results = []
    for exam_dir in ['final-24', 'final-25']:
        dpath = os.path.join(BASE, exam_dir)
        if not os.path.isdir(dpath):
            continue

        year = exam_dir  # 'final-24' or 'final-25'
        for fname in sorted(os.listdir(dpath)):
            if not fname.endswith('.cpp'):
                continue

            # 解析文件名: final-24-A-1.cpp 或 final-25-B-10.cpp
            m = re.match(r'final-(\d+)-([AB])-(\d+)\.cpp', fname)
            if not m:
                continue

            yr = int(m.group(1))
            paper = m.group(2)  # A or B
            qnum = int(m.group(3))

            key = (f'final-{yr}', paper, qnum)
            if key in EXAM_MAPPING:
                chapter, desc = EXAM_MAPPING[key]
                src = os.path.join(dpath, fname)
                chap_folder = CHAPTER_NAMES.get(chapter, f"第{chapter}章")
                dest_folder = os.path.join(BASE, chap_folder)
                # E{年份}{AB卷}Q{题号}_{描述}.cpp
                dest_name = f"E{yr}{paper}Q{qnum:02d}_{desc}.cpp"
                results.append((src, dest_folder, dest_name, chapter, desc))

    return results


# ─── 第7步：主流程 ──────────────────────────────────────────
def main():
    bank_path = os.path.join(BASE, 'C++题库.txt')
    if not os.path.exists(bank_path):
        print(f"错误：找不到 {bank_path}")
        return

    # 7.1 创建章节文件夹
    print("=== 创建章节文件夹 ===")
    for chap, name in CHAPTER_NAMES.items():
        folder = os.path.join(BASE, name)
        os.makedirs(folder, exist_ok=True)
        print(f"  {name}")

    # 7.2 解析题库
    print("\n=== 解析C++题库 ===")
    bank = parse_bank(bank_path)
    print(f"  题库共 {len(bank)} 题（按题号去重后）")

    # 统计每章题目数
    chap_counts = {}
    for tid, info in bank.items():
        ch = info['chapter']
        chap_counts[ch] = chap_counts.get(ch, 0) + 1
    for ch in sorted(chap_counts):
        print(f"    第{ch}章: {chap_counts[ch]} 题")

    # 7.3 扫描已有文件
    print("\n=== 扫描已有cpp文件 ===")
    existing = scan_existing_files()
    print(f"  链表/文件/指针/中共 {len(existing)} 个题库题已有cpp文件")

    # 7.4 从题库生成cpp文件（优先使用已有文件，没有则从txt提取）
    print("\n=== 生成/移动题库题目 ===")
    generated = 0
    copied = 0

    for tid, info in bank.items():
        chapter = info['chapter']
        chap_folder = CHAPTER_NAMES.get(chapter, f"第{chapter}章")
        dest_dir = os.path.join(BASE, chap_folder)
        desc = make_description(info['title'], chapter)
        dest_name = f"T{tid}_{desc}.cpp"
        dest_path = os.path.join(dest_dir, dest_name)

        if tid in existing:
            # 从已有文件夹复制
            src = existing[tid]
            shutil.copy2(src, dest_path)
            copied += 1
        else:
            # 从题库生成
            content = make_cpp_content(tid, info)
            with open(dest_path, 'w', encoding='utf-8') as f:
                f.write(content)
            generated += 1

    print(f"  从已有文件复制: {copied} 题")
    print(f"  从题库新生成: {generated} 题")

    # 7.5 处理期末考试题
    print("\n=== 处理期末考试题 ===")
    exam_results = process_exam_files()
    for src, dest_dir, dest_name, chapter, desc in exam_results:
        os.makedirs(dest_dir, exist_ok=True)
        dest_path = os.path.join(dest_dir, dest_name)
        # 读取源文件，添加章节标注头
        with open(src, 'r', encoding='utf-8', errors='replace') as f:
            content = f.read()
        chap_name = CHAPTER_NAMES.get(chapter, f"第{chapter}章")
        exam_header = f'/* 来源：期末考试 | 章节：{chap_name} | 知识点：{desc} */\n'
        if not content.startswith('/* 来源：'):
            content = exam_header + content
        with open(dest_path, 'w', encoding='utf-8') as f:
            f.write(content)
    print(f"  处理了 {len(exam_results)} 个考试题")

    # 统计考试题分布
    exam_chaps = {}
    for _, _, _, ch, _ in exam_results:
        exam_chaps[ch] = exam_chaps.get(ch, 0) + 1
    for ch in sorted(exam_chaps):
        print(f"    第{ch}章: +{exam_chaps[ch]} 考试题")

    # 7.6 处理file-practice
    print("\n=== 处理file-practice ===")
    fp_dir = os.path.join(BASE, 'file-practice')
    chap8_dir = os.path.join(BASE, '第8章-文件操作')
    if os.path.isdir(fp_dir):
        count = 0
        for fname in sorted(os.listdir(fp_dir)):
            if fname.endswith('.cpp'):
                src = os.path.join(fp_dir, fname)
                m = re.match(r'problem(\d+)', fname)
                pnum = m.group(1) if m else 'X'
                dest_name = f"P{pnum}_{fname}"
                dest_path = os.path.join(chap8_dir, dest_name)
                # 读取并加头部
                with open(src, 'r', encoding='utf-8', errors='replace') as f:
                    content = f.read()
                practice_header = f'/* 来源：文件专项练习 | 章节：第8章-文件操作 */\n'
                if '来源：' not in content:
                    content = practice_header + content
                with open(dest_path, 'w', encoding='utf-8') as f:
                    f.write(content)
                count += 1
        print(f"  file-practice: {count} 题 → 第8章-文件操作")

    # 7.7 处理指针/中的非题库文件
    print("\n=== 处理特殊文件 ===")
    pointer_quiz = os.path.join(BASE, '指针', 'pointer_quiz.cpp')
    chap5_dir = os.path.join(BASE, '第5章-指针')
    if os.path.exists(pointer_quiz):
        dest = os.path.join(chap5_dir, 'Z_指针测验.cpp')
        shutil.copy2(pointer_quiz, dest)
        print(f"  pointer_quiz.cpp → 第5章-指针")

    # 7.8 删除旧文件夹
    print("\n=== 清理旧文件夹 ===")
    old_folders = ['链表', '文件', '指针', 'final-24', 'final-25', 'file-practice']
    for folder in old_folders:
        fpath = os.path.join(BASE, folder)
        if os.path.isdir(fpath):
            shutil.rmtree(fpath)
            print(f"  已删除: {folder}/")

    # 7.9 输出统计
    print("\n=== 最终统计 ===")
    total = 0
    for ch in sorted(CHAPTER_NAMES):
        chap_folder = os.path.join(BASE, CHAPTER_NAMES[ch])
        if os.path.isdir(chap_folder):
            cpp_files = [f for f in os.listdir(chap_folder) if f.endswith('.cpp')]
            total += len(cpp_files)
            print(f"  {CHAPTER_NAMES[ch]}: {len(cpp_files)} 题")
    print(f"  总计: {total} 题")
    print("\n完成！")


if __name__ == '__main__':
    main()
