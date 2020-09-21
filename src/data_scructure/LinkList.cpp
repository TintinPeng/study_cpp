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
	void CreateListF(); // 头插法
	void CreateListR(); // 尾插法
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