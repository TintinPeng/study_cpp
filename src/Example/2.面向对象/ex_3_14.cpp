/*
 * @Author: your name
 * @Date: 2020-08-12 10:04:31
 * @LastEditTime: 2020-08-31 01:53:57
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_14.cpp
 */

#include "cmath"
#include "iostream"

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

	~complex()
	{
		// cout << "析构函数被调用" << endl;
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
};

int main(int argc, char const* argv[])
{
	// 用只有一个参数的构造函数给对象数组赋值
	complex num[3] = { 1, 2, 3 };
	for (int i = 0; i < 3; i++) {
		num[i].complex_abs();
		num[i].complex_print();
	}

	return 0;
}
