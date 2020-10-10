#include "iostream"
using namespace std;

int main()
{
	//对动态分配是否成功进行检查
	int* p;
	// p = new int;
	if (!p) {
		cout << "动态内存分配失败!" << endl;
		return 1;
	}
	*p = 20;
	cout << *p << endl;
	cout << "123" << endl;
	delete p;
}