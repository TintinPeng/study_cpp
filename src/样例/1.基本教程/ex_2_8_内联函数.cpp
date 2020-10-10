#include "iostream"
using namespace std;

inline int box(int i, int j, int k)
{
	return i * j * k;
}

int main()
{
	/*
     * 将函数定义成内联函数
     * 函数适用于规模小,使用频繁的函数,是用空间换取时间
     * 内联函数不能包含循环和递归
     */
	int a, b, c, v;
	cin >> a >> b >> c;
	v = box(a, b, c);
	cout << "a*b*c = " << v << endl;
}