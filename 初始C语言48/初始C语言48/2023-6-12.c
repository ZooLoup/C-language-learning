#define _CRT_SECURE_NO_WARNINGS 1
//��������
#include <stdio.h>

//struct S
//{
//	int n;
//	int arr[0];//δ֪��С��-���������Ա=����Ĵ�С
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//
//	struct S* ps = malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}
//
//	//������С
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	return 0;
//}

//����������ص�
//1.�ṹ�е�



//#include <stdlib.h>
//struct S
//{
//	int n;
//	int arr[];//���������Ա
//};
//int main()
//{
	//printf("%d\n", sizeof(struct S));
//	int i = 0;
//	struct S* p = malloc(sizeof(struct S)+10*sizeof(int));
//	p->n = 100;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i]=i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};

int main()
{
	int i = 0;
	struct S* p = (struct S*)malloc(sizeof(struct S));
	p->n = 100;
	p->arr = (int*)malloc(10 * sizeof(int));
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p->arr[i]);
	}

	free(p->arr);
	p->arr = NULL;
	free(p);
	p = NULL;
	return 0;
}