#define _CRT_SECURE_NO_WARNINGS 1
//编程从键盘输入10个数，求它们的方差。
#include <stdio.h>
#include <math.h>
//int main()
//{
//	double s = 0, s1 = 0, x[10];
//	int i = 0;
//	printf("请输入10个数:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%lf", &x[i]);
//	for (i = 0; i < 10; i++)
//		s1 = s1 + x[i];
//	s1 = s1 / 10;
//	for (i = 0; i < 10; i++)
//		s = s + (x[i] - s1) * (x[i] - s1);
//	s = s / 10;
//	s = pow(s, 0.5);
//	printf("方差为:%lf\n", s);
//	return 0;
//}

//从键盘输入一个3x3的矩阵，求该矩阵主对角线上的元素之和。
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int a[3][3];
//	printf("请输入一个3*3的矩阵:");
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf("%d", &a[i][j]);
//	for (i = 0; i < 3; i++)
//		sum = sum + a[i][i];
//	printf("主对角线上的元素之和是:%d\n", sum);
//	return 0;
//}

//从键盘上输入一个M*N的二维数组，求该数组各行的平均值，并将计算结构放到一个一维数组中。
//#define M 3
//#define N 4
//int main()
//{
//	int i, j;
//	float a[M][N];
//	float b[M];
//	float sum = 0;
//	printf("请输入%d*%d的矩阵:",M,N);
//	for (i = 0; i < M; i++)
//	{
//		
//		for (j = 0; j < N; j++)
//		{
//			scanf("%f",&a[i][j]);
//			sum = sum + a[i][j];
//		}
//		b[i] = sum / N;
//	}
//	for (i = 0; i < M; i++)
//		printf("%f\n", b[i]);
//	return 0;
//}

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

int main()
{

	return 0;
}