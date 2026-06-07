/*
 * ============================================
 *  Pointer Quiz — True or False (20 Questions)
 *  Compile: g++ pointer_quiz.cpp -o pointer_quiz.exe
 *  Run:     ./pointer_quiz.exe
 * ============================================
 */

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char ans;
    int score = 0;

    cout << "============================================" << endl;
    cout << "  指针判断题 (共20题) — 输入 T 或 F 后回车" << endl;
    cout << "============================================\n" << endl;

    // ==================== Q1 ====================
    cout << "----- 第1题 -----" << endl;
    cout << "  int a = 10, *p = &a;\n" << endl;
    cout << "  判断: *p 的值等于 a 的值。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'T' || ans == 't') {
        cout << "  ✅ 正确! *p 解引用得到 10，与 a 的值相同。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。*p 解引用得到 10，与 a 的值相同。\n" << endl;
    }

    // ==================== Q2 ====================
    cout << "----- 第2题 -----" << endl;
    cout << "  int a = 10, *p = &a;\n" << endl;
    cout << "  判断: p 的值等于 a 的值。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'F' || ans == 'f') {
        cout << "  ✅ 正确! p 存的是地址(如 0x1000)，a 存的是值(10)。" << endl;
        cout << "     两者类型不同，不能比较。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。p 存地址，a 存数值，类型不兼容。\n" << endl;
    }

    // ==================== Q3 ====================
    cout << "----- 第3题 -----" << endl;
    cout << "  int a = 10, b = 20;" << endl;
    cout << "  int *p = &a;" << endl;
    cout << "  p = &b;\n" << endl;
    cout << "  判断: 执行后 *p == 20。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'T' || ans == 't') {
        cout << "  ✅ 正确! p 重新指向 b，*p 就是 b 的值 20。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。p 被改为指向 b，解引用得到 b 的值 20。\n" << endl;
    }

    // ==================== Q4 ====================
    cout << "----- 第4题 -----" << endl;
    cout << "  int *p1, *p2;" << endl;
    cout << "  p1 + p2;\n" << endl;
    cout << "  判断: 两个指针相加是合法的操作。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'F' || ans == 'f') {
        cout << "  ✅ 正确! 指针相加没有意义，编译器会报错。" << endl;
        cout << "     (指针相减是合法的，相加则不允许。)\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。两个指针相加在 C/C++ 中是非法的。\n" << endl;
    }

    // ==================== Q5 ====================
    cout << "----- 第5题 -----" << endl;
    cout << "  int a[10];" << endl;
    cout << "  int *p1 = &a[5], *p2 = &a[1];" << endl;
    cout << "  int diff = p1 - p2;  // diff == 4\n" << endl;
    cout << "  判断: 同类型指针相减得到两地址之间的元素个数。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'T' || ans == 't') {
        cout << "  ✅ 正确! 5 - 1 = 4，相差 4 个元素(不是 16 字节)。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。p1 - p2 = 4 个元素，不是字节数。\n" << endl;
    }

    // ==================== Q6 ====================
    cout << "----- 第6题 -----" << endl;
    cout << "  int a[] = {1, 2, 3, 4, 5};" << endl;
    cout << "  int *p = a;\n" << endl;
    cout << "  判断: a[2] 等价于 *(p + 2)。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'T' || ans == 't') {
        cout << "  ✅ 正确! a[n] 在 C/C++ 中就是 *(a + n) 的语法糖。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。a[2] = *(a+2) = *(p+2)，完全等价。\n" << endl;
    }

    // ==================== Q7 ====================
    cout << "----- 第7题 -----" << endl;
    cout << "  int a[] = {1, 2, 3, 4, 5};\n" << endl;
    cout << "  判断: 2[a] 是合法的表达式，且值为 3。" << endl;
    cout << "        (提示: a[b] 等价于 *(a+b))" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'T' || ans == 't') {
        cout << "  ✅ 正确! 2[a] = *(2+a) = *(a+2) = a[2] = 3。" << endl;
        cout << "     这是 C/C++ 的一个有趣特性。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。a[b] = *(a+b)，所以 2[a] = *(2+a) = a[2] = 3。\n" << endl;
    }

    // ==================== Q8 ====================
    cout << "----- 第8题 -----" << endl;
    cout << "  const char *str = \"hello\";\n" << endl;
    cout << "  判断: *(str + 1) == 'e'。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'T' || ans == 't') {
        cout << "  ✅ 正确! str 指向 'h'，str+1 指向 'e'。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。str+1 向后移动一个 char，指向 'e'。\n" << endl;
    }

    // ==================== Q9 ====================
    cout << "----- 第9题 -----" << endl;
    cout << "  char str[] = \"world\";\n" << endl;
    cout << "  判断: str 和 &str[0] 的值(地址)相同。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'T' || ans == 't') {
        cout << "  ✅ 正确! 数组名在表达式中退化为指向首元素的指针。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。数组名退化为 &arr[0]，所以两者地址相同。\n" << endl;
    }

    // ==================== Q10 ====================
    cout << "----- 第10题 -----" << endl;
    cout << "  int a = 5;" << endl;
    cout << "  int *p = &a;" << endl;
    cout << "  *p = 8;\n" << endl;
    cout << "  判断: 执行后 a 仍然等于 5。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'F' || ans == 'f') {
        cout << "  ✅ 正确! *p = 8 通过指针修改了 a，a 变为 8。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。*p 就是 a 的别名，修改 *p 直接改变 a。\n" << endl;
    }

    // ==================== Q11 ====================
    cout << "----- 第11题 -----" << endl;
    cout << "  int a = 10, b = 20;" << endl;
    cout << "  const int *p = &a;   // 指向常量的指针" << endl;
    cout << "  p = &b;    // 语句A" << endl;
    cout << "  *p = 30;   // 语句B\n" << endl;
    cout << "  判断: 语句A 和 语句B 都合法。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'F' || ans == 'f') {
        cout << "  ✅ 正确! 语句A合法(指针本身可以改指向)。" << endl;
        cout << "     语句B非法——不能通过指向常量的指针修改值。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。只有 A 合法，B 因 const 修饰而非法。\n" << endl;
    }

    // ==================== Q12 ====================
    cout << "----- 第12题 -----" << endl;
    cout << "  int a = 10;" << endl;
    cout << "  int *const p = &a;  // 常量指针" << endl;
    cout << "  p = &a;             // 重新赋值?\n" << endl;
    cout << "  判断: int *const p 可以重新指向别的变量。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'F' || ans == 'f') {
        cout << "  ✅ 正确! int *const p: 指针本身是常量。" << endl;
        cout << "     初始化后不能重新指向别的变量。" << endl;
        cout << "     从右往左读: p 是一个 const 指针，指向 int。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。const 锁住的是指针本身，不是指向的值。" << endl;
        cout << "     从右往左读: p 是一个 const 指针，指向 int。\n" << endl;
    }

    // ==================== Q13 ====================
    cout << "----- 第13题 -----" << endl;
    cout << "  void func(char *s) { s[0] = 'X'; }" << endl;
    cout << "  func(\"hello\");  // 传入字符串字面量\n" << endl;
    cout << "  判断: 通过 char* 修改字符串字面量是安全的。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'F' || ans == 'f') {
        cout << "  ✅ 正确! 字符串字面量存储在只读区。" << endl;
        cout << "     修改它会导致未定义行为(通常崩溃)。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。字符串字面量是只读的，修改会崩溃。\n" << endl;
    }

    // ==================== Q14 ====================
    cout << "----- 第14题 -----" << endl;
    cout << "  int *p = NULL;  // 或 nullptr\n" << endl;
    cout << "  判断: 对空指针解引用 *p 得到的值为 0。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'F' || ans == 'f') {
        cout << "  ✅ 正确! 解引用 NULL 指针是未定义行为。" << endl;
        cout << "     通常导致段错误(崩溃)，而不是返回 0。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。*p(NULL) 会崩溃(段错误)，不会返回 0。\n" << endl;
    }

    // ==================== Q15 ====================
    cout << "----- 第15题 -----" << endl;
    cout << "  int a = 10;" << endl;
    cout << "  int *p1 = &a, *p2 = &a;\n" << endl;
    cout << "  判断: p1 == p2 结果为 true。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'T' || ans == 't') {
        cout << "  ✅ 正确! 两个指针都存了 a 的地址，地址相同。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。p1 和 p2 都存的是 &a，比较结果相等。\n" << endl;
    }

    // ==================== Q16 ====================
    cout << "----- 第16题 -----" << endl;
    cout << "  int a[] = {1, 2, 3};" << endl;
    cout << "  int *p = a;" << endl;
    cout << "  p++;\n" << endl;
    cout << "  判断: p 现在指向 a[1]，且 *p == 2。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'T' || ans == 't') {
        cout << "  ✅ 正确! p++ 后移 sizeof(int) 字节，指向 a[1]=2。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。p++ 移动到下一个 int，即 a[1]，值为 2。\n" << endl;
    }

    // ==================== Q17 ====================
    cout << "----- 第17题 -----" << endl;
    cout << "  int a[] = {1, 2, 3, 4, 5};" << endl;
    cout << "  int *p = a;\n" << endl;
    cout << "  判断: (p + 1) 和 (a + 1) 指向同一个位置。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'T' || ans == 't') {
        cout << "  ✅ 正确! p == a (都指向 a[0])，p+1 和 a+1 都指向 a[1]。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。两者指向相同位置 &a[1]。\n" << endl;
    }

    // ==================== Q18 ====================
    cout << "----- 第18题 -----" << endl;
    cout << "  int *p;   // 未初始化（野指针）\n" << endl;
    cout << "  判断: *p = 5; 是安全的操作。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'F' || ans == 'f') {
        cout << "  ✅ 正确! 野指针指向随机地址。" << endl;
        cout << "     写入会导致崩溃或破坏数据。使用前必须初始化!\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。向随机地址写入是未定义行为，非常危险。\n" << endl;
    }

    // ==================== Q19 ====================
    cout << "----- 第19题 -----" << endl;
    cout << "  char str[] = \"abc\";" << endl;
    cout << "  char *p = str;\n" << endl;
    cout << "  判断: sizeof(str) == sizeof(p)。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'F' || ans == 'f') {
        cout << "  ✅ 正确! sizeof(str)=4 (a,b,c,\\0 共4字节)。" << endl;
        cout << "     sizeof(p)=4或8 (地址宽度，取决于32/64位)。\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。数组大小包括所有元素+结束符。" << endl;
        cout << "     指针大小只是地址宽度(4或8字节)。\n" << endl;
    }

    // ==================== Q20 ====================
    cout << "----- 第20题 -----" << endl;
    cout << "  void swap_wrong(int *a, int *b) {" << endl;
    cout << "      int *t = a;" << endl;
    cout << "      a = b;" << endl;
    cout << "      b = t;" << endl;
    cout << "  }" << endl;
    cout << "  int x = 1, y = 2;" << endl;
    cout << "  swap_wrong(&x, &y);\n" << endl;
    cout << "  判断: 调用后 x == 2, y == 1。" << endl;
    cout << "  你的答案 (T/F): ";
    cin >> ans;
    if (ans == 'F' || ans == 'f') {
        cout << "  ✅ 正确! 函数只交换了形参指针本身(值传递)。" << endl;
        cout << "     main 中的 x 和 y 没有变化(仍为 1 和 2)。" << endl;
        cout << "     正确写法: int t = *a; *a = *b; *b = t;\n" << endl;
        score++;
    } else {
        cout << "  ❌ 错误。交换的是指针副本，不影响原变量。" << endl;
        cout << "     应交换 *a 和 *b 的值。\n" << endl;
    }

    // ==================== 计分 ====================
    cout << "============================================" << endl;
    cout << "  你的得分: " << score << " / 20" << endl;
    if (score == 20) {
        cout << "  🎉 满分! 指针已经完全掌握!" << endl;
    } else if (score >= 15) {
        cout << "  👍 不错! 复习一下错题即可。" << endl;
    } else if (score >= 10) {
        cout << "  📖 还需巩固，重点看错题涉及的知识点。" << endl;
    } else {
        cout << "  📚 需要多加练习，建议重新过一遍指针基础。" << endl;
    }
    cout << "============================================" << endl;

    return 0;
}
