#include "../../inc/tintin.hpp"
#include <iostream>

using namespace std;

template <typename ElemType>
class SeqList {
private:
        ElemType* data;
        uint      length;
        uint      initSize;

public:
        SeqList(uint _initSize);
        ~SeqList() { }
        void Init();
        void Print();
        void Attach(const ElemType _data[], int dataLen);
        void Insert(uint position, ElemType _data);
        void Delete(uint position);
        void Locate(ElemType _data);
        void Destory();
        uint get_Length();
};

template <typename ElemType>
SeqList<ElemType>::SeqList(uint _initSize)
{
        length = 0;
        initSize = _initSize;
}

template <typename ElemType>
void SeqList<ElemType>::Init()
{
        data = new ElemType[initSize];
}

template <typename ElemType>
void SeqList<ElemType>::Print()
{
        if (length == 0) {
                cout << "这是一个空表" << endl;
        } else {
                for (int i = 0; i < length; i++) {
                        cout << data[i] << "\t";
                }
                cout << endl;
        }
}

template <typename ElemType>
void SeqList<ElemType>::Attach(const ElemType _data[], int dataLen)
{
        for (int i = 0; i < dataLen; i++) {
                *(data + length) = _data[length];
                length++;
        }
}

template <typename ElemType>
void SeqList<ElemType>::Insert(uint position, ElemType _data)
{
        if (length == initSize) {
                cerr << "当前顺序表数据已满，拒绝插入" << endl;
        } else if (position == 0 || position > initSize) {
                cerr << "插入数据位置不对" << endl;
        } else if (position > length) {
                cerr << "插入数据位置不对" << endl;
        } else if (position <= length) {
                for (int i = length; i >= position - 1; i--) {
                        *(data + i + 1) = *(data + i);
                }
                *(data + position - 1) = _data;
                length++;
        }
}

template <typename ElemType>
void SeqList<ElemType>::Delete(uint position)
{
        if (position == 0 || position > initSize) {
                cerr << "无此数据" << endl;
        } else if (position > length) {
                cerr << "无此数据" << endl;
        } else if (position <= length) {
                for (int i = position - 1; i < length; i++) {
                        *(data + i) = *(data + i + 1);
                }
                length--;
        }
}

template <typename ElemType>
void SeqList<ElemType>::Locate(ElemType _data)
{
        bool flag = true;
        for (int i = 0; i < length; i++) {
                if (*(data + i) == _data) {
                        cout << "第" << i + 1 << "位数据元素是" << *(data + i) << endl;
                        flag = false;
                }
        }
        if (flag) {
                cout << "未找到数据元素" << _data << endl;
        }
}

template <typename ElemType>
void SeqList<ElemType>::Destory()
{
        delete data;
        length = 0;
}

template <typename ElemType>
unsigned int SeqList<ElemType>::get_Length()
{
        return length;
}

int main(int argc, char const* argv[])
{
        const int    a[] = { 3, 5, 5, 8, 9, 26 };
        SeqList<int> seq_list_1(50);

        seq_list_1.Init();
        seq_list_1.Print();

        seq_list_1.Attach(a, getArrayLen(a));
        seq_list_1.Print();

        cout << "表长n=" << seq_list_1.get_Length() << endl;

        seq_list_1.Insert(3, 0);
        seq_list_1.Print();

        seq_list_1.Delete(3);
        seq_list_1.Print();

        seq_list_1.Locate(5);

        seq_list_1.Destory();
        seq_list_1.Print();

        return 0;
}