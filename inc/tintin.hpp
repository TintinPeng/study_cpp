#ifndef _TINTIN_HPP
#define _TINTIN_HPP
#include <iostream>

using namespace std;

template <class T>

int getArrayLen(T& array)

{ //使用模板定义一 个函数getArrayLen,该函数将返回数组array的长度
        return (sizeof(array) / sizeof(array[0]));
}

#endif