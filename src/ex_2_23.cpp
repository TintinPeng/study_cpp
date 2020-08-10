/*
 * @Author: tintin
 * @Date: 2020-07-31 10:27:05
 * @LastEditTime: 2020-08-10 19:05:50
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_2_23.cpp
 */

#include "iostream"
using namespace std;

int& max(int& num1, int& num2)
{
    return (num1 > num2) ? num1 : num2;
}

int& min(int& num1, int& num2)
{
    return (num1 < num2) ? num1 : num2;
}

int main()
{
    /*
     * 应用引用的综合例子
     */
    int num1, num2;
    cout << "请输入两个数字" << endl;
    cin >> num1 >> num2;
    max(num1, num2) = 0; //将两数中大者赋0
    cout << "num1 = " << num1 << "\t"
         << "num2 = " << num2 << endl;

    cout << "请再次输入两个数字" << endl;
    cin >> num1 >> num2;
    min(num1, num2) = 0; //将两数中小者赋0
    cout << "num1 = " << num1 << "\t"
         << "num2 = " << num2 << endl;
}