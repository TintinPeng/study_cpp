#include <iostream>
#include <string.h>

using namespace std;

class STRING {
private:
	char* ptr;

public:
	STRING(char const* s)
	{
		cout << "构造函数被调用" << endl;
		ptr = new char[strlen(s) + 1];
		strcpy(ptr, s);
	}
	~STRING()
	{
		cout << "析构函数被调用" << ptr << endl;
		delete ptr;
	}
	STRING& operator=(const STRING& s)
	{
		if (this == &s)
			return *this;
		delete ptr;
		ptr = new char[strlen(s.ptr) + 1];
		strcpy(ptr, s.ptr);
		return *this;
	}
};

int main(int argc, char const* argv[])
{
	STRING p1("book");
	STRING p2("jeep");
	p2 = p1;
	return 0;
}