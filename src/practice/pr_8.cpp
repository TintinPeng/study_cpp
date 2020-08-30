/*
 * @Author: your name
 * @Date: 2020-08-27 09:22:21
 * @LastEditTime: 2020-08-28 20:29:24
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/practice/pr_8.cpp
 */
#include "iostream"

using namespace std;

bool IsEven(int number)
{
    return !(number & 1);
}

int main(int argc, char const* argv[])
{
    int a = 11;
    bool b;
    b = IsEven(a);
    if (b == true) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
