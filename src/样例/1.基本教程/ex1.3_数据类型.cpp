#include <iostream>
#include <limits>

using namespace std;

int main()
{
	cout << "bool: \t\t"
		 << "所占字节数：" << sizeof(bool)
		 << "\t最大值：" << (numeric_limits<bool>::max)()
		 << "\t\t\t最小值：" << (numeric_limits<bool>::min)() << endl;

	cout << "char: \t\t"
		 << "所占字节数：" << sizeof(char)
		 << "\t最大值：" << (int)(numeric_limits<char>::max)()
		 << "\t\t\t最小值：" << (int)(numeric_limits<char>::min)() << endl;

	cout << "signed char: \t"
		 << "所占字节数：" << sizeof(signed char)
		 << "\t最大值：" << (int)(numeric_limits<signed char>::max)()
		 << "\t\t\t最小值：" << (int)(numeric_limits<signed char>::min)() << endl;

	cout << "unsigned char: \t"
		 << "所占字节数：" << sizeof(unsigned char)
		 << "\t最大值：" << (int)(numeric_limits<unsigned char>::max)()
		 << "\t\t\t最小值：" << (int)(numeric_limits<unsigned char>::min)() << endl;

	cout << "wchar_t: \t"
		 << "所占字节数：" << sizeof(wchar_t)
		 << "\t最大值：" << (numeric_limits<wchar_t>::max)()
		 << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;

	cout << "short: \t\t"
		 << "所占字节数：" << sizeof(short)
		 << "\t最大值：" << (numeric_limits<short>::max)()
		 << "\t\t\t最小值：" << (numeric_limits<short>::min)() << endl;

	cout << "int: \t\t"
		 << "所占字节数：" << sizeof(int)
		 << "\t最大值：" << (numeric_limits<int>::max)()
		 << "\t\t最小值：" << (numeric_limits<int>::min)() << endl;

	cout << "unsigned: \t"
		 << "所占字节数：" << sizeof(unsigned)
		 << "\t最大值：" << (numeric_limits<unsigned>::max)()
		 << "\t\t最小值：" << (numeric_limits<unsigned>::min)() << endl;

	cout << "long: \t\t"
		 << "所占字节数：" << sizeof(long)
		 << "\t最大值：" << (numeric_limits<long>::max)()
		 << "\t最小值：" << (numeric_limits<long>::min)() << endl;

	cout << "unsigned long: \t"
		 << "所占字节数：" << sizeof(unsigned long)
		 << "\t最大值：" << (numeric_limits<unsigned long>::max)()
		 << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;

	cout << "double: \t"
		 << "所占字节数：" << sizeof(double)
		 << "\t最大值：" << (numeric_limits<double>::max)()
		 << "\t\t最小值：" << (numeric_limits<double>::min)() << endl;

	cout << "long double: \t"
		 << "所占字节数：" << sizeof(long double)
		 << "\t最大值：" << (numeric_limits<long double>::max)()
		 << "\t\t最小值：" << (numeric_limits<long double>::min)() << endl;

	cout << "float: \t\t"
		 << "所占字节数：" << sizeof(float)
		 << "\t最大值：" << (numeric_limits<float>::max)()
		 << "\t\t最小值：" << (numeric_limits<float>::min)() << endl;

	cout << "size_t: \t"
		 << "所占字节数：" << sizeof(size_t)
		 << "\t最大值：" << (numeric_limits<size_t>::max)()
		 << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;

	cout << "string: \t"
		 << "所占字节数：" << sizeof(string) << endl;

	return 0;
}