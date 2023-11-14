#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
//编写函数max(int a[]),用来求数组a中元素的最大值。在主函数中定义一个数组，并输入其元素值，然后调用函数max(),输出该数组中元素的最大值。
//#define N 10
//int Max(int a[])
//{
//	int i = 0;
//	int max1 = 0;
//	max1 = a[0];
//	for (i = 1; i < N; i++)
//	{
//		if (max1 < a[i])
//			max1 = a[i];
//	}
//	return max1;
//}
//int main()
//{
//	int i = 0;
//	int a[N];
//	for (i = 0; i < N; i++)
//		scanf("%d",&a[i]);
//	printf("元素的最大值是%d",Max(a));
//	return 0;
//}

//编写一个冒泡法对n个数由小到大进行排序的函数。在主函数中输入n的值以及n的个数，然后调用自定义函数，输出排序结果。
int sort(int a[], int n)
{
	int i = 0;
	int j = 0;
	int tmp=0;
	for (i = 1; i < n - 1; i++)
	{
		for (j = 1; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int i = 0;
	int n = 0;
	int a[100];
	int sort(int a[], int n);
	printf("请输入元素个数:");
	scanf("%d",&n);
	printf("请输入n个元素的值:");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}