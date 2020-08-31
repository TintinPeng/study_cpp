/*
 * @Author: your name
 * @Date: 2020-08-18 09:27:28
 * @LastEditTime: 2020-08-31 10:21:01
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_32.cpp
 */

#include "iostream"
using namespace std;

class small_cat {
private:
        double        weight;
        static double total_weight;
        static double total_number;

public:
        small_cat(double w);
        ~small_cat();
        static void display(small_cat& w);
        static void total_disp();
};

small_cat::small_cat(double w)
{
        weight = w;
        total_weight += w;
        total_number++;
}

small_cat::~small_cat()
{
}

void small_cat::display(small_cat& w)
{
        cout << "这只猫的重量是" << w.weight << "千克" << endl;
}

void small_cat::total_disp()
{
        cout << total_number << "只小猫的重量是" << total_weight << "千克" << endl;
}

double small_cat::total_weight = 0; //静态数据成员一定要初始化
double small_cat::total_number = 0;

int main(int argc, char const* argv[])
{
        /*
         * 
         * 静态成员函数访问静态数据成员
         */
        small_cat w1(0.5), w2(0.8), w3(0.7);
        small_cat::display(w1);
        small_cat::display(w2);
        small_cat::display(w3);
        small_cat::total_disp();
        return 0;
}
