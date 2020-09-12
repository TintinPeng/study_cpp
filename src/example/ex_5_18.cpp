/*
 * @Author: your name
 * @Date: 2020-09-12 19:47:38
 * @LastEditTime: 2020-09-12 20:29:40
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_5_17.cpp
 */
#include "iostream"

using namespace std;

class Complex {
private:
        double real, imag;

public:
        Complex() { }
        Complex(int _imag) { real = imag = _imag / 2; }
        Complex(int _real, int _imag) { real = _real, imag = _imag; }
        operator int() { return real + imag; }
        void print()
        {
                cout << "real:" << real << "\t"
                     << "imag:" << imag << endl;
        }
        ~Complex() { }
};

int main(int argc, char const* argv[])
{
        Complex com1(1, 2), com2(3, 4);
        Complex com3;
        com3 = com1 + com2;
        com3.print();
        return 0;
}