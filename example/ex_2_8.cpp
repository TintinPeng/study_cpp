/*
 * @Author: your name
 * @Date: 2020-08-01 09:37:23
 * @LastEditTime: 2020-08-01 09:44:33
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_2_8.cpp
 */

#include "iostream"
using namespace std;

inline int box(int i, int j, int k)
{
    return i * j * k;
}

int main()
{
    /*
     * 将函数定义成内联函数
     */
    int a, b, c, v;
    cin >> a >> b >> c;
    v = box(a, b, c);
    cout << "a*b*c = " << v << endl;
}