#include "iostream"
using namespace std;

void swap(int& m, int& n)
{
	int tmp;
	tmp = m;
	m = n;
	n = tmp;
}

int main()
{
	//引用作为函数参数的例子

	int a = 5, b = 10;
	cout << "a = " << a << "\t"
		 << "b = " << b << endl;
	swap(a, b);
	cout << "a = " << a << "\t"
		 << "b = " << b << endl;
}