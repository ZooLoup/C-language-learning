#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//s=1+sqrt(1+sqrt(2))+。。。。+。
//double Add(int n)
//{
//	int i;
//	double s = 0.0;
//	for (i = 2; i <= n; i++)
//	{
//		s += sqrt((double)i);
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	int i;
//	double sum = 0.0;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += Add(n);
//	}
//	printf("结果为: %lf",sum);
//	return 0;
//}

//double fun(int n)
//{
//	int i;
//	double s = 1.0, p = 1.0;
//	for (i = 2; i <= n; i++)
//	{
//		p = p + sqrt((double)i);
//		s += p;
//	}
//	return s;
//}
//void main()
//{
//	int n;
//	double s;
//	printf("输入n:");
//	scanf("%d",&n);
//	s = fun(n);
//	printf("结果为: %f\n",s);
//}