#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//编写函数Min(x,y,z)，求三个整数中的最小值，并利用该函数求五个函数中的最小值。要求在主函数中输入五个整数，并输出结果。
int Min(int a, int b, int c)
{
	int min;
	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return min;
}
int main()
{
	int x, y, z, m, n, min1, min2;
	printf("请输入5个整数:");
	scanf("%d %d %d %d %d",&x,&y,&z,&m,&n);
	int Min(x, y, z);
	min1 = Min(x, y, z);
	min2 = Min(min1, m, n);
	printf("5个整数的最小值是:%d",min2);
	return 0;
}
