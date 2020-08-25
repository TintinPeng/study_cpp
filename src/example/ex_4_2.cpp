/*
 * @Author: your name
 * @Date: 2020-08-25 19:40:01
 * @LastEditTime: 2020-08-25 20:53:39
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_2.cpp
 */

#include "iostream"

using namespace std;

class Base {
protected:
    int x;

public:
    Base() { }
    ~Base() { }
    void set_x(int n) { x = n; }
    void prt_x() { cout << "x=" << x << endl; }
};

class Derivel1 : private Base {
protected:
    int y;

public:
    Derivel1() { }
    ~Derivel1() { }
    void set_xy(int sx, int sy)
    {
        x = sx;
        y = sy;
    }
    void prt_xy()
    {
        //cout << "x=" << x << endl;
        prt_x();
        cout << "y=" << y << endl;
    }
};

class Derivel2 : private Derivel1 {
protected:
    int z;

public:
    void set_xyz(int sx, int sy, int sz)
    {
        set_xy(sx, sy);
        z = sz;
    }
    void prt_xyz()
    {
        prt_xy();
        cout << "z=" << z << endl;
    }
};

int main(int argc, char const* argv[])
{
    //私有继承的访问规则举例2
    Base op1;
    op1.set_x(10);
    op1.prt_x();
    cout << "----------" << endl;
    Derivel1 op2;
    op2.set_xy(10, 20);
    op2.prt_xy();
    cout << "----------" << endl;
    Derivel2 op3;
    op3.set_xyz(10, 20, 30);
    op3.prt_xyz();
    return 0;
}
