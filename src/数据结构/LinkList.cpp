#include <iostream>

using namespace std;

template <typename Type>
struct ListNode {
	Type	  data;
	ListNode* next;
};

template <typename Type>
class LinkList {
private:
	ListNode<Type>* head;
	ListNode<Type>* last;
	int				length;

public:
	LinkList();
	~LinkList();
	void CreateListF(Type a[], int n); // 头插法
	void CreateListR(Type a[], int n); // 尾插法
	void DispList();
	int	 ListLength();
	void DispHead();
	void DispLast();
};

template <typename Type>
LinkList<Type>::LinkList()
{
	head = new ListNode<Type>;
	last = new ListNode<Type>;
	head->next = NULL;
	last->next = NULL;
	length = 0;
}

template <typename Type>
LinkList<Type>::~LinkList()
{
}

template <typename Type>
void LinkList<Type>::CreateListF(Type a[], int n)
{
	ListNode<Type>* s;
	for (int i = 0; i < n; i++) {
		s = new ListNode<Type>;
		if (i == 0) {
			last = s;
		}
		s->data = a[i];
		s->next = head->next;
		head->next = s;
		length++;
	}
}

template <typename Type>
void LinkList<Type>::CreateListR(Type a[], int n)
{
	ListNode<Type>* s;
	for (int i = 0; i < n; i++) {
		s = new ListNode<Type>;
		if (i == 0) {
			last = head;
		}
		s->data = a[i];
		last->next = s;
		last = s;
		length++;
	}
	last->next = NULL;
}

template <typename Type>
void LinkList<Type>::DispList()
{
	ListNode<Type>* s;
	s = head->next;
	for (int i = 0; i < length; i++) {
		cout << s->data << "\t";
		s = s->next;
	}
	cout << endl;
}

template <typename Type>
void LinkList<Type>::DispHead()
{
	cout << "head=" << head->next->data << endl;
}

template <typename Type>
void LinkList<Type>::DispLast()
{
	cout << "last=" << last->data << endl;
}

template <typename Type>
int LinkList<Type>::ListLength()
{
	return length;
}

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };

	LinkList<int> list1;
	list1.CreateListF(a, 5);
	list1.DispList();
	list1.DispHead();
	list1.DispLast();

	LinkList<int> list2;
	list2.CreateListR(a, 5);
	list2.DispList();
	list2.DispHead();
	list2.DispLast();

	return 0;
}