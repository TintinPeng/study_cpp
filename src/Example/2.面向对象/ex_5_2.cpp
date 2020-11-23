#include <iostream>

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
	void		   print();
	friend Complex operator+(Complex&, Complex&);
	friend Complex operator-(Complex&, Complex&);
	friend Complex operator*(Complex&, Complex&);
	friend Complex operator/(Complex&, Complex&);
};

Complex::Complex(double r = 0.0, double i = 0.0)
{
	real = r;
	imag = i;
}

Complex operator+(Complex& a, Complex& b)
{
	return Complex(a.real + b.real, a.imag + b.imag);
}

Complex operator-(Complex& a, Complex& b)
{
	return Complex(a.real - b.real, a.imag - b.imag);
}

Complex operator*(Complex& a, Complex& b)
{
	return Complex(a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real);
}

Complex operator/(Complex& a, Complex& b)
{
	double t;
	t = 1 / (b.real * b.real + b.imag * b.imag);
	return Complex((a.real * b.real + a.imag * b.imag) * t, (b.real * a.imag - a.real * b.imag) * t);
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
	A[2] = A[0] + A[1];
	A[3] = A[0] - A[1];
	A[4] = A[0] * A[1];
	A[5] = A[0] / A[1];
	for (int i = 0; i < 6; i++) {
		A[i].print();
	}
	return 0;
}