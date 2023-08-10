#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//编写两个函数，分别求两个整数的最大公约数和最小公倍数，在主函数中输入两个整数，掉欧阳那个它们后输出结果。
int fgcd(int a, int b)
{
	int i;
	for (i = (a > b ? a : b); i > 1; i--)
	{
		if (a % i == 0 && b % i == 0)
			break;
	}
	return i;
}
int flcd(int a, int b)
{
	int i;
	for (i = (a > b ? a : b); i < a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			break;
		}
		return i;
	}
}
int main()
{
	int fgcd(int a, int b);
	int flcd(int a, int b);
	int a, b, gcd, lcd;
	printf("请输入两个整数:");
	scanf("%d%d",&a,&b);
	gcd = fgcd(a, b);
	lcd = flcd(a, b);
	printf("最大公约数:%d\n最小公倍数:%d\n",gcd,lcd);
	return 0;
}