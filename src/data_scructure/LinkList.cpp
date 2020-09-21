#include <iostream>

using namespace std;

template <typename Type>
struct ListNode {
	Type	  val;
	ListNode* next;
	ListNode(Type _val)
		: val(_val)
		, next(NULL)
	{
	}
};

template <typename Type>
class LinkList {
private:
	ListNode<Type>* head;

public:
	LinkList();
	~LinkList();
};

template <typename Type>
LinkList<Type>::LinkList()
{
	head = new ListNode<Type>();
	head->next = NULL;
}

template <typename Type>
LinkList<Type>::~LinkList()
{
}

int main()
{
	return 0;
}