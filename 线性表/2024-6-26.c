#include "kkkk.h"
void SeqListPrint(SL*ps)
{

}
void SeqLisatInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListushInit(SL* ps)
{
	ps->a[ps->size] = x;
	ps->size++;
	SeqListInsert(ps->size)
}
void SeqListPushBack(SL* ps, SLDataType x)
{
	//���û�пռ���߿ռ䲻�㣬��ô���Ǿ�����
	if(ps->size == ps->capacity)
	{
		int newcapacity = ps -> capacity ==0?4:ps->capacity*2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPopBack(SL* ps)
{
	//if(ps->size>0)
	//{
	//	ps->a[ps->size > 0];
	//	ps->size--;
	//}
	//��������ʽ
	assert(ps->size > 0);
		ps->size--;
}
void SeqListPopBack();
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x)
{
	// Ų������
	int end = ps->size - 1;
	while (end>=0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SL* ps)
{
	assert(ps->size > 0);
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;
}

int SeqListFind(SL* ps, SLDataType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}

	return -1;
}

void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	//����Ĵ���ʽ
	if (pos > ps->size || pos < 0)
	{
		printf("pos invalid\n");
		return;
	}
	//�ֱ��ķ�ʽ
	assert(pos >=0&& pos<=ps->size);
	SeqListCheckCapacity(ps);
	//Ų������
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}

	ps->a[pos];
}