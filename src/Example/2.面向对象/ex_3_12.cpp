#include <cmath>
#include <iostream>

using namespace std;

class complex {
private:
	double real, imag;

public:
	complex(double r = 0.0, double i = 0.0)
	{
		real = r;
		imag = i;
	}

	double complex_abs()
	{
		double t;
		t = real * real + imag * imag;
		return sqrt(t);
	}

	void complex_print()
	{
		if (real != 0) {
			if (imag > 0) {
				cout << real << "+" << imag << "i的绝对值是" << complex_abs() << endl;
			} else if (imag == 0) {
				cout << real << "的绝对值是" << complex_abs() << endl;
			} else if (imag < 0) {
				cout << real << imag << "i的绝对值是" << complex_abs() << endl;
			}
		} else if (real == 0) {
			cout << imag << "i的绝对值是" << complex_abs() << endl;
		}
	}
	~complex()
	{
	}
};

int main(int argc, char const* argv[])
{
	/* 
     * 带有默认参数的构造函数;
     * 如果构造函数在类外定义,那么默认参数应该在类内声明构造函数原型时指定,而不能在类外构造函数定义时指定;
     * 不能同时使用构造函数的重载和带有默认参数的构造函数;
     */
	complex num1;
	num1.complex_abs();
	num1.complex_print();

	complex num2(5);
	num2.complex_abs();
	num2.complex_print();

	complex num3(3, 4);
	num3.complex_abs();
	num3.complex_print();
	return 0;
}
