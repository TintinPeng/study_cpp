/*
 * @Author: tintin
 * @Date: 2020-07-31 10:26:57
 * @LastEditTime: 2020-08-31 01:31:12
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_2_22.cpp
 */
#include "iostream"
using namespace std;

int a[] = { 1, 3, 5, 7, 9 };

int& index(int i)
{
        return a[i];
}

int main()
{
        /*
         * 使用引用返回函数值
         */
        index(2) = 25;
        cout << index(2) << endl;
        for (int i = 0; i < 5; i++) {
                cout << a[i] << endl;
        }
}