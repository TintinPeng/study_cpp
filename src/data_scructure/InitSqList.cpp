#include <iostream>

#include "../../inc/tintin.hpp"

using namespace std;

template <typename T>
class SeqList {
private:
        T*   data;
        uint length;
        uint initSize;

public:
        SeqList(uint _initSize);
        ~SeqList() { }
        void Init();
        void Print();
        void Attach(const T _data[], int dataLen);
        void Insert(uint p, T _data);
        void Delete(uint p);
        void Locate(T _data);
        uint get_Length();
};

template <typename T>
SeqList<T>::SeqList(uint _initSize)
{
        length = 0;
        initSize = _initSize;
}

template <typename T>
void SeqList<T>::Init()
{
        data = new T[initSize];
}

template <typename T>
void SeqList<T>::Print()
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

template <typename T>
void SeqList<T>::Attach(const T _data[], int dataLen)
{
        for (int i = 0; i < dataLen; i++) {
                *(data + length) = _data[length];
                length++;
        }
}

template <typename T>
void SeqList<T>::Insert(uint p, T _data)
{
        if (length == initSize) {
                cerr << "当前顺序表数据已满，拒绝插入" << endl;
        } else if (p == 0 || p > initSize) {
                cerr << "插入数据位置不对" << endl;
        } else if (p > length) {
                cerr << "插入数据位置不对" << endl;
        } else if (p <= length) {
                for (int i = length; i >= p - 1; i--) {
                        *(data + i + 1) = *(data + i);
                }
                *(data + p - 1) = _data;
                length++;
        }
}

template <typename T>
void SeqList<T>::Delete(uint p)
{
        if (p == 0 || p > initSize) {
                cerr << "删除数据位置不对" << endl;
        } else if (p > length) {
                cerr << "删除数据位置不对" << endl;
        } else if (p <= length) {
                for (int i = p - 1; i < length; i++) {
                        *(data + i) = *(data + i + 1);
                }
                length--;
        }
}

template <typename T>
void SeqList<T>::Locate(T _data)
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

template <typename T>
unsigned int SeqList<T>::get_Length()
{
        return length;
}

int main(int argc, char const* argv[])
{
        const int    a[] = { 3, 5, 5, 8, 9, 26 };
        SeqList<int> seq_list_1(50);
        seq_list_1.Init();
        seq_list_1.Attach(a, getArrayLen(a));
        seq_list_1.Print();
        cout << "表长n=" << seq_list_1.get_Length() << endl;
        seq_list_1.Insert(3, 0);
        seq_list_1.Print();
        seq_list_1.Delete(3);
        seq_list_1.Print();
        seq_list_1.Locate(5);
        return 0;
}