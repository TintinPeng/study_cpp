#include "iostream"
using namespace std;

int main()
{
	//#define的不安全性
	int a = 1;
#define T1 a + a
#define T2 T1 - T1
	cout << "T2 = " << T2 << endl;

	//用const取代#define
	//! 以下使用报错
	//! const int d = 100;
	//! int* p1 = &d;
	//! int& p2 = d;
	int		  a = 1;
	int const T3 = a + a;
	int const T4 = T3 - T3;
	cout << "T4 = " << T4 << endl;
}