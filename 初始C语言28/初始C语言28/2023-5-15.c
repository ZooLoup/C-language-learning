#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//ָ������
//	int* arr[10];
//	//����ָ��
//	int* (*pa)[10] = &arr;
//	//����ָ��
//	int (*pAdd)(int ,int) = Add;//&Add
//	//int sum = (*pAdd)(1, 2);
//	//int sum = pAdd(1, 2);
//	//printf("sum = %d\n", sum);
//	//����ָ�������
//	int (*pArr[10])(int, int) = Add;
//	//ָ����ָ�������ָ��
//	int (*(*ppArr)[10])(int, int) = &pArr;
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j <sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
struct Stu
{
	char name[20];
	int age;
};
//
//void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));
int cmp_int(const void* e1, const void* e2)
{
	//�Ƚ���������ֵ��
 return *(int*)e1-*(int*)e2;
}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
}

int cmp_float(const void* e1, const void* e2)
{
	return *(float*)e1 - *(float*)e2;
}

void test2()
{
	float f[] = { 9.0,9.0,7.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f", f[j]);
	}
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����ıȽϲ���ֱ����><=���Ƚ�,Ӧ����strcmp����
	return strcmp(((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
}
void test3()
{
	struct Stu s[3] = { {"zhangsan", 20},{"lisi", 30},{"wangwu", 40} };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	
}
int main()
{
	test1();
}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//struct Stu s[3] = { {"zhangsan", 20},{"lisi", 30},{"wangwu", 40} };
//	//bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;
//
//	//char ch = 'w';
//	void* p = &a;
//	*p = 0;
//	//p = &ch;
//	//void*���͵�ָ�� ���Խ����������͵ĵ�ַ
//	//void*���͵�ָ�� ���ܽ��н����ò���
//	//void*���͵�ָ�� ���ܽ���+-�����Ĳ���
//	return 0;
//}