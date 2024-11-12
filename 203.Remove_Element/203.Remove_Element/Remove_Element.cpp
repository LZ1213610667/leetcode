#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <list>
using std::cout;
using std::endl;
//����һ�������ͷ�ڵ� head ��һ������ val ������ɾ���������������� Node.val == val �Ľڵ㣬������ �µ�ͷ�ڵ� ��
struct ListNode
{
	int val;
	ListNode* next;
	ListNode()
		:val(0)
		, next(nullptr)
	{};
	ListNode(int x)
		:val(x)
		, next(next)
	{};
	ListNode(int x, ListNode* next) 
		: val(x)
		, next(next) 
	{}
};
ListNode* createListNode(int num)
{
	ListNode* head;
	int temp = 0;
	int i = 0;
	scanf("%d", &temp);
	head = new ListNode(temp);
	ListNode* p = head;
	while(i < num-1)
	{
		scanf("%d", &temp);
		p->next = new ListNode(temp);
		p = p->next;
		++i;
	}
	p->next = nullptr;
	return head;
}
ListNode* removeElements(ListNode* head, int val)
{
	ListNode* dummyHead = new ListNode(0);
	dummyHead->next = head;
	ListNode* cur = dummyHead;
	while (cur->next != nullptr)
	{
		if (cur->next->val == val)
		{
			ListNode* tmp = cur->next;
			cur->next = cur->next->next;
			delete tmp;
		}
		else {
			cur = cur->next;
		}
	}
	head = dummyHead->next;
	delete dummyHead;

	return head;
}
int main(void)
{
	ListNode* head = createListNode(7);
	ListNode* p;
	head = removeElements(head, 6);
	
	for (p = head; p != nullptr; p = p->next)
	{
		printf("%d\n", p->val);
	}
	return 0;
}