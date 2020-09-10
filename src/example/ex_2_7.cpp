/*
 * @Author: your name
 * @Date: 2020-08-01 09:37:06
 * @LastEditTime: 2020-08-31 00:32:47
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_2_7.cpp
 */

#include "iostream"
using namespace std;

int add(int, int);

int main()
{
        /*
         * 函数原型
         */
        int x = 1, y = 2;
        int z;
        z = add(x, y);
        cout << "z = " << z << endl;
}

int add(int x, int y)
{
        return x + y;
}