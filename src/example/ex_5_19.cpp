/*
 * @Author: your name
 * @Date: 2020-09-12 21:16:31
 * @LastEditTime: 2020-09-12 21:26:42
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_5_19.cpp
 */
#include "iostream"

using namespace std;

class Base {
private:
        int a, b;

public:
        Base(int _a, int _b) { a = _a, b = _b; }
        ~Base() { }
        void show()
        {
                cout << "a=" << a << "\t"
                     << "b=" << b << endl;
        }
};

class Derived : public Base {
private:
        int c;

public:
        Derived(int _a, int _b, int _c)
                : Base(_a, _b)
        {
                c = _c;
        }
        void show()
        {
                cout << "c=" << c << endl;
        }
};
int main(int argc, char const* argv[])
{
        Base    base(50, 50), *base_p;
        Derived derived(10, 20, 30);
        base_p = &base;
        base_p->show();
        base_p = &derived;
        base_p->show();
        return 0;
}