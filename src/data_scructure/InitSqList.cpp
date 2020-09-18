#include <iostream>

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
        void SeqList_Init()
        {
                data = new ElemType[initSize];
        }
        void SeqList_Print()
        {
                if (length == 0) {
                        cout << "这是一个空表" << endl;
                } else {
                        for (int i = 0; i < length; i++) {
                                cout << data[i] << endl;
                        }
                }
        }
};

int main(int argc, char const* argv[])
{
        SeqList<int> list1(50);
        list1.SeqList_Print();
        return 0;
}
