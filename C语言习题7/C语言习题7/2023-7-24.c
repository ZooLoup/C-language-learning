#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//如果一个数恰好等于除它本身外的所有因子之和，则这个数就称为完数。列如，6的因子是1，2，3，且6=1+2+3，所以6是完数。试求1000以内所有的完数并输出。
//int main()
//{
//	int n = 10000;
//	int i = 0;
//	int j = 0;
//	int r = 0;
//
//	for (i = 1; i <= 10000; i++)
//	{
//		r = 0;
//		for (j = 1; j < i; j++) //求因子之和
//			if (i % j == 0)
//				r += j;
//		if (r == i)
//			printf("%d\n", r);
//	}
//	return 0;
//}

//编程求1+(1+2)+(1+2+3)+……+(1+2+3+……+n)
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int i, j;
//	int k;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		k = 0;
//		for (j = 1; j <= i; j++)
//			k = k + j;
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}

//2.
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	scanf("%d", &n);
//	for (i = 0; i <= n; i++)
//	{
//		k = k + i;
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		printf("\n");
//		for (j = 1; j <= i; j++)
//		{
//			sum = i * j;
//			printf("%d*%d=%-3d", i, j, sum);
//		}
//	}
//	return 0;
//}

//有36块砖，由36个人搬；男人一次搬4块，女人一次搬3块，两个小孩抬一块，要求一次刚好全部搬完。问男人，女人，小孩各多少？
//int main()
//{
//	int women,men,children;
//	for (men = 0; men < 9; men++)
//	{
//		for (women = 0; women < 12; women++)
//		{
//			children = 36 - women - men;
//			if (4 * men + 3 * women + 1 / 2 * children == 36 && children % 2 == 0)
//			{
//				printf("男人:%d\n", men);
//				printf("女人:%d\n", women);
//				printf("小孩:%d\n", children);
//			}
//		}
//	}
//	return 0;
//}

//猴子第一天摘下若干个桃子，当即吃了一大半，觉得不过瘾又多吃了一个，以后每天都吃掉前一天剩桃子的一半加一个，到第十天时，就只剩下一个桃子了，求第一天共摘了多少桃子？
//int main()
//{
//	int i;
//	int n = 1;
//	for (i = 9; i >= 1; i--)
//		n = (n + 1) * 2;
//		printf("%d", n);
//	return 0;
//}

//int main()
//{
//	int i, x = 1;
//	for (i = 9; i > 0; i--)
//		x = (x + 1) * 2;
//		printf("第一天一共摘了%d个桃子", x);
//	return 0;
//}

//有一个分数序列2/1,3/2,5/3,8/5,……,从第二项开始，每一项的分子为前一项的分子与分母之和，每一项的分母为前一项的分子，编程求这个数列的前n项之和。
int main()
{
	int a = 2;
	int b = 1;
	int t = 0;
	int i = 0;
	int n = 0;
	double sum = 0;
	printf("请输入n的值");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + 1 * a / b;
		t = a;
		a = a + b;
		b = t;
	}
	printf("sum=%f\n", sum);
}