#include "iostream"
using namespace std;

int avar;
int main()
{
	/*
     * 作用域运算符的使用
     */
	int avar;
	avar = 25;
	::avar = 10; //使用同名全局变量
	cout << " loacl avar = " << avar << endl;
	cout << "global avar = " << ::avar << endl;
}
