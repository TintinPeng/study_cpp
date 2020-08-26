/*
 * @Author: your name
 * @Date: 2020-08-26 15:52:03
 * @LastEditTime: 2020-08-26 19:14:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_14.cpp
 */
#include "iostream"

using namespace std;

class X {
private:
    int x;

public:
    X(int _x) { x = _x; }
    ~X() { cout << "X的析构函数被调用" << endl; }
    int getX() { return x; }
};

class Y {
private:
    int y;

public:
    Y(int _y) { y = _y; }
    ~Y() { cout << "Y的析构函数被调用" << endl; }
    int getY() { return y; }
};

class Z : public X, private Y {
private:
    int z;

public:
    Z(int _x, int _y, int _z)
        : X(_x)
        , Y(_y)
    {
        z = _z;
    }
    ~Z() { cout << "Z的析构函数被调用" << endl; }
    int getZ() { return z; }
    int getY() { return Y::getY(); }
};

int main()
{
    //多重继承下派生类构造函数和析构函数的定义方法
    Z obj(1, 2, 3);
    cout << "x=" << obj.getX() << endl;
    cout << "y=" << obj.getY() << endl;
    cout << "z=" << obj.getZ() << endl;
    return 0;
}