/*
 * @Author: your name
 * @Date: 2020-09-12 19:30:35
 * @LastEditTime: 2020-09-12 19:34:08
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/practice/pr_10.cpp
 */
#include "iostream"

using namespace std;

class A {
public:
        int a, b;
        A()
                : a(0)
                , b(1)
        {
                // a = 10, b = 15;
        }
        ~A() { }
};

int main(int argc, char const* argv[])
{
        A x;
        cout << x.a << "\t" << x.b << endl;

        return 0;
}