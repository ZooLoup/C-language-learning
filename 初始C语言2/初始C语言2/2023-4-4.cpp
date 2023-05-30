#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <string.h>

//int main()
//{
//	//const - 常属性
//	//const修饰的常变量
//	//const int n = 10;//n是变量，但是又有常属性
//	//n = 20;
//	//const int num = 4;
//	//printf("%d\n", sum);
//	//num = 8;
//	//printf("%d\n", sum);
//	//3;//字面常量
//	//100;
//	//3.14;
//
//	return 0;
//}


//#define 定义的标识符常量
//#define MAX 10 //定义一个符号
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}


//4.枚举常量
//枚举:一一列举
//性别;男，女，保密
//三原色:宏
//enum Sex
//{
//	MALE,
//    FEMALE,
//    SECRET
//};
////MALE,FEMALE,SECRET - 枚举常量
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	return 0;
//}

//enum Color
//{
//	RED,
//	YELLO,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;
//	return 0;
//}


//字符串类型
//int main()
//{
//	"abcdef";
//	"hello world";
//	"";//字符串
//	return 0;
//}

//int main()
//{
	//数据在计算机上存储的时候，存储的是二进制
	//a - 97
	//A - 65
	//...
	//ASCII 编码
	//ASCII 码值
	//char arr1[] = "abc";//数组
	//char arr2[] = {'a','b', 'c', '\0'};
	////"abc" -- 'a' 'b' 'c' '\0'
	//printf("%s\n", arr2);
	//printf("%s\n", arr1);
	//return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));//strlen 计算字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//	//3   随机值
//}

//int main()
//{
//	printf("abc\n");
//	return 0;
//}

//int main()
//{
//	printf("c:\\test\\32\\test.c");
//	//\t - 水平制表符
//	return 0;
//}

//int main()
//{
//	//printf("%c\n", 'a');
//	printf("%s\n", "abc");
//	return 0;
//}

//int main()
//{
	//printf("%c\n", '\x61');
	//printf("%d\n", strlen("c:\test\32\test.c"));
	//\32 -- 32是2个8进制数字
	//printf("%c\n", '\132');
	//32作为8进制代表的那个十进制数字，作为ASCII码对应的字符
	//32 -- > 十进制 26 ->作为ASCII码值对应的字符
	//return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("加入\n");
//	printf("你要好好学习吗?(1/0)>:");
//	scanf("%d", &input);
//}


//循环
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000);
//	{
//	    printf("敲一行代码:%d\n", line);
//	    line++;
//	}
//	printf("好offer\n");
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	//sum = a + b; 
//	sum = Add(num1, num2);
//	//sum = num1 + num2;
//	//sum = a + b;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,9,10};
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//下标的方式访问元素
//	//arr[下标]
//	return 0;
//}

//算术操作符
//int main()
//{
//	int a = 5 % 2;//取模
//	printf("%d\n", a);
//	return 0;
//}

//移位操作符
//int main()
//{
//	//<<左移
//	//>>右移
//	int a = 1;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//(2进制)位操作
//	//& 按位与
//	//|  按位或
//	//^  按位异或
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	//011
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;//=赋值   == 判断相等
//	a = a + 10;//1
//	a += 10;//2
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 20;
//	//复合赋值符
//	//+= -= *= /= %=
//	return 0;
//}

//单目操作符
//双目操作符
//三木操作符
//int main()
//{
//	/*int a = 10;
//	int b = 120;
//	a + b;*///+就是一个操作符,左右两边各有一个操作数，叫双目操作符
//	//c语言中表示真假
//	//0-表示假
//	//非0-真
//	//int a = 0;
//
//	int a = -2;
//	int b = -a;
//	int c = +3;//+号都会省略
//
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}

//int main()
//{
	//int arr[10] = { 0 };//10个整形元素的数据
	//int sz = 0;
	//10*sizeof(int) = 40;
	// 计算数组的元素个数
	// 个数 = 数组总大小/每个元素的大小
	//sz = sizeof(arr) / sizeof(arr[0]);
	//printf("sz = %d\n", sz)
	//int a = 10;
	////sizeof 计算的是变量/类型所占空间的大小
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof int (a));
	//return 0;
//}