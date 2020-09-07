/*
 * @Author: your name
 * @Date: 2020-09-07 08:30:43
 * @LastEditTime: 2020-09-07 09:16:43
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_5_1.cpp
 */
#include "iostream"

using namespace std;

class Complex {
public:
        double real, imag;
        Complex(double r = 0, double i = 0)
                : real(r)
                , imag(i)
        {
        }
        ~Complex() { }
};

Complex operator+(Complex co1, Complex co2)
{
        return Complex(co1.real + co2.real, co1.imag + co2.imag);
}

int main(int argc, char const* argv[])
{
        Complex   com1(1.1, 2.1), com2(2.0, 3.3), totall1, totall2;
        totall1 = operator+(com1, com2);
        cout << "real1=" << totall1.real << "\t"
             << "imag1=" << totall1.imag << endl;
        totall2 = com1 + com2;
        cout << "real2=" << totall2.real << "\t"
             << "imag2=" << totall2.imag << endl;
        return 0;
}