#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S arr[50];//50��struct S���͵�����
//	//30 �˷�
//	//60 ����
//	return 0;
//}

//C�����ǿ��Դ����䳤���� C99��������

//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int *p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ",*(p+i));
//		}	
//	}
//
//	//����̬�ڴ�����Ŀռ䲻�þ��ͷ�
//	free(p);
//	p = NULL;//���ⷸ���󣬰�ȫ
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	//�ѿռ��ÿ���ֽڳ�ʼ��Ϊ0
//	if (p = NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d",*(p+i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc
//������̬�����ڴ�ռ�Ĵ�С
//int main()
//{
	//��ʹ��malloc���ٵ�20���ֽڿռ�
	//�������20���ֽڵĿռ䲻����������ʹ����
	//ϣ���ܹ���40���ֽڵĿռ�
	//����Ϳ�����realloc����̬�����ڴ�

	//reallocʹ�õ�ע������:
	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
	//2.���pֻ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
	//����һ����������Ŀռ�,���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵĿռ䣬��󷵻��¿��ٵ��ڴ�ռ�ĵ�ַ
	//3.����һ���µı���������realloc�����ķ���ֵ


//	int* p=(int *)malloc(20);
//
//
//	if (p = NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	int* p2 = realloc(p, 40);
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p2 + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//*��������
//1.�Կ�ָ��Ľ�����
//int main()
//{
//	int* p = (int*)(malloc(40));
//	//��һmallocʧ���ˣ�p�ͱ���ֵΪ
//	*p = 0;//error
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.�Զ�̬���ٵ��ڴ��Խ�����
//int main()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.�ԷǶ�̬�ڴ濪�ٵĿռ�����ͷ�