#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//编写函数，将一个N*N二维数组的左下半三角元素全部值0，其他元素全部置1.要求在main()函数中输出该数组的值。
//#define N 5
//int fun(int a[][N])
//{
//	int i, j;
//	for (i = 0; i <= N; i++)
//		for (j = 0; j < N; j++)
//			if (j <= i)
//				a[i][j] = 0;
//			else
//				a[i][j] = 1;
//}
//int main()
//{
//	int a[N][N];
//	int i = 0;
//	int j = 0;
//	fun(a);
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//			printf("%4d", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//编写函数求M*N二维数组中每列的最小元素，将结果依次存入一维数组中。要求在main()函数中进行数组的输入和输出。
#define M 3
#define N 4
void fun(int a[M][N], int b[N])
{
	int i, j, min;
	for (j = 0; j < N; j++)
	{
		min = a[0][j];
		for (i = 1; i < M; i++)
			if (a[i][j] < min)
			{
				min = a[i][j];
				b[j] = min;
			}

	}
}
int main()
{
	int a[M][N], b[N], i, j;
	printf("请输入数组:\n");
	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
			scanf("%d",&a[i][j]);
	fun(a, b);
	printf("结果为:\n");
	for (i = 0; i < N; i++)
		printf("%6d",b[i]);
	return 0;
}