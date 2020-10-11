#include "iostream"
using namespace std;

void swap(int*, int*);
void swap(int&, int&);

int	   square(int);
long   square(long);
double square(double d);

int main()
{
	int a = 5, b = 10;
	cout << "a = " << a << "\t"
		 << "b = " << b << endl;
	//指针变量作为函数参数的例子
	swap(&a, &b);
	cout << "a = " << a << "\t"
		 << "b = " << b << endl;
	//引用作为函数参数的例子
	swap(a, b);
	cout << "a = " << a << "\t"
		 << "b = " << b << endl;

	cout << "参数类型不同的函数重载:" << endl;
	cout << "名字、参数个数和类型在检查范围内" << endl;
	cout << "返回值类型不在检查范围内" << endl;

	int	   i = 12;
	long   l = 1234;
	double d = 5.67;
	cout << i << " * " << i << " = " << square(i) << endl;
	cout << l << " * " << l << " = " << square(l) << endl;
	cout << d << " * " << d << " = " << square(d) << endl;
}

void swap(int* m, int* n)
{
	int tmp;
	tmp = *m;
	*m = *n;
	*n = tmp;
}

void swap(int& m, int& n)
{
	int tmp;
	tmp = m;
	m = n;
	n = tmp;
}

int square(int i)
{
	return i * i;
}

long square(long l)
{
	return l * l;
}

double square(double d)
{
	return d * d;
}