/*
 * @Author: tinitn
 * @Date: 2020-07-31 10:26:15
 * @LastEditTime: 2020-08-31 00:31:04
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_2_19.cpp
 */
#include "iostream"
using namespace std;
int main()
{
        /*
     * 比较指针和引用的使用方法
     * 引用不能重新声明(可以把引用理解为常量)
     * 引用的数据类型不能是void,引用,指针(void,&,*)
     * 但是可以将引用的地址赋值给指针
     */
        int i = 15;
        int* iptr = &i;
        int& rptr = i;
        cout << "i = " << i << endl;
        cout << "*iptr = " << *iptr << endl;
        cout << "rptr = " << rptr << endl;
        i = 29;
        cout << "i = " << i << endl;
        cout << "*iptr = " << *iptr << endl;
        cout << "rptr = " << rptr << endl;
}