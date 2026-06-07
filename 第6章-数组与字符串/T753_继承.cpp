/*
 * 来源：C++题库 题号753
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第55题
 *
 * 题目：编写有向图dir_graph类及其派生出的无向图的
 */

第55题 （0.1分）        题号:753        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写有向图dir_graph类及其派生出的无向图的
      undir_graph类，完成添加连边并输出顶点度数
      的操作，要求程序体现出多态性。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写
      代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();

/**********Program**********/


/**********  End  **********/

int main() {
  int i;
  dir_graph* g;
  g=new dir_graph(4);
  g->add_edge(0,1);
  g->add_edge(1,2);
  g->add_edge(2,3);
  g->add_edge(3,0);
  g->add_edge(2,0);
  for (i=0;i<4;i++)
    cout<<"V"<<i<<" "<<g->deg_in(i)<<" "<<g->deg_out(i)<<endl;
  delete g;
  cout<<endl;

  g=new undir_graph(4);
  g->add_edge(0,1);
  g->add_edge(1,2);
  g->add_edge(2,3);
  g->add_edge(3,0);
  g->add_edge(2,0);
  for (i=0;i<4;i++)
    cout<<"V"<<i<<" "<<g->degree(i)<<endl;
  delete g;

  //忽略阅读
  grading();
  //忽略阅读结束

  return 0;
}

//以下忽略阅读
void grading() {
  int n,m,a,b,i,t;
  dir_graph* g;

  ifstream infile("in.txt",ios::in);
  fstream outfile("out.txt",ios::out);

  for (t=0;t<10;t++) {
    infile>>n>>m;
    g=new dir_graph(n);
    for (i=0;i<m;i++) {
      infile>>a>>b;
      g->add_edge(a,b);
    }
    for (i=0;i<n;i++)
      outfile<<i<<" "<<g->deg_in(i)<<" "<<g->deg_out(i)<<" ";
    delete g;

    infile>>n>>m;
    g=new undir_graph(n);
    for (i=0;i<m;i++) {
      infile>>a>>b;
      g->add_edge(a,b);
    }
    for (i=0;i<n;i++)
      outfile<<i<<" "<<g->degree(i)<<" ";
    outfile<<endl;
    delete g;
  }
}




/* ───────── 参考答案 ─────────
class dir_graph {
    public:
      dir_graph(int n=0) {
        for (int i=0;i<n;i++)
          din[i]=dou[i]=0;
      }
      virtual void add_edge(int a,int b) {
        din[b]++;
        dou[a]++;
      }
      virtual int degree(int) {
        return 0;
      }
      int deg_in(int v) {
        return din[v];
      }
      int deg_out(int v) {
        return dou[v];
      }

    private:
      int n,din[50],dou[50];
  };

  class undir_graph : public dir_graph {
    public:
      undir_graph(int n=0)
        : dir_graph(n) {}
      void add_edge(int a,int b) {
        dir_graph::add_edge(a,b);
        dir_graph::add_edge(b,a);
      }
      int degree(int v) {
        return dir_graph::deg_in(v);
      }
  };
   ─────────────────────────── */
