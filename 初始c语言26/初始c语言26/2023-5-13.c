#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int* p = NULL;//p������ָ�� - ָ�����ε�ָ�� - ���Դ�����εĵ�ַ
//	char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���֧֧�� - ���Դ���ַ��ĵ�ַ
//	int arr[10] = { 0 };
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] - ��Ԫ�ص�ַ
//	//&arr - ����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,7,8,9,10 };
//	int (*p)[10] = &arr;//����ĵ�ַҪ������
//	//�����p��������ָ��
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	/*int(*pa)[10] = &arr;
//	int i = 0;*/
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(pa + i));
//	}*/
//
//
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", (*pa)[i]);
//	}*/
//	return 0;
//}

//�������������ʽ
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//������ָ�����ʽ
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { { 1,2,3,4,5 }, { 2,3,4,5,6 } };
//	print1(arr, 3 ,5);//arr - ������ - ��Ԫ�ؾ��ǵ�ַ
//	print2(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	//int arr[3][5] = { { 1,2,3,4,5 }, { 2,3,4,5,6 } };
//	//print1(arr, 3 ,5);//arr - ������ - ��Ԫ�ؾ��ǵ�ַ
//	//print2(arr, 3, 5);
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", p[i]);
//		printf("%d", *(arr + i));
//		printf("%d", *(p + i));
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int arr[5]; //arr��һ��5��Ԫ�ص���������
//int* parr1[10]; //parr1 ��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*,parr1��ָ������
//int(*parr2)[10];  //parr2 ��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int - arr2������ָ��
//int(*parr3[10])[5]; //��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ��

//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	char* p2 = "abcdef";
//	int* arr[10];
//	char* ch[5];
//	//����ָ��
//	//int *p3; //����ָ��
//	//char* p4;//�ַ�ָ�� - ָ���ַ���ָ��
//	int arr2[5];//����
//	int (*pa)[5] = &arr2;//ȡ������ĵ�ַ
//	return 0;
//}

//void test(int arr[])
//{}//ok
//void test(int arr[10])
//{}//ok
//void test(int* arr)
//{}//ok
//void test2(int* arr[20])
//{}
//void test2(int** arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test(arr2);
//}

//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
//void test2(int arr[3][])//err
//{}
//void test3(int arr[][])
//{}
////ֻ��ʡ���У�����ʡ����
//
//void test5(int(*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	test1(arr);
//	test2(arr);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test(&a);
//	test1(p1);
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

//void test(int** p)
//{
//}
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//ָ������Ҳ����
//	return 0;
//}

//����ָ�� - ָ�������ָ�� - 
//����ָ�� - ָ������ָ�� - ��ź�����ַ��һ��ָ��

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	//&arr;
//	//arr;
//	//printf("%d\n", Add(a, b);
//	//printf("%p\n", &Add);
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	//printf("%p\n", Add);
//	int (*pa)(int x,int y) = Add;
//	printf("%d\n",(*pa)(2, 3));
//	return 0;
//}

void Print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	void (*p)(char*) = Print;
	(*p)("hello world");
	return 0;
}