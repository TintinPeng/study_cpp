/*
 * @Author: your name
 * @Date: 2020-08-25 20:57:55
 * @LastEditTime: 2020-08-25 21:11:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_3.cpp
 */

#include "iostream"

using namespace std;

class Base {
private:
    int x;

protected:
    int y;

public:
    Base() { }
    ~Base() { }
    void set_xy(int m, int n) { x = m, y = n; }
    void prt_xy()
    {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }
};

class Derivel : public Base {
private:
    int z;

public:
    Derivel() { }
    ~Derivel() { }
    void set_xyz(int m, int n, int l)
    {
        set_xy(m, n);
        z = l;
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
    op1.set_xy(10, 20);
    op1.prt_xy();
    cout << "----------" << endl;
    Derivel op2;
    op2.set_xyz(10, 20, 30);
    op2.prt_xyz();
    return 0;
}
