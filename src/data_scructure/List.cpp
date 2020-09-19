#include <iostream>
using namespace std;

template <typename ElemType>
class List {
private:
	ElemType* data;
	uint	  length;
	uint	  initSize;

public:
	List(uint _InitSize);
	~List();
	bool Empty();
	uint Length();
	void DestroyList();
	void GetElem();
	void InitList();
	void ListDelete();
	void ListInsert();
	void LocationElem();
	void PrintList();
};

template <typename ElemType>
List<ElemType>::List(uint _InitSize = 0)
{
	length = 0;
	initSize = _InitSize;
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
}

template <typename ElemType>
void List<ElemType>::GetElem()
{
}

template <typename ElemType>
void List<ElemType>::InitList()
{
	data = new ElemType[initSize];
}

template <typename ElemType>
void List<ElemType>::ListDelete()
{
	delete data;
	length = 0;
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
