/*
 * @Author: your name
 * @Date: 2020-09-07 16:43:06
 * @LastEditTime: 2020-09-07 16:53:32
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_5_13.cpp
 */
#include "iostream"

using namespace std;

class Vector4 {
private:
        int v[4];

protected:
        /* data */

public:
        Vector4(int _0, int _1, int _2, int _3)
        {
                v[0] = _0;
                v[1] = _1;
                v[2] = _2;
                v[3] = _3;
        }
        ~Vector4() { }
        int& operator[](int b)
        {
                if (b < 0 || b >= 4) {
                        cout << "Bad subscript" << endl;
                        exit(1);
                }
                return v[b];
        }
};

int main(int argc, char const* argv[])
{
        Vector4 v(1, 2, 3, 4);
        cout << v[2] << endl;
        cout << v.operator[](3) << endl;
        return 0;
}