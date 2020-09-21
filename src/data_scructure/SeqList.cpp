#include "tintin.hpp"
#include <iostream>

using namespace std;

template <typename Type>
class SeqList {
private:
	Type* data;
	uint  length;
	uint  initSize;

public:
	SeqList(uint _initSize);
	~SeqList();
	void Init();
	void Print();
	void Attach(const Type _data[], int dataLen);
	void Insert(uint position, Type _data);
	void Delete(uint position);
	void Locate(Type _data);
	void Destory();
	uint ListLength();
};

template <typename Type>
SeqList<Type>::SeqList(uint _initSize)
{
	length = 0;
	initSize = _initSize;
}

template <typename Type>
SeqList<Type>::~SeqList()
{
	// delete[] data;
}

template <typename Type>
void SeqList<Type>::Init()
{
	data = new Type[initSize];
}

template <typename Type>
void SeqList<Type>::Print()
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

template <typename Type>
void SeqList<Type>::Attach(const Type _data[], int dataLen)
{
	for (int i = 0; i < dataLen; i++) {
		*(data + length) = _data[length];
		length++;
	}
}

template <typename Type>
void SeqList<Type>::Insert(uint position, Type _data)
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

template <typename Type>
void SeqList<Type>::Delete(uint position)
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

template <typename Type>
void SeqList<Type>::Locate(Type _data)
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

template <typename Type>
void SeqList<Type>::Destory()
{
	delete data;
	length = 0;
}

template <typename Type>
uint SeqList<Type>::ListLength()
{
	return length;
}

int main(int argc, char const* argv[])
{
	const int	 a[] = { 3, 5, 5, 8, 9, 26 };
	SeqList<int> seq_list_1(50);

	seq_list_1.Init();
	seq_list_1.Print();

	seq_list_1.Attach(a, getArrayLen(a));
	seq_list_1.Print();

	cout << "表长n=" << seq_list_1.ListLength() << endl;

	seq_list_1.Insert(3, 0);
	seq_list_1.Print();

	seq_list_1.Delete(3);
	seq_list_1.Print();

	seq_list_1.Locate(5);

	seq_list_1.Destory();
	seq_list_1.Print();
	return 0;
}