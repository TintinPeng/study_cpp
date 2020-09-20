#include <iostream>
using namespace std;

template <typename ElemType>
class List {
private:
	ElemType* data;
	uint	  length;
	uint	  InitSize;
	// uint	  n[];

public:
	List(uint _InitSize);
	~List();
	bool Empty();
	uint Length();
	void DestroyList();
	void GetElem(uint position);
	void InitList();
	void ListDelete();
	void ListInsert();
	void LocationElem();
	void PrintList();
};

template <typename ElemType>
List<ElemType>::List(uint _InitSize)
{
	length = 0;
	InitSize = _InitSize;
}

template <typename ElemType>
List<ElemType>::~List()
{
}

template <typename ElemType>
bool List<ElemType>::Empty()
{
	if (length == 0)
		return true;
	else
		return false;
}

template <typename ElemType>
uint List<ElemType>::Length()
{
	return length;
}

template <typename ElemType>
void List<ElemType>::DestroyList()
{
	delete data;
	length = 0;
}

template <typename ElemType>
void List<ElemType>::GetElem(uint position)
{
}

template <typename ElemType>
void List<ElemType>::InitList()
{
	if (InitSize == 0) {
		cerr << "请至少包含一个数据元素" << endl;
	} else {
		data = new ElemType[InitSize];
	}
}

template <typename ElemType>
void List<ElemType>::ListDelete()
{
}

template <typename ElemType>
void List<ElemType>::ListInsert()
{
}

template <typename ElemType>
void List<ElemType>::LocationElem()
{
}

template <typename ElemType>
void List<ElemType>::PrintList()
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

int main()
{
	return 0;
}
