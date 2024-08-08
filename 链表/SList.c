#include "SList.h"

SLTNode* BuyListNode(SLTDateType x)
{

}

void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->",cur->data);
		cur = cur->next;
	}
}

void SListPushBack(SLTNode** pphead, SLTDateType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	//ÕÒµ½Î²½Úµã
	SLTNode* tail = pphead;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
}

void SListPushFront(SLTNode** pphead, SLTDateType x)
{
	SLTNode* newnode = BuyListNode(x);

	newnode->next = *pphead;
	*pphead = newnode;
}

void SListPopBack(SLTNode** pphead)
{
	//SLTNode* prev = NULL;
	//SLTNode* tail = *&pphead;
	////while (tail->next != NULL)
	//while (tail->next)
	//{
	//	tail = tail->next;
	//}

	//free(tail);
	//tail = NULL;



	SLTNode* tail = *pphead;
	while (tail->next->next)
	{
		tail = tail->next;
	}
	free(tail->next);
	tail->next = NULL;
}
void SListPopFront(SLTNode** pphead)
{

}