/*
 * @Author: your name
 * @Date: 2020-09-07 08:30:43
 * @LastEditTime: 2020-09-08 16:21:02
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_5_1.cpp
 */
#include "iostream"

using namespace std;

class Complex {
public:
        double real, imag;
        Complex() { }
        Complex(double r) { real = r, imag = 0.0; }
        Complex(double r, double i) { real = r, imag = i; }
        ~Complex() { }
        friend Complex operator+(Complex& co1, Complex& co2)
        {
                return Complex(co1.real + co2.real, co1.imag + co2.imag);
        }
        void print()
        {
                cout << real;
                if (imag > 0)
                        cout << "+";
                if (imag != 0)
                        cout << imag << "i" << endl;
        }
};

int main(int argc, char const* argv[])
{
        Complex com1(1.1, 2.1);
        Complex com2(1.1);
        Complex total(0.0, 0.0);
        total = com1 + com2;
        total.print();
        return 0;
}