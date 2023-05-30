#define _CRT_SECURE_NO_WARNINGS 1
//结构体
#include <stdio.h>
//描述一个学生
//名字
//年龄
//电话
//性别

//struct 结构体关键字 stu - 结构体标签  struct Stu - 结构体类型
//typedef struct Stu
//{
//	//成员变量
//	char name[20];//
//	short age;//
//	//定义一个结构体类型
//	char tele[12];//
//	char sex[5];//
//}Stu; //s1, s2, s3;//是三个全局的结构体变量
//int main()
//{
//	Stu s1 = {"张三",20,"11111111111","男"};//局部变量
//	struct Stu s2 = {"保密",20,"333333333","保密"};
//	              //创建结构体变量
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100, 'w', "hello wrold", 3.14}, arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf",t.s.d);//3.14
//	printf("%s\n", t.pc);//hello bit
//	return 0;
//}

//typedef struct Stu
//{
//	//成员变量
//	char name[20];//
//	short age;//
//	//定义一个结构体类型
//	char tele[12];//
//	char sex[5];//
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "李四", 40, "15598886688","男" };
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
//结构体传参要传结构体的地址

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
//	int ret = 0;
//	ret = Add(a, b);
//	return 0;
//}

//数据结构
//线性数据结构 - 顺序表 链表 栈  队列
//树形数据结构 - 二叉树
//图形

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//调试


//Debug ---- 调试版本 -- 程序员使用的
//release ---- 发布版本 -- 用户使用的

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}
// 
// 
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		printf("%d\n", i);
//	}
//	for (i = 0; i <= 100; i++)
//	{
//		printf("%d", 10 - i);
//	}
//	return 0;
//}
//F5 - 启动调试-和F9配合使用的
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

	return 0;
}