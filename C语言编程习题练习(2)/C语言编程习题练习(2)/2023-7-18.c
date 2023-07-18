#define _CRT_SECURE_NO_WARNINGS 1
//p23
//根据一下分段函数编写程序，输入一个x的值，输出相应的y值。
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入一个x的值:\n");
//	scanf("%d", &x);
//	if (x > -5 && x < 0)
//		y = x - 1;
//	else if (x == 0)
//		y = x;
//	else if (x > 0 && x < 8)
//		y = x + 1;
//	else
//		y = 10;
//	printf("%d\n", y);
//	return 0;
//}

//从键盘输入一个字符，如果是小写字母，则将其转换成大写字母输出；如果是大写字母，则将其转换成小写字母输出；如果是其他字符，则原样输出。
//#include <stdio.h>
//int main()
//{
//	char c = 0;
//	printf("请输入一个字符:");
//	scanf("%c", &c);
//	if (c >= 'A' && c <= 'Z')
//		printf("%c", c + 32);
//	else if (c >= 'a' && c <= 'z')
//		printf("%c", c - 32);
//	else
//		printf("%c", c);
//	return 0;
//}

//输入一个3位整数，判断它是否位水仙花数。当输入数据不正确时，要求给出错误提示。说明：水仙花数是一个3位数，其个位数的立方之和等于该数本身，如153=1^3+5^3+3^3
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int x = 0;
	printf("请输入一个三位数:");
	scanf("%d", &x);
	if (x >= 100 && x < 1000)
	{
		a = x / 100;
		b = x % 100 / 10;
		c = x % 10;
		if (a * a * a + b * b * b + c * c * c == x)
			printf("这个数是水仙花数");
		else
			printf("这个数不是水仙花数");
	}
	else
		printf("输入的数据不符合要求！");
	return 0;
}