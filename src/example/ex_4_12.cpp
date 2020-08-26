/*
 * @Author: your name
 * @Date: 2020-08-26 11:15:48
 * @LastEditTime: 2020-08-26 11:18:50
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_12.cpp
 */
#include "iostream"

using namespace std;

class A {
private:
    int x;

public:
    A(int _x) { x = _x; }
    ~A() { }
    void print() { cout << "x=" << x << endl; }
};

class B : private A {
private:
    int y;

public:
    B(int _x, int _y)
        : A(_x)
    {
        y = _y;
    }
    ~B() { }
    using A::print;
};

int main()
{
    //访问声明的应用
    B obj(10, 20);
    obj.print();
    return 0;
}
