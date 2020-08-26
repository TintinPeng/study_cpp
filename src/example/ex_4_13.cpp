/*
 * @Author: your name
 * @Date: 2020-08-26 11:23:49
 * @LastEditTime: 2020-08-26 11:36:20
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_13.cpp
 */

#include "iostream"

using namespace std;

class X {
private:
    int x;

public:
    X() { }
    ~X() { }
    void setX(int _x) { x = _x; }
    void prtX() { cout << "x=" << x << endl; }
};

class Y {
private:
    int y;

public:
    Y() { }
    ~Y() { }
    void setY(int _y) { y = _y; }
    void prtY() { cout << "y=" << y << endl; }
};

class Z : public X, private Y {
private:
    int z;

public:
    Z() { }
    ~Z() { }
    void setZ(int _x, int _y)
    {
        z = _x;
        setY(_y);
    }
    void prtZ()
    {
        prtY();
        cout << "z=" << z << endl;
    }
};

int main(int argc, char const* argv[])
{
    Z obj;
    obj.setX(3);
    obj.prtX();
    //obj.setY(4);
    //obj.prtY();
    obj.setZ(6, 8);
    obj.prtZ();
    return 0;
}
