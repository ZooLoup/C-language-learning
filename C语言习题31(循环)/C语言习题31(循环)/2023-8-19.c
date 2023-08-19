#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//编写求一个递归函数求以下多项式的值，要求在主函数中输入x和n的值，并输出结果。p132
//float p(int n, int x)
//{
//	float f;
//	if (n == 0)
//		f = 1.0;
//	else if (n == 1)
//		f = x;
//	else
//		f = ((2 * n - 1) * x * p((n - 1), x) - (n - 1) * p((n - 2), x)) / n;
//	return f;
//}
//int main()
//{
//	int n, x;
//	printf("请输入n和x的值");
//	scanf("%d%d",&n,&x);
//	printf("结果为:%6.2f\n",p(n,x));
//	return 0;
//}
//
//一维数组中保存有1个从小到大有序的整数数列，编写函数，利用折半查找法查找整数m在数组中的位置。若找到，则返回其下标值，繁殖，则显示没找到。
//折半查找法的基本思想时:每次查找前先确定数组中待查元素的下标范围low-high(low<high)，然后把m与中间位置(mid=(low+high)/2)元素的值进行比较。如果m的值大于中间位置元素的值，则下一次的查找范围落在mid+1-high之间，反之，下一次的查找范围落在low-mid-1之间，直到low>high,查找结束。
#define N 10
int fun(int a[], int m)
{
	int low = 0, high = N - 1, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (m < a[mid])
			high = mid - 1;
		else if (m > a[mid])
			low = mid + 1;
		else
			return (mid);

	}
	return (-1);
}
int main()
{
	int i, a[N], k, m;
	printf("请输入%d个数:",N);
	for (i = 0; i < N; i++)
		scanf("%d",&a[i]);
	printf("请输入要查找的数:");
	scanf("%d",&m);
	k = fun(a, m);
	if (k >= 0)
	{
		printf("%d的下标序号为:%d\n", m, k);
	}
	else
	{
		printf("没找到!\n");
	}
}