#include "iostream"
using namespace std;

#define START 0
#define DOUB(x) x * 2

int main()
{
	//使用带参数宏定义完成乘2的功能
	for (int i = START; i < 3; i++) {
		cout << i << " doubled is " << DOUB(i + 1) << endl;
	}
	cout << "1+2 doubled is " << DOUB(1 + 2) << endl;
}