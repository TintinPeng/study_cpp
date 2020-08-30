/*
 * @Author: your name
 * @Date: 2020-08-25 20:57:55
 * @LastEditTime: 2020-08-25 21:30:38
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_4.cpp
 */

#include "iostream"

using namespace std;

class Base {
private:
        int x;

protected:
        int y;

public:
        int z;
        Base() { }
        ~Base() { }
        void set_x(int m) { x = m; }
        int get_x() { return x; }
};

class Derivel : public Base {
private:
        int m;

protected:
        int n;

public:
        int p;
        Derivel() { }
        ~Derivel() { }
        void set_all(int, int, int, int, int, int);
        void prt_all();
};

void Derivel::set_all(int a, int b, int c, int d, int e, int f)
{
        set_x(a);
        y = b;
        c = z;
        m = d;
        n = e;
        p = f;
}

void Derivel::prt_all()
{
        cout << "x=" << get_x() << endl;
        cout << "y=" << y << endl;
        cout << "z=" << z << endl;
        cout << "m=" << m << endl;
        cout << "n=" << n << endl;
        cout << "p=" << p << endl;
}

int main(int argc, char const* argv[])
{
        //保护继承的访问规则举例
        Derivel obj;
        obj.set_all(1, 2, 3, 4, 5, 6);
        obj.prt_all();
        return 0;
}
