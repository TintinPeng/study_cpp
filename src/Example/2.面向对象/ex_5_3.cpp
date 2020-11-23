#include <iostream>

using namespace std;

class Coord {
private:
	int x, y;

protected:
	/* data */

public:
	Coord(int _x = 0, int _y = 0) { x = _x, y = _y; }
	~Coord() { }
	friend Coord operator-(Coord& obj)
	{
		return Coord(-obj.x, -obj.y);
	}
	void print()
	{
		cout << "x=" << x << "\t"
			 << "y=" << y << endl;
	}
};

int main(int argc, char const* argv[])
{
	Coord ob1(20, 30), ob2;
	ob2 = -ob1;
	ob1.print();
	ob2.print();
	return 0;
}