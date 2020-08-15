/*
 * @Author: your name
 * @Date: 2020-08-12 10:43:37
 * @LastEditTime: 2020-08-12 10:46:24
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_19.cpp
 */

#include "iostream"

using namespace std;

class A {
private:
    int x;

public:
    A(int x1)
    {
        x = x1;
    }

    ~A()
    {
    }

    void disp()
    {
        cout << "this=" << this << "   x=" << this->x << endl;
    }
    /*
     * void disp(*this)
     * {
     *      cout << "x=" << this->x << endl;
     * }
     */
};

int main(int argc, char const* argv[])
{
    /*
     * 显式this指针
     */
    A a(1), b(2), c(2);
    cout << "a:";
    a.disp();
    cout << "b:";
    b.disp();
    cout << "c:";
    c.disp();
    return 0;
}
