#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//编程将递增数列10，20，30，40，50，60，70，80，90，100保存到数组中，再从键盘输入一个整数，将它插入到该数列中，使之仍为一个递增数列。
//int main()
//{
//	int a[11] = { 10,20,30,40,50,60,70,80,90,100 }, b, i,p=10;
//	printf("请输入要插入的元素:");
//	scanf("%d",&b);
//	for (i = 0; i < 10; i++)
//		if (b < a[i])
//		{
//			p = i;
//			break;
//		}
//	for (i = 9; i >= p; i--)
//		a[i + 1] = a[i];
//	a[p] = b;
//	for (i = 0; i <= 10; i++)
//		printf("%d ", a[i]);
//	return 0;
//}

//编程从键盘输入一个M*N的二维数组，求该数组中最外圈元素的平均值，并输出结果。
#define M 3
#define N 4
int main()
{
	int a[M][N];
	int i, j, k = 0;
	double sum = 0.0;
	printf("请输入数组:\n");
	for (i = 0; i < m; i++)
		for (j = 0; j < N; j++)
		{
			scanf("%d",&a[i][j]);
			if (i == 0 || i == M - 1 || j == 0 || j == N - 1)
			{
				sum += a[i][j];
				k++;
			}
		}
	printf("外围元素的平均值为:%lf\n",sum/k);
	return 0;
}