/*
 * @Author: your name
 * @Date: 2020-08-14 19:06:03
 * @LastEditTime: 2020-08-31 00:23:12
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/practice/pr_3.cpp
 */

#include "iostream"
using namespace std;

int main(int argc, char const* argv[])
{
        /* 
     * 据说是一个常见bug
     */
        int a = 350;
        float b = 1.4;
        double c = 1.4;

        cout << a * b << "\t" << a * c << endl;
        cout << b * a << "\t" << c * a << endl;
        return 0;
}
