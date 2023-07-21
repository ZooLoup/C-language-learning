#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//从键盘输入年份和月份，输出该月有多少天。说明:1，3，5，7，8，10，12月是31天，4，6，9，11月是30天，闰年的2月是90天，否则2月是28天。判断闰年的条件是符合下面两条之一；1.能被4整除，但不能被100整除。2.能被400整除。
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	printf("请输入年份和月份:");
//	scanf("%d%d", &year, &month);
//	switch (month)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		day = 31;
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		day = 30;
//		break;
//	case 2:
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			day = 29;
//		}
//		else
//		{
//			day = 28;
//		}
//	printf("这个月有%d天", day);
//	}
//	return 0;
//}

//从键盘输入一个不超过4位的正整数，求出它是几位数，并逆序输出各位数字。如原数位5678，则输出8765.
//int main()
//{
//	int a, b, c, d, x;
//	printf("请输入一个不超过4位的正整数:");
//	scanf("%d", &x);
//	if (x >= 0 && x < 10000)
//	{
//		if (x < 10)
//			printf("这个数是一位数。");
//		else if (x < 100)
//			printf("这个数是两位数,逆序为:%d", x % 10 * 10 + x / 10);
//		else if (x < 1000)
//			printf("这个数是三位数,逆序为:%d", x % 10 * 100 + x % 100 / 10 * 10 + x / 100);
//		else if (x < 10000)
//			printf("这个数是四位数,逆序为:%d", x % 10 * 1000 + x % 100 / 10 * 100 + x % 1000 / 100 * 10 + x / 1000);
//	}
//	else
//	{
//		printf("输入的数据不合法!");
//	}
//
//	return 0;
//}

//从键盘输入成绩的等级，输出对应的百分制分数段。成绩的等级与百分制分数段之间的对应关系如下：A（或a）等级为85分以上，B（或b）等级为70-84分，C（或c）等级为60-69分，D（或d）等级为60分以下。要求分别采用多分支if语句和switch语句编程，并且当输入的数据不正确时，程序能输出错误提示信息。

int main()
{
	char mark;
	printf("请输入分数等级:");
	scanf("%c", &mark);
	if (mark == 'A' || mark == 'a')
		printf("分数为85分及以上。");
	else if (mark == 'B' || mark == 'b')
		printf("分数在70-84分。");
	else if (mark == 'C' || mark == 'c')
		printf("分数在60-69分。");
	else if (mark == 'D' || mark == 'd')
		printf("分数在60分以下");
	else
	{
		printf("输入的数据不合法，请重新输入。");
	}
	return 0;
}