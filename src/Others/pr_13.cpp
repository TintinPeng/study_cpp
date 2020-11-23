#include <iostream>

using namespace std;

class A {
private:
protected:
	/* data */

public:
	int	   a;
	string b;

	A(int _a, string _b)
		: a(_a)
		, b(_b)
	{ /* code */
	}
	void print()
	{
		cout << a << "\t" << b << endl;
	}
	~A() { }
};

A operator+(A co1, A co2)
{
	return A(co1.a + co2.a, co1.b + co2.b);
}

int main(int argc, char const* argv[])
{
	A a(3, "abc");
	A b(4, "edf");
	A c(0, "");

	c = operator+(a, b);

	a.print();
	b.print();
	c.print();
	return 0;
}