#include "iostream"
int main(int argc, char const* argv[])
{
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++)
            std::cout << j << "*" << i << "=" << i * j << " ";
        std::cout << std::endl;
    }
}