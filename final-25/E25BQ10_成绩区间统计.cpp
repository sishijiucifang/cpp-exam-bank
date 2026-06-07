/*
 * 十、（10分）
 * 某次大学计算的考试成绩存储在一个txt文件中，成绩数据的各列属性如下
 * 学号
 * 成绩
 * 每一行是一位同学的学号和成绩，中间有空格分隔，学号和成绩均为整数，现在请你编写函数，帮助老师统计某一成绩区间内的学生数量，例如统计[60,70]成绩区间内学生的数量，需要返回成绩大于等于60，小于等于70的学生人数。
 * 成绩文件内容示例如下：
 * 25001 85
 * 25002 92
 * 25003 78
 * 25004 88
 *
 * 请完成函数countStudentsInRange(int lower, int upper, const char* filepath)，其中filepath是成绩文件的路径，lower是成绩区间左边界，upper是成绩区间右边界。
 * 注意：
 * 1.成绩文件不包括属性行，只包括成绩数据。
 * 2.成绩区间为闭区间，即包括边界值。
 *
 * 输入格式：
 * 输入为一整行，包含两个整数，中间有空格分隔，第一个整数表示成绩区间左边界，第二个整数表示成绩区间右边界。
 * 输出格式：
 * 输出为一个整数，表示在成绩区间内的学生人数。
 *
 * 输入样例1：60 70
 * 输出样例1：
 * 22
 * 输入样例2：60 80
 * 输出样例2：
 * 42
 */

#include <stdio.h>

int countStudentsInRange(int lower, int upper, const char* filepath) {
    /********Program********/

    /********End**********/
}

int main() {
    int lower, upper;
    scanf("%d %d", &lower, &upper);
    const char* filepath = "scores.txt";
    int count = countStudentsInRange(lower, upper, filepath);
    printf("%d\n", count);
    return 0;
}
