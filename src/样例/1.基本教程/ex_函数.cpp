#include "iostream"
using namespace std;

void swap(int*, int*);
void swap(int&, int&);

int main()
{
	// 参数类型不同的函数重载:
	// 名字、参数个数和类型在检查范围内
	// 返回值类型不在检查范围内
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
