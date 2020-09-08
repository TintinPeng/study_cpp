/*
 * @Author: your name
 * @Date: 2020-09-07 16:15:54
 * @LastEditTime: 2020-09-07 16:31:04
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_5_10.cpp
 */
#include "iostream"
#include "string.h"

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
};

int main(int argc, char const* argv[])
{
        STRING p1("book");
        STRING p2("jeep");
        // p2 = p1;
        return 0;
}