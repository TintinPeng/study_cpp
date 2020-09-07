/*
 * @Author: your name
 * @Date: 2020-09-07 10:09:18
 * @LastEditTime: 2020-09-07 11:23:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_5_7.cpp
 */
#include "iostream"

using namespace std;

class Complex {
private:
        int real, imag;

public:
        Complex(int _real = 0, int _imag = 0) { real = _real, imag = _imag; }
        ~Complex() { }
        friend Complex operator+(Complex& com, int a)
        {
                return Complex(com.real + a, com.imag);
        }
        friend Complex operator+(int a, Complex& com)
        {
                return Complex(com.real + a, com.imag);
        }
        void print()
        {
                cout << "real=" << real << "\t"
                     << "imag=" << imag << endl;
        }
};

int main(int argc, char const* argv[])
{
        Complex ob1(20, 30), ob2;
        ob2 = ob1 + 30;
        ob1.print();
        ob2.print();
        ob2 = 30 + ob1;
        ob1.print();
        ob2.print();
        return 0;
}