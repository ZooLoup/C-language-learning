#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//编程输出方程x^2+y^2=1989的所有正整数解。
//int main()
//{
//	int x, y;
//	for (x = 0; x < 50; x++)
//	{
//		for (y = 0; y < 50; y++)
//		{
//			if (x * x + y * y == 1989)
//			{
//				printf("%d*%d+%d*%d=%d \n", x, x, y, y, 1989);
//			}
//		}
//	}
//	return 0;
//}

//编写程序，从键盘输入一个正整数n，计算2-n的所有素数之和
int main()
{
	int i;
	int j;
	int k;
	int n;
	int sum = 0;
	printf("请输入一个整数n:");
	scanf("%d",&n);
	for (j = 2; j <= n; j++)
	{
		k = sqrt((double)j);
		for (i = 2; i <= k; i++)
			if (j % i == 0)
				break;
		if (i > k)
			sum = sum + j;
	}
	printf("所有的素数之和为:%d\n", sum);
	return 0;
}