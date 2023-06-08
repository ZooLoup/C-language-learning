#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
//1.当前我们知道的内存的使用方式
//1.创建一个变量
//int a = 10;//局部变量 - 栈区
//int g_a=10;//全局变量 - 静态区
//struct S
//{
//	char name[20];
//	int age
//};
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct S arr[50];//50个strucr S类型的数据
//	//30 - 浪费
//	//60 - 不够
//	
//	return 0;
//}

//c语言是可以创建变长数组的 -C99中增加了

int main()
{
	//向内存申请10个整形的空间
	int* p = (int*)malloc(INT_MAX+1);
	if (p == NULL)
	{
		//打印错误原因的一个方式
		printf("%s\n", strerror(errno));
	}
	else
	{
		//正常使用空间
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//
	//当动态申请的空间不在使用时
	//就应该还给操作系统
	free(p);
	return 0;
}