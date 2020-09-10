/*
 * @Author: your name
 * @Date: 2020-08-01 09:49:39
 * @LastEditTime: 2020-08-31 00:35:53
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_2_11.cpp
 */

#include "iostream"
using namespace std;

int square(int i)
{
        return i * i;
}

long square(long l)
{
        return l * l;
}

double square(double d)
{
        return d * d;
}

int main()
{
        /*
         * 参数类型不同的函数重载
         * 名字,参数个数,参数类型在检查范围内
         * 返回值类型不在
         */
        int i = 12;
        long l = 1234;
        double d = 5.67;
        cout << i << " * " << i << " = " << square(i) << endl;
        cout << l << " * " << l << " = " << square(l) << endl;
        cout << d << " * " << d << " = " << square(d) << endl;
}