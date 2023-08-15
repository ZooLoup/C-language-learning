#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//p128
//编写函数，根据以下公式求哌的值。要求在主函数中输入精度，并输出结果。精度表示计算到公式中某一项的值小于规定值为止。
//double fun(double eps)
//{
//	double s = 1.0, n = 1.0, t, pi = 1;
//	while (s >= eps)
//	{
//		t = n / (2 * n + 1);
//		s = s * t;
//		pi = pi +s;
//		n++;
//	}
//	pi = pi * 2;
//	return pi;
//}
//int main()
//{
//	double x;
//	printf("请输入精度:");
//	scanf("%lf",&x);
//	printf("pi=%lf\n",fun(x));
//	return 0;
//}

//编写函数，找出一个大于给定整数n且紧随n的素数，要求在主函数中输入n，并输出结果。
int fun(int m)
{
	int i ;
	int k ;
	for (i = m + 1; ;i++)
	{
		for (k = 2; k < i; k++)
		{
			if (i % k == 0)
				break;
			if (k >= i)
				return(i);
		}
	}
}
void main()
{
	int n;
	printf("请输入一个整数:");
	scanf("%d", &n);
	printf("紧随的素数为: %d\n",fun(n));
}