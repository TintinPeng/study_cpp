/*
 * @Author: your name
 * @Date: 2020-08-25 14:12:58
 * @LastEditTime: 2020-08-25 16:44:48
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_1.cpp
 */
#include "iostream"

using namespace std;

class Base {
private:
    int x;

public:
    Base() { }
    ~Base() { }
    void set_x(int n) { x = n; }
    void prt_x() { cout << "x=" << x << endl; }
};

class Derived : private Base {
private:
    int y;

public:
    Derived() { }
    ~Derived() { }
    void set_xy(int n, int m)
    {
        set_x(n);
        y = m;
    }
    void prt_xy()
    {
        prt_x();
        cout << "y=" << y << endl;
    }
};

int main(int argc, char const* argv[])
{
    Derived obj;
    obj.set_xy(10, 20);
    obj.prt_xy();
    return 0;
}
