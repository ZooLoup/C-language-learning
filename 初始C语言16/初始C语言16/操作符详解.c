#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	double a = 5 / 2;//商2余1
//	printf("a=%lf\n", a);
//	return 0;
//}

//int main()
//{
	/*int a = -1;
	a >> 1;*/// >> -右移操作符
	//移动的是二进制位
	//右移操作符
	//1.算术右移
	//右边丢弃，左边补原位符号 
	//2.逻辑右移
	//右边丢弃，左边补0
    //整数的二进制表示：原码，反码，补码
	//存储到内存中的是补码
	/*int a = -1;
	int b = a >> 1;
	printf("%d\n", b);
	return 0;
}*/

//int main()
//{
	//& - 按2进制位与
	/*int a = 3;
	int b = 5;
	int c = a & b;
	printf(" % d\n", c);*/

	//| - 按二进制位或
	/*int a = 3;
	int b = 5;
	int c = a | b;
	printf("%d\n", c);*/

	//按二进制位异或
	//相同为0，相异为1
	/*int a = 3;
	int b = 5;
	int c = a ^ b;
	printf("%d\n", c);
	return 0;
}*/


//交换两个数，并且不创建临时变量
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int tmp = 0;
//	printf("before:a=%d b=%d\n", a, b);
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//
//	//加减法-可能会溢出
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("atfer : a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;//a 011 b 101  110
//	b = a ^ b;//  110   101  011
//	a = a ^ b;//  110   011  101
//	printf("after : a=%d b=%d\n", a, b );
//	return 0;
//}

//编写代码，求一个正数存放在内存中二进制1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> 1) & 1))
//			count++;
//	}
	//32bit
	// 
	//统计num的补码中有几个1
	// 
	// 
	//while (num)
	//{
	//	if (num % 2 == 1)
	//		count++;
	//	num = num / 2;
	//}



//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	if (a)
//	{
//		printf("呵呵\n");
//	}
//	if (!a)
//	{
//		printf("呵呵\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;//解引用操作符
//	return 0;
//}

int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof(c));//1

	printf("%d\n", sizeof(p));//8  32位平台是四个字节  64位平台是8个字节

	printf("%d\n", sizeof(arr));//40

	return 0;
}