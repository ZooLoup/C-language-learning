#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	double d= 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	//int a = 10; //向内存申请了4个字节的空间
//	////printf("%p\n", &a);
//	//int *p = &a;//p是一个变量 - 指针变量
//	////printf("%p\n", p);
//	//*p = 20;//* - 解引用操作符/间接访问操作符
//	//printf("a = %d\n", a);
//
//	return 0;
//}


//结构体
//char int double...
//人  书  - 复杂对象
//复杂对象 -- 结构体 - 我们自己创造出来的一种类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};

int main()
{
	struct Book b1 = { "C语言程序设计", 55 };
	strcpy(b1.name, "C++");//字符串拷贝
	printf("%s\n", b1.name);
	return 0;
}
//
//int main()
//{
	//利用结构体类型-创建一个该类型的结构体变量
	/*struct Book b1 = {"C语言程序设计", 55};
	struct Book* pb = &b1;*/
	//利用pb打印出我的书名和价格
	//.  结构体变量.成员
	//-> 结构体指针->成员
	/*printf("%s\n", pb->name);
	printf("%d\n", pb->price);*/
	/*printf("%s\n", (*pb).name);
	printf("%s\n", (*pb).price);*/
	/*printf("书名:%s\n", b1.name);
	printf("价格:%d\n", b1.price);
	b1.price = 15;
	printf("修改后的价格:%d\n", b1.price);*/
	//return 0;
//}