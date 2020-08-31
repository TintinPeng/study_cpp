/*
 * @Author: your name
 * @Date: 2020-08-01 09:49:39
 * @LastEditTime: 2020-08-31 00:36:30
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_2_11.cpp
 */

#include "iostream"
using namespace std;

int mul(int x, int y)
{
        return x * y;
}

int mul(int x, int y, int z)
{
        return x * y * z;
}

int main()
{
        /*
         * 参数个数不同的函数重载
         */
        int a = 3, b = 4, c = 5;
        cout << a << " * " << b << " = " << mul(a, b) << endl;
        cout << a << " * " << b << " * " << c << " = " << mul(a, b, c) << endl;
}