/*
 * @Author: tinin
 * @Date: 2020-07-31 10:25:54
 * @LastEditTime: 2020-08-31 10:28:32
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FiilePath: /study_cpp/example/ex_2_18.cpp
 */
#include "iostream"
using namespace std;
int main()
{
	/*
     * 变量和引用的关系
     * 引用声明时就得初始化
     * 以下使用错误
	 * 	//int* p1 = &d;//报错
	 * //int& p2 = d;//报错
     * int i;
     * int &j;
     * j = i;
     */
	int	 i;
	int& j = i;
	i = 30;
	cout << "i = " << i << "\t"
		 << "j = " << j << endl;
	j = 80;
	cout << "i = " << i << "\t"
		 << "j = " << j << endl;
	cout << "变量 i 的地址" << &i << endl;
	cout << "引用 j 的地址" << &j << endl;
}
