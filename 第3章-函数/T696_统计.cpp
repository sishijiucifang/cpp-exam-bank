/*
 * 来源：C++题库 题号696
 * 章节：第3章-函数
 * 难度：中
 * 题序：第151题
 *
 * 题目：给定一组十进制正整数，请统计各个正整数的各位
 */

第151题 （0.1分）        题号:696        难度:中        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：给定一组十进制正整数，请统计各个正整数的各位
      数字中0的个数。数据保存在f1.txt文件中，要求编写
      计算0的个数的函数countZero。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在注释形式标识Program和
      End之间填入所编写的若干语句。

------------------------------------------------*/

#include <iostream>
#include <fstream>

using namespace std;

int countZero(int num)
{
        int digi, count = 0;

        /**********Program**********/
        

        /**********  End  **********/
}

int main()
{
        int num, count = 0;

        ifstream input;
        input.open("f1.txt", ios::in);
        ofstream output;
        output.open("f2.txt",ios::out);
       
                while(!input.eof())

                {
                        input >> num;

                        output << countZero(num);
                        count++;
                        if(count == 40)
                        {
                                count = 0;
                                output << endl;
                        }
                        else
                                output  << " ";
                }
        
        
        input.close();
        output.close();

        cout <<"Press the enter key to exit!" << endl;
        cin.ignore(cin.rdbuf()->in_avail() + 1);

        return 0;
}



/* ───────── 参考答案 ─────────
if(num == 0) return 1;
while(num != 0)
	{
		digi = num % 10;
		if(0 == digi)
			count += 1;
		num = (num - digi) / 10;
	}
	return count;
   ─────────────────────────── */
