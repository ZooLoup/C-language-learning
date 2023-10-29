#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//编程从键盘输入一个N*N的矩阵A，求矩阵B(B=A*A)，即将矩阵A与其装置矩阵相加，结果存放到矩阵B中。例如，输入下面的矩阵。
//1 2 3
//4 5 6
//7 8 9
//其转置矩阵为
//1 4 7
//2 5 8
//3 6 9
//则程序的输出结果为:
//2 6 10
//6 10 14
//10 14 18
//#define N 3
//int main()
//{
//	int a[N][N], b[N][N], c[N][N];
//	int i, j;
//	printf("请输入矩阵a:\n");
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//			scanf("%d", &a[i][j]);
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//		{
//			c[i][j] = a[j][i];
//			b[i][j] = a[i][j] + c[i][j];
//		}
//	printf("结果为:\n");
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//				printf("%7d",b[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//编程从键盘输入一个方阵的行数及所有元素，求该方阵“右上三角”的元素之和。
//int main()
//{
//	int x[10][10] = { 0 };
//	int n, i, j;
//	int sum = 0;
//	printf("请输入方阵的行数:");
//	scanf("%d",&n);
//	printf("请输入方阵的元素:");
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d",&x[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//		for (j = i; j < n; j++)
//			sum = sum + x[i][j];
//	printf("sum=%d\n",sum);
//	return 0;
//}

//从键盘输入一个字符串，将其按逆序输出。
//int main()
//{
//	char a[20] = { 0 };
//	int i = 0;
//	printf("请输入一个字符串:");
//	gets(a);
//	for (i = strlen(a) - 1; i >= 0; i--)
//		printf("%c",a[i]);
//	return 0;
//}