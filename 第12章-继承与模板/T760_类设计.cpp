/*
 * 来源：C++题库 题号760
 * 章节：第12章-继承与模板
 * 难度：较难
 * 题序：第62题
 *
 * 题目：编写书架类Shelf，一个书架上最多能放1000本书，
 */

第62题 （0.1分）        题号:760        难度:较难        第12章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写书架类Shelf，一个书架上最多能放1000本书，
      程序中书是类Book的实例。要求类Shelf能满足程序
      要求的功能。即实现加入书籍、输出书架中所有书
      的信息、清空书架等功能。main函数中有每个功能
      详细描述。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
int grading();

class Book {
public:
        Book(){}
        Book(char * name, int pages)
        {
                strcpy(this->name,name);
                this->pages = pages;
        }
        void output()
        {
                cout<<"("<<name<<", "<<pages<<"pages)\n";
        }
public:
        char name[32]; //书名
        int pages;  //页数
};
/**********Program**********/










/**********  End  **********/        

int main ()
{
        Book  a("电话号码本",20), b("成语溯源",245),c("人的劣根性",163);
        Shelf myshelf;        //定义我的书架
        myshelf.add(a); //将书a放入书架，按从薄到厚的顺序放
        myshelf.add(b); //将书b放入书架，按从薄到厚的顺序放
        myshelf.add(c); //将书c放入书架，按从薄到厚的顺序放
        myshelf.output();  //按从薄到厚的顺序输出所有书的信息，输出格式自定
        myshelf.clear();  //清空书架中的书
//忽略阅读
        grading();
//忽略阅读结束
        return 0;
}

//以下忽略阅读
int grading()
{
        int i,k=0,a;
        Book  bk[20];
        char nm[5];
        int n;
        Shelf sf;
        ifstream ifile;
        ofstream ofile;
        ifile.open ("in.txt",ios::in);
        ofile.open ("out.txt",ios::out);

        for (i=0;i<20;i++)
        {
                for(k=0;k<4;k++)
                {
                        ifile>>n;
                        nm[k] = n%26+'a';
                }
                nm[k]=0;
                ifile>>n;
                strcpy(bk[i].name,nm);
                bk[i].pages = n%300+14;
        }
        k=2;
        for(i=0;i<3;i++)
        {
                sf.clear();
                for(a = k;a<k+3;a++)
                        sf.add(bk[a]);
                for(int m=0;m<sf.num;m++)
                        ofile<<"("<<sf.arr[m]->name<<", "<<sf.arr[m]->pages<<")\n";
                k+=2;
        }
        ifile.close();
        ofile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
class Shelf {
public:
	Shelf()
	{
		num = 0;
	}
	void add(Book &a)
	{
		int i;
		for (i=num-1;i>=0;i--)
		{
			if(arr[i]->pages > a.pages)
				arr[i+1] = arr[i];
			else
				break;
		}
		arr[i+1] = &a;
		num++;
	}
	void output()
	{
		for(int i=0;i<num;i++)
			arr[i]->output();
	}
	void clear ()
	{
		num = 0;
	}
public:
	Book *arr[1000];
	int num;
};
   ─────────────────────────── */
