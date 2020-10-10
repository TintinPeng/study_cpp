#include "iostream"
using namespace std;

class sum {
public:
	int x, y, z;

	int fun()
	{
		z = x + y;
		return z;
	}
};

int main()
{
	/*
     * c++程序结构性示例
     */
	sum A;
	cout << "请输入两个数" << endl;
	cin >> A.x >> A.y;
	cout << "x + y = " << A.fun() << endl;
	cout << "Hello world!" << endl;
}