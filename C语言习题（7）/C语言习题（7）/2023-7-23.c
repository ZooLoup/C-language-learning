#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//����������x^2+y^2=1989�������������⡣
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

//��д���򣬴Ӽ�������һ��������n������2-n����������֮��
int main()
{
	int i;
	int j;
	int k;
	int n;
	int sum = 0;
	printf("������һ������n:");
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
	printf("���е�����֮��Ϊ:%d\n", sum);
	return 0;
}