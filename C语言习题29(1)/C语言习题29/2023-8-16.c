#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//编写函数，将一个数字字符串转换成为一个整数（不能调用C语言中将字符串转换成整数的库函数）。
//int fun(char p[])
//{
//	int s = 0;
//	int t;
//	int i = 0;
//	int j = 0;
//	int n = strlen(p);
//	int k;
//	if (p[0] == '-')
//		i++;
//	for (j = 1; j <= n - 1; j++)
//	{
//		t = p[j] - '0';
//		s = s * 10 + t;
//	}
//	if (p[0] == '-')
//		return s;
//	else
//		return s;
//}
//int main()
//{
//	char s[6];
//	int n;
//	printf("请输入一个数字串:\n");
//	gets(s);
//	n = fun(s);
//	printf("结果是:%d",n);
//	return 0;
//}

//编写函数，根据一维数组的值按如下规律输出结果。假设一维数组的值为1,2,3,4调用函数后将输出以下方阵（要求在main()函数中输入数组a的值）
#include <stdio.h>
#define M 4
void fun(int a[])
{
	int i, j, k;
	for (i = 0; i < M; i++)
	{
		k = a[M - 1];
		for (j = M - 1; j > 0; j--)
			a[j] = a[j - 1];
		a[0] = k;
		for (j = 0; j < M; j++)
			printf("%6d",a[j]);
		printf("\n");
	}
}
int main()
{
	int i, a[M];
	printf("请输入%d个整数:",M);
	for (i = 0; i < M; i++)
		scanf("%d",&a[i]);
	fun(a);
	return 0;
}