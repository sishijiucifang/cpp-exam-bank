/*
 * 二、（10分）
 * 输入两个字符，分别表示交通灯颜色（字符 'R'、'G'、'Y'）和当前行人状态（字符 'A' 表示有人，'N' 表示无人）。根据以下规则判断是否可以通行。
 * 如果是红灯 'R' 并且有人：输出 "Wait"；
 * 如果是红灯 'R' 并且无人：输出 "Safe"；
 * 如果是绿灯 'G'：输出 "Go"；
 * 如果是黄灯 'Y' 并且有人：输出 "Caution"；
 * 如果是黄灯 'Y' 并且无人：输出 "Safe"；
 * 其他情况输出 "Invalid"。
 *
 * 输入格式：
 * 两个字符，分别为灯的颜色（'R'、'G'、'Y'）和是否有人（'A'、'N'）。
 * 输出格式：
 * 一个字符串，如 Wait、Go、Caution、Safe 或 Invalid。
 *
 * 输入样例1：
 * R A
 * 输出样例1：
 * Wait
 *
 * 输入样例2：
 * G A
 * 输出样例2：
 * Go
 */

#include <stdio.h>

int main() {
    char light, person;
    scanf(" %c %c", &light, &person);

    /********Program********/
    if(light=='R'&&person=='A')printf("%s","Wait");
    else if(light=='R'&&person=='N')printf("%s","Safe");
    else if(light=='G')printf("%s","Go");
    else if(light=='Y'&&person=='A')printf("%s","Caution");
    else if(light=='Y'&&person=='N')printf("%s","Safe");
    else printf("%s","Invalid");

    /********End**********/

    return 0;
}
