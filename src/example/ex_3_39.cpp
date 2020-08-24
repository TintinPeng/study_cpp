/*
 * @Author: your name
 * @Date: 2020-08-24 13:31:53
 * @LastEditTime: 2020-08-24 13:35:47
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_39.cpp
 */
#include "iostream"

using namespace std;

int add(const int& i, const int& j)
{
    //i = i + 10;
    return i + j;
}

int main(int argc, char const* argv[])
{
    int a = 20, b = 30;
    cout << a << "+" << b << "=" << add(a, b) << endl;
    return 0;
}
