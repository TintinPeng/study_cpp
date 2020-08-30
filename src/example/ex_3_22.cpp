/*
 * @Author: your name
 * @Date: 2020-08-12 15:02:51
 * @LastEditTime: 2020-08-12 15:04:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_22.cpp
 */

#include "iostream"
using namespace std;
class Tr {
private:
        int i;

public:
        Tr(int n)
        {
                i = n;
        }

        ~Tr() { }

        void set_i(int n)
        {
                i = n;
        }

        int get_i()
        {
                return i;
        }
};

void sqr_it(Tr* ob)
{
        ob->set_i(ob->get_i() * ob->get_i());
        cout << "在函数sqr_it内部的形参ob的数据成员i的值" << ob->get_i() << endl;
}

int main(int argc, char const* argv[])
{
        /* 
     * 使用对象作为函数参数;
     * 本例函数sqr_it中对对象的任何修改均不影响函数本身
     */
        Tr ob(10);
        cout << "在调用函数sqr_it之前ob的数据成员i的值" << ob.get_i() << endl;
        sqr_it(&ob);
        cout << "在调用函数sqr_it之后ob的数据成员i的值" << ob.get_i() << endl;
        return 0;
}
