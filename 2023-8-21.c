#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//采用指针变量作为形参，编写一个实现两个整数交换的函数。在主函数中输入3个整数，调用数据交换函数将他们按从大到小的顺序排序后输出。
//int main()
//{
//	int a, b, c;
//	void swap(int* px, int* py);
//	printf("请输入三个整数:");
//	scanf("%d%d%d",&a,&b,&c);
//	if (a < b)
//		swap(&a, &b);
//	if (a < c)
//		swap(&a, &c);
//	if (b < c)
//		swap(&b, &c);
//	printf("三个整数从大到小的顺序是:%d,%d,%d",a,b,c);
//	return 0;
//}
//void swap(int* px, int* py)
//{
//	int temp;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//}

//在main()函数中输入10个整数到数组中，调用第一题的数据交换函数，将数组中最大的数与最后一个数交换，最小数与第一个数交换。
int main()
{
	int a[10], i;
	int* pmax, * pmin;
	void swap(int* px, int* py);
	printf("请输入10个整数:");
	for (i = 0; i < 10; i++)
		scanf("%d",a+i);
	pmax = a;
	pmin = a;
	for (i = 1; i < 10; i++)
	{
		if (*pmax < a[i])
			pmax = &a[i];
		if (*pmin > a[i])
			pmin = &a[i];
	}
	swap(pmax, &a[9]);
	swap(pmin, &a[0]);
	printf("交换后的10个整数依次是:\n");
	for (i = 0; i < 10; i++)
		printf("%d\t",a[i]);
	printf("\n");
	return 0;
}
void swap(int* px, int* py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}