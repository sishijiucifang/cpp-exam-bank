/*
 * 来源：C++题库 题号752
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第54题
 *
 * 题目：题号752
 */

第54题 （0.1分）        题号:752        难度:中        第6章
/**********
编写一个Matrix类，实现下列要求：
能够输入、输出矩阵，执行矩阵转置，加减法（包括负数）、乘法,将矩阵输出；
根据主函数的要求编写；
保证数据合法；
**********/
#include<iostream.h>
#include<time.h>
#include<stdlib.h>
#include<fstream.h>
#define N 100

int testresult = 1;

/**********program**********/


/**********end**********/
ostream &operator <<(ostream &output,const Matrix &x)//   <<运算符已经重载
{
    for (int i=0;i<x.r;i++)
        {
        for (int j=0;j<x.c;j++)
            output<<x.data[i][j]<<" ";
                if (testresult) output<<endl;
        }
        if (testresult) output<<endl;
    return output;
}

void grading();

Matrix matt[4];

int main()
{
    cin>>matt[1]>>matt[2];//重载>>
    matt[3]=matt[1]+matt[2];//重载+
    cout<<matt[3];//重载<<
    matt[3]=matt[1]-matt[2];//重载-
    cout<<matt[3];
    matt[3]=matt[1]*matt[2];//重载*
    cout<<matt[3];
    matt[3].trans();//转置
    cout<<matt[3];
    matt[3]=-matt[3];//重载-(负号)
    cout<<matt[3];
    grading();
    return 0;
}

//以下部分忽略阅读

void grading()
{
        testresult=0;
        int i;
                Matrix mat[4];
        ifstream infile("in.txt",ios::in);
        ofstream outfile("out.txt",ios::out);
        for (i=0;i<5;i++)
        {
                infile>>mat[1]>>mat[2];
                mat[3]=mat[1]+mat[2];
                outfile<<mat[3];
                mat[3]=mat[1]-mat[2];
                outfile<<mat[3];
                mat[3].trans();
                outfile<<mat[3];
                                mat[3]=-mat[3];
                                outfile<<mat[3];
                                outfile<<endl;
        }
        for (i=0;i<5;i++)
        {
                infile>>mat[1]>>mat[2];
                mat[3]=mat[1]*mat[2];
                outfile<<mat[3];
                                 outfile<<endl;
       }
        infile.close();
        outfile.close();
}








/* ───────── 参考答案 ─────────
class Matrix
{
        friend Matrix operator +(const Matrix &,const Matrix &);
        friend Matrix operator -(const Matrix &,const Matrix &);
        friend Matrix operator *(const Matrix &,const Matrix &);
        friend Matrix operator -(const Matrix &);
        friend istream &operator >>(istream & ,Matrix &);
        friend ostream &operator <<(ostream & ,const Matrix &);
    public:
        Matrix();
        ~Matrix();
        void trans();
        Matrix &operator =(const Matrix &);
    private:
        int data[N][N],r,c;
};

Matrix::Matrix()
{
    r=c=0;
    for (int i=0;i<N;i++)
        for (int j=0;j<N;j++)
            data[i][j]=0;
}

Matrix::~Matrix()
{
}

void Matrix::trans()
{
    int k,t;
    k=(r>c)?r:c;
    for (int i=0;i<r;i++)
        for (int j=i+1;j<c;j++)
        {
            t=data[i][j];
            data[i][j]=data[j][i];
            data[j][i]=t;
        }
}

Matrix & Matrix::operator =(const Matrix &y)
{
    if (this==&y) return *this;
    r=y.r,c=y.c;
    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            data[i][j]=y.data[i][j];
    return *this;
}

Matrix operator +(const Matrix &x,const Matrix &y)
{
    Matrix ans;
    ans.r=x.r,ans.c=x.c;
    for (int i=0;i<x.r;i++)
        for (int j=0;j<x.c;j++)
            ans.data[i][j]=x.data[i][j]+y.data[i][j];
    return ans;
}

Matrix operator -(const Matrix &x,const Matrix &y)
{
    Matrix ans;
    ans.r=x.r,ans.c=x.c;
    for (int i=0;i<x.r;i++)
        for (int j=0;j<x.c;j++)
            ans.data[i][j]=x.data[i][j]-y.data[i][j];
    return ans;
}

Matrix operator -(const Matrix &x)
{
    Matrix ans;
    ans.r=x.r,ans.c=x.c;
    for (int i=0;i<x.r;i++)
        for (int j=0;j<x.c;j++)
            ans.data[i][j]=-x.data[i][j];
    return ans;
}

Matrix operator *(const Matrix &x,const Matrix &y)
{
    Matrix ans;
    ans.r=x.r,ans.c=y.c;
    for (int i=0;i<x.r;i++)
        for (int j=0;j<y.c;j++)
            for (int k=0;k<x.c;k++)
                ans.data[i][j]+=x.data[i][k]*y.data[k][j];
    return ans;
}

istream &operator >>(istream &input,Matrix &x)
{
    input>>x.r>>x.c;
    for (int i=0;i<x.r;i++)
        for (int j=0;j<x.c;j++)
            input>>x.data[i][j];
    return input;
}
   ─────────────────────────── */
