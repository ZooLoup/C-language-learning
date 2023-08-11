#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//编写一个函数f()，用来求n个a的值。在主函数中输入两个正整数a和n,调用函数f()，求a+aa+aaa+aaaa+……+(n个a的值),并输出结果。
//int Add(int m, int n)
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		j = 10 * n + m;
//	}
//	return j;
//}
//int main()
//{
//	int a, n, i;
//	int sum = 0;
//	printf("请输入两个整数:");
//	scanf("%d%d", &a, &n);
//	for (i = 0; i <= n; i++)
//	{
//		sum = sum + Add(a, n);
//	}
//	printf("%d",sum);
//	return 0;
//}

//编写函数power()，用来求n^k的值。在主函数中输入两个正整数n和k，调用函数power()，求1^k+……+n^k的值。
//int power(int n, int k)
//{
//	int i = 0;
//	int j = 1;
//	for (i = 1; i <= k; i++)
//	{
//		j = j * n;
//	}
//	return j;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int i = 0;
//	int sum = 0;
//	printf("请输入n和k的值:");
//	scanf("%d %d",&n,&k);
//	for (i = 0; i < n; i++)
//	{
//		sum = sum + power(n, k);
//	}
//	printf("%d",sum);
//	return 0;
//}