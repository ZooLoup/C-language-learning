#define _CRT_SECURE_NO_WARNINGS 1
//指针
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;//指针变量
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
//	//指针类型决定了指针进行解引用操作的时候，能够访问内存的大小
//	//int*p;  *p能够访问4个字节
//	//char*p  *p能够访问1个字节
//	//double *p能够访问8个字节
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
//	//int* p = arr; - 数组名-首元素地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	//int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化随机值
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

//野指针
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
//	int* p;//局部变量不初始化，里边默认放的是一个随机值
//	*p = 20;
//	return 0;
//}

//数组越界导致的野指针问题
//越界访问；野指针
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

//1.指针初始化
//2.小心指针越界
//3.指针指向空间释放
//4.
//int main()
//{
//	int a = 10;
//	int* pa = &a;//初始化
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
//	//strlen - 求字符串长度
//	//递归 - 模拟实现了strlen - 计数器的方式1， 递归的方式
//	char arr[] = "bit";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);//地址-首元素的地址
//	printf("%p\n", arr+1);
//
//	printf("%p\n",&arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1. &arr-数组名-数组名不是首元素的地址-数组名便是整个数组 - &数组名 取出的是整个数组的地址
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
//	int** ppa = &pa;//ppa就是二级指针
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", *pa);
//	//int*** pppa = &ppa;
//	return 0;
//}

//好孩子 --  孩子
//指针数组 - 数组 - 存放指针的数组 
//数组指针 - 指针

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	/*int* pa = &a;
	int* pb = &b;
	int* pc = &c;*/
	int* arr2[3] = {&a,&b,&c};//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d", *(arr2[i]));
	}

	return 0;
}