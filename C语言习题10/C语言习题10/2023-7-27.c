#define _CRT_SECURE_NO_WARNINGS 1
//输入一个正整数，计算并输出这个正整数的各位数字之和。
//#include <stdio.h>
//int main()
//{
//	int number = 0;
//	int sum = 0;
//	printf("请输入一个正整数:");
//	scanf("%d", &number);
//	while (number > 0)
//	{
//		sum = sum + number % 10;
//		number = number / 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//输入一个不多于5位的正整数，求：1.它是几位数。2.合成他的逆序数并输出。例如：如果原数是123，则输出321.
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int num = 0;
//	int reverse = 0;
//	int count = 0;
//	printf("请输入一个不多于5位的正整数: ");
//	scanf("%d", &num);
//	while (num!=0)
//	{
//		i = num % 10;
//		reverse = reverse * 10 + i;
//		num = num / 10;
//		count++;
//	}
//	printf("它是%d位数\n逆序数为:%d", count, reverse);
//	return 0;
//}

//从键盘输入若干字符，直至按Enter为止,分别统计其中+,-,*,/,%,空格和其他字符的个数。
//#include <stdio.h>
//int main()
//{
//	 int add=0, sub=0, mul=0, div=0, mod=0, space=0, other=0;
//	 char i = 0;
//	printf("请输入一串字符:");
//	while ((i = getchar()) != '\n')
//	{
//		switch (i)
//		{
//		case '+':
//			add++;
//			break;
//		case '-':
//			sub++;
//			break;
//		case '*':
//			mul++;
//			break;
//		case '/':
//			div++;
//			break;
//		case '%':
//			mod++;
//			break;
//		case ' ':
//			space++;
//			break;
//		default:
//			other++;
//		}
//	}
//	printf("加号:%d 减号:%d 乘号:%d 除号:%d 百分号:%d 其他:%d", add, sub, mul, div, mod, space, other);
//	return 0;
//}

//从键盘输入两个整数，计算并输出这两个整数的最大公约数。
#include <stdio.h>
int main()
{
	int m, n, r, t;
	printf("请输入两个整数:");
	scanf("%d%d", &m, &n);
	if (m < n)
	{
		t = m;
		m = n;
		n = t;
	}
	r = m % n;
	while (r != 0)
	{
		m = n;
		n = r;
		r = m % n;
	}
	printf("最大公约数是:%d\n", n);
	return 0;
}