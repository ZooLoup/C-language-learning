#define _CRT_SECURE_NO_WARNINGS 1
//ָ��
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;//ָ�����
//	return 0;
//}

//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	/*char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);*/
//	//ָ�����;�����ָ����н����ò�����ʱ���ܹ������ڴ�Ĵ�С
//	//int*p;  *p�ܹ�����4���ֽ�
//	//char*p  *p�ܹ�����1���ֽ�
//	//double *p�ܹ�����8���ֽ�
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr; - ������-��Ԫ�ص�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	//int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	return 0;
//}

//Ұָ��
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}

//int main()
//{
//	int* p;//�ֲ���������ʼ�������Ĭ�Ϸŵ���һ�����ֵ
//	*p = 20;
//	return 0;
//}

//����Խ�絼�µ�Ұָ������
//Խ����ʣ�Ұָ��
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++)
//	{
//		//*p = i;
//		//p++;
//		*p++ = i;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//1.ָ���ʼ��
//2.С��ָ��Խ��
//3.ָ��ָ��ռ��ͷ�
//4.
//int main()
//{
//	int a = 10;
//	int* pa = &a;//��ʼ��
//	int* p = NULL;//NULL
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *p);
//		p = p + 1;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", & arr[9] - &arr[0]);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen - ���ַ�������
//	//�ݹ� - ģ��ʵ����strlen - �������ķ�ʽ1�� �ݹ�ķ�ʽ
//	char arr[] = "bit";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);//��ַ-��Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);
//
//	printf("%p\n",&arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1. &arr-������-������������Ԫ�صĵ�ַ-������������������ - &������ ȡ��������������ĵ�ַ
//	//2.sizeof(arr)
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p+1)
//	}
//	//for (i = 0; i < 10; i++)
//	/*{
//		printf("%p ====== &p\n", p + 1, &arr[i]);
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", *pa);
//	//int*** pppa = &ppa;
//	return 0;
//}

//�ú��� --  ����
//ָ������ - ���� - ���ָ������� 
//����ָ�� - ָ��

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	/*int* pa = &a;
	int* pb = &b;
	int* pc = &c;*/
	int* arr2[3] = {&a,&b,&c};//ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d", *(arr2[i]));
	}

	return 0;
}