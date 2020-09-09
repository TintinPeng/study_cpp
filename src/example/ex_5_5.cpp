/*
 * @Author: your name
 * @Date: 2020-09-07 09:24:29
 * @LastEditTime: 2020-09-07 11:04:18
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_5_5.cpp
 */
#include "iostream"

using namespace std;

class Complex {
private:
        double real;
        double imag;

protected:
        /* data */

public:
        Complex(double, double);
        ~Complex() { }
        void    print();
        Complex operator+(Complex&);
        Complex operator-(Complex&);
        Complex operator*(Complex&);
        Complex operator/(Complex&);
};

Complex::Complex(double r = 0.0, double i = 0.0)
{
        real = r;
        imag = i;
}

Complex Complex::operator+(Complex& c)
{
        return Complex(c.real + real, c.imag + imag);
}

Complex Complex::operator-(Complex& c)
{
        return Complex(real - c.real, imag - c.imag);
}

Complex Complex::operator*(Complex& c)
{
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
}

Complex Complex::operator/(Complex& c)
{
        double t;
        t = 1 / (c.real * c.real + c.imag * c.imag);
        return Complex((real * c.real + imag * c.imag) * t, (c.real * imag - real * c.imag) * t);
}

void Complex::print()
{
        cout << real;
        if (imag > 0)
                cout << "+";
        if (imag != 0)
                cout << imag << "i" << endl;
}

int main(int argc, char const* argv[])
{
        Complex A[6] = { Complex(2.3, 4.6), Complex(3.6, 2.8) };
        // A[2] = A[0] + A[1];
        // A[3] = A[0] - A[1];
        // A[4] = A[0] * A[1];
        // A[5] = A[0] / A[1];
        A[2] = A[0].operator+(A[1]);
        A[3] = A[0].operator-(A[1]);
        A[4] = A[0].operator*(A[1]);
        A[5] = A[0].operator/(A[1]);
        for (int i = 0; i < 6; i++) {
                A[i].print();
        }
        return 0;
}