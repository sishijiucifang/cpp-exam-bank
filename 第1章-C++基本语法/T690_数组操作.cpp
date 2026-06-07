/*
 * 来源：C++题库 题号690
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第146题
 *
 * 题目：编写一个函数，实现对一维数组的二分（折半）
 */

第146题 （0.1分）        题号:690        难度:中        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写一个函数，实现对一维数组的二分（折半）
      查找算法。如找到，则返回其数组下标，否则返回-1。

      二分查找的思想是：要查找的数据保存在数组中，并且
      数据已经排好序（如从小到大递增）。查找时，每次比较
      数组中间（用数组下标判断）那个数据，如果相等，则找到；
      如果小于它，则在数组左半边按照相同的方式查找；如果大于它，
      则在数组右半边按相同方式查找。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。

------------------------------------------------*/


#include <iostream>
#include <fstream>
#define SIZE 400

using namespace std;

int binary_search (int sorted_array[], int first, int last, int key)
{
/**********Program**********/



  
/**********  End  **********/
}

int main () 
{
  int arr[SIZE];

  ifstream input;
  input.open("f1.txt", ios::in);

  for(int index = 0; index < SIZE; index++)
          input >> arr[index];

  input.close();

  ofstream output;
  output.open("f2.txt",ios::out);

  output << binary_search(arr, 0, SIZE - 1, 16663) << endl;
  output << binary_search(arr, 0, SIZE - 1, 15555) << endl;

  output.close();

  cout <<"Press the enter key to exit!" << endl;
  cin.ignore(cin.rdbuf()->in_avail() + 1);

  return 0;

}



/* ───────── 参考答案 ─────────
int mid;
  while(true)
  {
	  if(last < first)
		  return -1;

	  mid = (first+last)/2;
	  if (key == sorted_array[mid])
		  return mid;
    
	  if (key < sorted_array[mid]) // search the left half
		  last = mid - 1;
	  else  // search the right half
		  first = mid + 1;
  }
   ─────────────────────────── */
