#define _CRT_SECURE_NO_WARNINGS 1
//p66
//编写某商业银行网银登录系统，如果口令输入错误，则提示“口令有误，请重新输入”。如果连续错误输入3次，则提示“该账户异常，将锁定24个小时”；如果口令正确，则提示“口令验证通过”。
//#include <stdio.h>
//int main()
//{
//	int pw, i = 0;
//	while (i < 3)
//	{
//		printf("请输入口令:");
//		scanf("%d", &pw);
//		if (pw != 123456)
//		{
//			printf("口令有误，请重新输入。");
//			i++;
//		}
//		else
//		break;
//
//	}
//	if (i == 3)
//		printf("该账户异常，将锁定24个小时。");
//	else
//		printf("口令验证通过。");
//	return 0;
//}

//采用printf("*");语句和循环语句编写程序，打印以下文案;
//*
//**
//***
//****
//*****
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("*");
//			printf("\n");
//	}
//	return 0;
//}

//从键盘输入若干个字符，直至按Enter键为止，分别哦统计其中英文字母，空格，数字和其他字符的个数。
//#include <stdio.h>
//int main()
//{
//	char c = 0;
//	int letters = 0;
//	int space = 0;
//	int digit = 0;
//	int other = 0;
//	printf("请输入一组数字:");
//	while (((c=getchar()))!= '\n')
//	{
//		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//			letters++;
//		else if (c == ' ')
//			space++;
//		else if (c >= '0' && c <= '9')
//			digit++;
//		else
//			other++;
//	}
//	printf("英文字母有%d个\n空格有%d个\n数字有%d个\n其他字符有%d个",letters,space,digit,other);
//	return 0;
//}

//有两个羽毛球队进行比赛，各出3个人。甲队为a,b,c,乙队为x,y,z。第一场比赛通过抽签决定对阵名单。抽签结果是:a不和x比,c不和x,z比，请编程输出3对选手的对阵名单。
//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	for (a = 'x'; a <= 'z'; a++)
//	{
//		for (b = 'x'; b <= 'z'; b++)
//		{
//			if(a!=b)
//				for (c = 'x'; c <= 'z'; c++)
//				{
//					if (c != a && c != b)
//					{
//						if (a != 'x' && c != 'x' && c != 'z')
//							printf("a-%c b-%c c-%c", a, b, c);
//					}
//				}
//		}
//	}
//	return 0;
//}

//已知abc+cba=1333，其中a,b,c均为一位数，编程求出满足条件的a,b,c的所有组合。
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= 9; b++)
//		{
//			for (c = 1; c <= 9; c++)
//			{
//				if ((a * 100 + b * 10 + c) + (c * 100 + b * 10 + a) == 1333)
//					printf("a=%d b=%d c=%d\n", a, b, c);
//			}
//		}
//	}
//	return 0;
//}

//任何一个自然数n的立方均可以写成n个连续奇数之和。
//1^3=1
//2^3=3+5
//3^3=7+9+11
//4^3=13+15+17+19
//编程实现从键盘输入一个自然数n，求组成n^3的n个连续奇数
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int m = 0;
//	printf("输入一个数:\n");
//	scanf("%d", &n);
//	m = (n * n - n) / 2;
//	printf("%d的立方=", n);
//	for (i = 1; i < 2 * n - 1; i = i + 2)
//		printf("%d+", 2 * m + i);
//	printf("%d\n", 2 * m + i);
//	return 0;
//}

