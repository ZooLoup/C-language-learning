#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//malloc(19*sizeof(int));
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p)
//	p = NULL;;
//	return 0;
//}

//realloc
//������̬�����ڴ�ռ�Ĵ�С

//int main()
//{
//	int* p = (int*)malloc(20);
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
	//������ʹ��mallo���ٵ�20���ֽڿռ�
	//�������20���ֽڲ����������ǵ�ʹ����
	//ϣ�������ܹ���40���ֽڵĿռ�
	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�ռ���

	//reallonʹ�õ�ע������
	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷��
	//2.���p־���Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
	//����һ����������Ŀռ䣬����
	//��ԭ���ڴ�����ݿ����������ͷžɵ��ڴ�ռ�
	//��󷵻��¿��ٵ��ڴ�ռ��ַ
//	int* ptr = realloc(p, INT_MAX);
//	int* p2 = realloc(p, 40);
//	int i = 0;
//	for (p == NULL)
//	{
//		printf("%s\n", strerror());
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p2 + i));
//	}
//	return 0;
//}

//int main()
//{
	////1.��NULL���н����ò���
	//int* p = (int*)malloc(40);
	////��һmallocʧ���ˣ�p�ͱ���ֵΪnull
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;

//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p = NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

int a = 10;
int* p = &a;
*p = 20;
//3.�ԷǶ�̬�����ڴ�ռ���ͷ�