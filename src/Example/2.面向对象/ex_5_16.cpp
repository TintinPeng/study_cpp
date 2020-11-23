#include <iostream>

using namespace std;

class Complex {
private:
	double real, imag;

protected:
public:
	Complex(double _real = 0.0, double _imag = 0.0) { real = _real, imag = _imag; }
	operator double() { return real; }
	~Complex() { }
};

int main(int argc, char const* argv[])
{
	Complex com(1.2, 2.5);
	cout << double(com) << endl;
	return 0;
}