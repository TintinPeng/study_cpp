#include "iostream"

using namespace std;

int main(int argc, char const* argv[])
{
	int sum = 0, value = 0;
	while (cin >> value) {
		sum += value;
	}
	cout << sum << endl;
	return 0;
}
