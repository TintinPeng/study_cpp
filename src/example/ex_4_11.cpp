/*
 * @Author: your name
 * @Date: 2020-08-26 11:08:11
 * @LastEditTime: 2020-08-26 11:23:34
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_11.cpp
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
        void print() { A::print(); }
};

int main()
{
        //访问声明的引例
        B obj(10, 20);
        obj.print();
        return 0;
}
