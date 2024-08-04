#define _CRT_SECURE_NO_WARNINGS
#include "kkkk.h"

void TestSeqList1()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
}

void TestSeqList2()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPrint(&s1);

	SeqListPushFront(&s1, 10);
	SeqListPushFront(&s1, 20);
	SeqListPushFront(&s1, 30);
	SeqListPushFront(&s1, 40);
	SeqListPushFront(&s1, 50);
	int pos = SeqListFind(&s1, 4);
	if (pos != -1)
	{
		SeqListFind(&s1, 4);
	}

	SeqListPrint(&s1);


	SeqLIstDestory(&s1);
}

void menu()
{
	printf("*******************************\n");
	printf("请选择你的操作:>\");
	printf("1：头插 2：头删\n");
	printf("3：尾插 4：尾删\n");
	printf("*******************************\n");
}

void MenuTest()
{
	int input;
	Menu();
	scanf("%d",&input);
	switch(input)
	{
	case 1:
		printf("请输入你要插入的数据，以-1结束:");
		scanf("%d",&x);
		while (x != -1)
		{
			SeqListPushFront(&s1, x);
			scanf("%d",&x);
			while (x != -1)
			{
				SeqListPushBack
			}
		}
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	default:
		printf("没有这个选项");
	}
}
int main()
{
	TestSeqList1();
	return 0;
}