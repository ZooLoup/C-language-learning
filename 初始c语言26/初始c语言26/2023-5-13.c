#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int* p = NULL;//p是整形指针 - 指向整形的指针 - 可以存放整形的地址
//	char* pc = NULL;//pc是字符指针 - 指向字符的支支持 - 可以存放字符的地址
//	int arr[10] = { 0 };
//	//arr - 首元素地址
//	//&arr[0] - 首元素地址
//	//&arr - 数组的地址
//
//	int arr[10] = { 1,2,3,4,5,7,8,9,10 };
//	int (*p)[10] = &arr;//数组的地址要存起来
//	//上面的p就是数组指针
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

//参数是数组的形式
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

//参数是指针的形式
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
//	print1(arr, 3 ,5);//arr - 数组名 - 首元素就是地址
//	print2(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	//int arr[3][5] = { { 1,2,3,4,5 }, { 2,3,4,5,6 } };
//	//print1(arr, 3 ,5);//arr - 数组名 - 首元素就是地址
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

//int arr[5]; //arr是一个5个元素的整形数组
//int* parr1[10]; //parr1 是一个数组，数组有10个元素，每个元素的类型是int*,parr1是指针数组
//int(*parr2)[10];  //parr2 是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int - arr2是数组指针
//int(*parr3[10])[5]; //是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素

//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	char* p2 = "abcdef";
//	int* arr[10];
//	char* ch[5];
//	//数组指针
//	//int *p3; //整形指针
//	//char* p4;//字符指针 - 指向字符的指针
//	int arr2[5];//数组
//	int (*pa)[5] = &arr2;//取出数组的地址
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
////只能省略行，不能省略列
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
//	test(arr);//指针数组也可以
//	return 0;
//}

//数组指针 - 指向数组的指针 - 
//函数指针 - 指向函数的指针 - 存放函数地址的一个指针

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
//	//&函数名 和 函数名 都是函数的地址
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