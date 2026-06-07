/*
 * 来源：C++题库 题号514
 * 章节：第3章-函数
 * 难度：较难
 * 题序：第34题
 *
 * 题目：两队选手每队5人进行一对一的比赛，甲队为A、B、C、D、E，乙队为J、K、L、M、N，
 */

第34题 （0.1分）        题号:514        难度:较难        第3章
/*------------------------------------------------------------------------------
【程序设计】
--------------------------------------------------------------------------------

题目：两队选手每队5人进行一对一的比赛，甲队为A、B、C、D、E，乙队为J、K、L、M、N，
      经过抽签决定比赛配对名单。规定A不和J比赛，M不和D及E比赛。列出所有可能的比
      赛名单，并统计所有可能的比赛名单总数存入变量count。

------------------------------------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;
void writefile(int n);

int main(){
        int count=0;

/*********Program*********/





        
/*********  End  *********/
        cout<<count<<endl;
        writefile(count);
        return 0;
}

void writefile(int n)
{
        fstream myfile;
        myfile.open("out.txt",ios::out);
        myfile<<n<<endl;
        myfile.close();
}




/* ───────── 参考答案 ─────────
char st1[5]={'A','B','C','D','E'},st2[5]={'J','K','L','M','N'};
	int j,k,l,m,n;
	for(j=0;j<5;j++){//0号位
		if(j==0) continue;//A选手不与选手J比赛,即st1[0]不与st2[0]比赛		
		for(k=0;k<5;k++){//1号位
			if(k==j) continue;//剔除乙队占据0号位的选手
			for(l=0;l<5;l++){//2号位
				if(l==j||l==k) continue;//剔除乙队占据0、1号位的选手
				for(m=0;m<5;m++){//3号位
					if(m==j||m==k||m==l) continue;//剔除乙队占据0、1、2号位的选手
					if(m==3) continue;//st1[3]不与st2[3]比赛,即D不与M比赛
					for(n=0;n<5;n++){//4号位
						if(n==j||n==k||n==l||n==m) continue;
//剔除乙队占据0、1、2、3号位的选手
						if(n==3) continue;//st1[4]不与st2[3]比赛,即E不与M比赛
						cout<<st1[0]<<'-'<<st2[j]<<'\t'<<st1[1]<<'-'<<st2[k]<<'\t';
						cout<<st1[2]<<'-'<<st2[l]<<'\t'<<st1[3]<<'-'<<st2[m]<<'\t';
						cout<<st1[4]<<'-'<<st2[n]<<endl;
						count++;
					}
				}
			}
		}
	}
   ─────────────────────────── */
