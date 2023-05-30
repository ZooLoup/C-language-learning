#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 5 / 2;
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	//>> -- 右移操作符
//	//1.算数右移
//	//右边丢弃，左边补原符号位
//	//2.逻辑右移
//	//右边直接丢弃,左边补0
//	a >> 1;
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//
//	//整数的二进制表示有:原码，补码，反码
//	//存储到内存的是补码
//	//1000000000000000000000000000001 - 原码
//	//1111111111111111111111111111110 - 反码
//	//10000000000000000000000000001 - 补码 = 反码 + 1
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	//000000000000000000000000000101
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	/*int a = 3;
//	int b = 5;
//	int c = a & b;*/
//	//000000000000000000000000000011
//	//000000000000000000000000000101
//	//000000000000000000000000000001
//	//都是真才为真
//
//	return 0;
//}

//int  main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);
//	//有一个为真就为真
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d\n b=%d\n",a,b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;//相同为0.相异为1
//	a = a ^ b;
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num的补码中有几个1
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	if (a)
//	{
//		printf("哈哈\n");
//	}
//	if (!a)
//	{
//		printf("呵呵\n");
//	}
//	//printf("%d\n", !a);
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;//解引用操作符
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(arr));
//}

//int main()
//{
//	int a = 0;
//	char b = 'w';
//	int arr[10] = { 0 };

	/*printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[10]));*/
//  }

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n");
//	return 0;
//}

//int main()
//{
	//int a = 11;
	//int a = 0;
	//printf("%d\n", ~a);
	//return 0;
//}

//int main()
//{
//	int a = (int)3.14; //int a = int(3.14);//err
//
//	return 0;
//}

