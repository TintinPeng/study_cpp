#include "iostream"
using namespace std;

int a[] = { 1, 3, 5, 7, 9 };

int& index(int i)
{
	return a[i];
}

int main()
{
	//使用引用返回函数值
	index(2) = 25;
	cout << index(2) << endl;
	for (int i = 0; i < 5; i++) {
		cout << a[i] << endl;
	}
}