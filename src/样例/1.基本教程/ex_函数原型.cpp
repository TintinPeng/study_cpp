#include "iostream"
using namespace std;

int add(int, int);

int main()
{
	//函数原型
	int x = 1, y = 2;
	int z;
	z = add(x, y);
	cout << "z = " << z << endl;
}

int add(int x, int y)
{
	return x + y;
}