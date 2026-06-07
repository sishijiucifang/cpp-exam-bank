/*
 * 来源：C++题库 题号985
 * 章节：第7章-结构体与链表
 * 难度：中
 * 题序：第117题
 *
 * 题目：给定一个书籍列表，每本图书都包含一个正整数
 */

第117题 （0.1分）        题号:985        难度:中        第7章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

  题目：给定一个书籍列表，每本图书都包含一个正整数
  的图书ID和一个字符串类型的图书名称，要求编写函数
  void sort(book bookList[], int n)，该函数将bookList
  里面的所有书籍按照图书编号进行从小到大排序，其中n
  是图书列表中的书籍数目。
  
--------------------------------------------------
        注意：部分源程序给出如下。请勿改动主函数main和其它
        函数中的任何内容，不要修改或删除“program”和
        “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>

using namespace std;

struct book
{
        unsigned ID;
        char bookName[100];
};

void grading();
void sort(book bookList[], int n);

/**********Program**********/


/**********  End  **********/


int main()
{
        book bookList[3] = {{1003, "大学计算"}, {1001, "大学物理"}, {1002, "军事基础"}};
        sort(bookList, 3);
        for (int i = 0; i < 3; i++)
                cout << bookList[i].ID << " " << bookList[i].bookName << endl;

        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i,j,n,k;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);

        book bookList[10];
        for (i = 0; i < 10; i++)
        {
                infile >> bookList[i].ID >> bookList[i].bookName;
        }

        for (i = 0; i < 10; i++)
        {
                sort(bookList, i + 1);
                for (j = 0; j <= i; j++)
                        outfile << bookList[j].ID << " " << bookList[j].bookName << " ";
                outfile << endl;
        }
        infile.close();
        outfile.close();
}




/* ───────── 参考答案 ─────────
void sort(book bookList[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (bookList[i].ID > bookList[j].ID)
			{
				book tmp = bookList[i];
				bookList[i] = bookList[j];
				bookList[j] = tmp;
			}
		}
	}
}
   ─────────────────────────── */
