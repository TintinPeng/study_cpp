/*
 * @Author: tinin
 * @Date: 2020-07-31 10:25:54
 * @LastEditTime: 2020-07-31 10:33:05
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_2_18.cpp
 */
#include "iostream"
using namespace std;
int main()
{
    int i;
    int &j = i;
    i = 30;
    cout << "i = " << i << "\t"
         << "j = " << j << endl;
    j = 80;
    cout << "i = " << i << "\t"
         << "j = " << j << endl;
    cout << "变量 i 的地址" << &i << endl;
    cout << "引用 j 的地址" << &j << endl;
}
