#include "iostream"

using namespace std;
class timer {
private:
	int seconds;

public:
	timer()
	{
		seconds = 0;
	}

	timer(string t)
	{
		seconds = stoi(t);
	}

	timer(int t)
	{
		seconds = t;
	}

	timer(int min, int sec)
	{
		seconds = min * 60 + sec;
	}

	int gettimes()
	{
		return seconds;
	}

	~timer()
	{
	}
};

int main(int argc, char const* argv[])
{
	timer a;
	timer b(10);
	timer c("100");
	timer d(1, 10);
	cout << "seconds = " << a.gettimes() << endl;
	cout << "seconds = " << b.gettimes() << endl;
	cout << "seconds = " << c.gettimes() << endl;
	cout << "seconds = " << d.gettimes() << endl;
}
