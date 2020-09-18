#include <iostream>

#include "../../inc/tintin.hpp"

using namespace std;

template <typename ElemType>
class SeqList {
private:
        ElemType*    data;
        unsigned int length;
        unsigned int initSize;

public:
        SeqList(unsigned int _initSize)
        {
                length = 0;
                initSize = _initSize;
        }
        ~SeqList() { }
        void Init()
        {
                data = new ElemType[initSize];
        }
        void Print()
        {
                if (length == 0) {
                        cout << "这是一个空表" << endl;
                } else {
                        for (int i = 0; i < length; i++) {
                                cout << data[i] << endl;
                        }
                }
        }
        void Attach(const ElemType _data[])
        {
                for (int i = 0; i < getArrayLen(_data); i++) {
                        *(data + length) = _data[length];
                        length++;
                }
        }
};

int main(int argc, char const* argv[])
{
        const int    a[6] = { 3, 5, 5, 8, 9, 26 };
        SeqList<int> seq_list_1(50);
        seq_list_1.Init();
        seq_list_1.Attach(a);
        seq_list_1.Print();
        return 0;
}