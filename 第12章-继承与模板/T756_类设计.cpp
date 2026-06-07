/*
 * 来源：C++题库 题号756
 * 章节：第12章-继承与模板
 * 难度：易
 * 题序：第58题
 *
 * 题目：下面的类Box拥有三个数据成员length,width,height
 */

第58题 （0.1分）        题号:756        难度:易        第12章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：下面的类Box拥有三个数据成员length,width,height
      表示盒子的长宽高，构造函数使用参数l、w、h对三
      个数据成员进行初始化，在初始化过程中要判断参数
      的合法性（大于0则合法），如果不合法则使用默认参
      数进行初始化。函数volumn计算对象的体积并返回。
      完成这2个函数的编写。
         
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写
      代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream>
#include <fstream>

using namespace std;
void grading( );

class Box {
public:
        Box(int l=5, int w=5, int h=5);
        int volumn();
public:
        int length, width, height;        //盒子的长宽高
};
/**********Program**********/


/**********  End  **********/
int main()
{
        Box b(1,3,-5);
        cout<<"Box: "<<b.length<<" "<<b.width<<" "<<b.height<<" "<<b.volumn()<<endl;
        //忽略阅读
        grading( );     
        //忽略阅读结束
        return 0;
}
//以下忽略阅读
void grading( )
{
        int a,b,c;
        ifstream infile("in.txt", ios::in);
        fstream outfile("out.txt",ios::out);
        for (int i=0;i<10;i++)
        {
                infile>>a>>b>>c;
                Box bp(a,b,c);
                outfile<<"Box: "<<bp.length<<" "<<bp.width<<" "<<bp.height<<" "<<bp.volumn()<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
Box::Box(int l, int w, int h)
{
	length = l>0?l:5;
	width = w>0?w:5;
	height = h>0?h:5;
}
int Box::volumn()
{
	return length*width*height;
}
   ─────────────────────────── */
