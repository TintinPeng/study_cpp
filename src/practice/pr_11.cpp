#include "../../inc/tintin.hpp"
#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
        double a[3] = { 1.2, 2.8, 3.6 };
        for (int i = 0; i < getArrayLen(a); i++) {
                cout << round(a[i]) << endl;
        }
        return 0;
}