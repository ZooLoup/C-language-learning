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

//ʵ����int,Ҫ�ı�ʵ�Σ�Ҫ��int* �������������ȥ�ı�
//˳���ȱ�ݣ�
//1.�ռ䲻������Ҫ����,�����������ĵ�
//2.ͷ�������м�λ�õĲ���ɾ������ҪŲ����Ų������Ҳ�������ĵ�
//3.����Ƶ�����ݣ�һ��һ�㶼�ǰ�����ȥ�������ܴ���һ���Ŀռ��˷�


//����
//�ŵ㣺
//1.��������ռ䣬�����˾��ͷſռ�
//2.ͷ���м����ɾ�����ݣ�����ҪŲ������\
//3.
