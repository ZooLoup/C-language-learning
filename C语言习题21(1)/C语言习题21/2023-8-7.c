#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//求1+2+3+4+……+5+的值
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum = 0;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d",sum);
//	return 0;
//}

//int sum(int k)
//{
//	int i = 0;
//	int s = 0;
//	for (i = 1; i <= k; i++)
//	{
//		s += i;
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	int s = 0;
//	int sum(int k);
//	printf("请输入n的值:");
//	scanf("%d",&n);
//	s = sum(n);
//	printf("%d",s);
//}

//编写函数，计算以下表达式的值。要求在主函数中输入x的值，并输出结果。
//int sum(int k)
//{
//	int s = 0;
//	if (k < 0)
//	{
//		s = k * k - 2 * k + 1;
//	}
//	else
//	{
//		s = k * k * k + k + 3;
//	}
//	return s;
//}
//int main()
//{
//	int x;
//	int y=0;
//	printf("请输入x的值:");
//	scanf("%d",&x);
//	int sum(int x);
//	y = sum(x);
//	printf("%d",y);
//	return 0;
//}