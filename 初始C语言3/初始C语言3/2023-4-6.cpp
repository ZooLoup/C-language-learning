#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6, };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);//err
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) 5/ sizeof(arr[0]));
//	return 0;
//}

//正数--原码，反码，补码相同
// 负数:
// 原码      -->     反码      -->      补码
// 直接按照正负      原码的符号位不变   反码+1
//                   其他位按位取反
// 
// //写出的二进制序列
//int main()
//{
//	int a = 0;//4个字节  32个比特位
//	int b = ~a;
//	//~ -- 按(2进制)位取反
//	//1010
//	//0101
//	//负数在内存中存储的时候，存储的是这个数的原码
//	printf("%d\n", b);//使用的，打印的这个数的原码
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++，先++，再使用
//	int b = a--;//后置--，先使用，再--
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//
//}

//
//int main()
//{
//	int a = (int)3.14;
//
//	return 0;
//}

//int main()
//{
//	//真 - 非0
//	//假 - 0
//	//&& - 逻辑与
//	//|| - 逻辑或
//	int a = 3;
//	int b = 5;
//	//int c = a && b;//a为真，b也为真才为真
//	//int c = a || b;//有一个为真就为真;
//	printf("c = %d\n", c);
//	return 0;
//}

//三目操作符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
////	int arr[10] = { 0 };
////	arr[4];//[] - 下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//() - 函数调用操作符
//
//	return 0;
//}


//关键字
// auto
//int main()
//{
//	auto int a = 10;//局部变量--自动变量
//	return 0;
//}

//int main()
//{
//	//register int a = 10;
//	int a = 10;
//	a = -2;
//	//int 定义的变量是有符号的
//	//signed int;
//	unsigned int num = 0;
//	return 0;
//}

//关键字:typedef - 类型定义 - 类型重定义
//int main()
//{
//	//张三 - 你的名字 - int | 家人叫你小三 -- u_int
//	typedef unsigned int u_int;//把类型重定义
//	u_int num2 = 20;
//	unsigned int num = 20;
//
//	return 0;
//}

//关键字 - static
//static 修饰局部表变量
//1.局部变量的生命周期变长
//void test()
//{
//	//int a = 1;不保存
//	static int a = 1;//静态的局部变量
// 2.static 修饰全局变量
// 改变了变量的作用域
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//extern - 申明外部符号
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//3.也是改变了函数的作用域-不准确
//static修饰函数改变了函数的链接属性
//外部链接属性 -> 内部链接属性
//申明外部函数
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#define 定义的标识符常量
//#define MAX 100
//#define 可以定义宏-带参数
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//宏的定义
//#define MAX(X,Y) (X>Y?:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	//max = (a)
//	printf("max = %d\n", max);
//	return 0;
//}


//指针
//int main()
//{
//	int a = 10;
//	int *p = &a;//取地址
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 20;//* - 解引用操作符
//	printf("a = %d\n", a);
//	//有一种变量是用来存放地址的-指针变量
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%p\n", ch);
//	return 0;
//}
//指针的大小在32位平台是4个字节，在64位平台上是8个字节