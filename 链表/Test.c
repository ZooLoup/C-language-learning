#include "SList.h"
void TestSList1()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);

	SListPrint(plist);

	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);

	SListPrint(plist);
}
int main()
{
	TestSList1();
	/*int* p1 = malloc(sizeof(int) * 10);
	int* p2 = realloc(p1, sizeof(int) * 200);
	return 0;*/
}

//实参是int,要改变实参，要传int* 函数里面解引用去改变
//顺序表缺陷：
//1.空间不够了需要扩容,扩容是有消耗的
//2.头部或者中间位置的插入删除，需要挪动，挪动数据也是有消耗的
//3.避免频繁扩容，一次一般都是按倍数去扩，可能存在一定的空间浪费


//链表
//优点：
//1.按需申请空间，不用了就释放空间
//2.头部中间插入删除数据，不需要挪动数据\
//3.
