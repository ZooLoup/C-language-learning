#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
	//int* p = (int*)malloc(40);
	//if (p == NULL);
	//{
	//	return 0;
	//}
	////使用空间
	//int* p2 = realloc(p, 80);
	//if (p2 != NULL)
	//{
	//	p = p2;
	//}
	//int* p = realloc(NULL, 40);//malloc
	/*return 0;
}*/

//int main()
//{
	//1.对NULL指针的解引用操作
	/*int* p = malloc(40);
	*p = 10;*///mallloc开辟空间失败-对NULL指针解引用操作

	//2.对动态开辟空间的越界访问
	//int* p = (int)malloc(40);
	//if (p != NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//越界访问
	/*for (i = 0; i <= 10; i++)
	{
		*(p + i) = i;
	}
	free(p);
	p = NULL;
	return 0;*/
//}
//3.
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//4.使用free释放动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//回收空间
//	free(p);
//	p = NULL;
//	return 0;
//}

//5.对同一块动态内存的多次释放
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//使用
//	//释放
//	free(p);
//	free(p);
//
//	return 0;
//}

//6.动态开辟内存忘记释放(内存泄露)
//#include <windows.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//		Sleep(1000);
//	}
//}


//经典笔试题
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GerMemory(str);
//	strcpy(str, "helloc world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//1.运行代码程序会出现崩溃的现象
//2.程序存在内存泄露的问题
//str以值传递的形式给p
//p是GetMemory函数的形参，只能函数内部有效
//等GetMemory函数返回之后，动态开辟内存尚未释放并且无法找到，所以会造成内存泄露

//第二种改正方式
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	GerMemory(str);
//	strcpy(str, "helloc world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//
//	return 0;
//}

//void test()
//{
//	static int a = 10;//栈区
//	return &a;
//}
//int main()
//{
//	int*p = test();
//	*p = 20;
//	return 0;
//}

//int* test()
//{
//	int* ptr = malloc(100);
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free释放str指向的空间后，并不会把str置为NULL
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
	int main()
	{
		Test();

		return 0;
	}