/*
 * @Author: your name
 * @Date: 2020-08-01 09:44:12
 * @LastEditTime: 2020-08-31 00:35:32
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_2_10.cpp
 */

#include "iostream"
using namespace std;

inline int doub(int x)
{
        return x * 2;
}

int main()
{
        /*
         * 使用带参数宏定义完成乘2的功能
         */
        for (int i = 0; i < 3; i++) {
                cout << i << " doubled is " << doub(i + 1) << endl;
        }

        cout << "1+2 doubled is " << doub(1 + 2) << endl;
}