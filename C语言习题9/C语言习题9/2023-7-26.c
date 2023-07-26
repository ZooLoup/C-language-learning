#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//求一个整数的任意次方的最后3位数，即求a^b次方的最后三位数。要求a,b从键盘输入。
//int main()
//{
//	int i, a, b;
//	int m = 1;
//	printf("请输入a和b:");
//	scanf("%d%d",&a,&b);
//	for (i = 1; i <= b; i++)
//	{
//		m = m * a;
//		m = m % 1000;
//	}
//	printf("%d", m);
//	return 0;
//}

//编程实现:计算3到m之间所有素数的平方根之和
//只要m不被2-sqrtm的整数整除，它就是素数。需要用两重循环，外循环和内循环依次处理每个数，内循环判断该数是否位素数，如果是，则将其平方根相加。
#include <math.h>
int main()
{
	int n, k, i, m;
	double sum = 0.0;
	printf("请输入m:");
	scanf("%d", &m);
	for ("n=3;n<=m;n++")
	{
		k = sqrt((double)n);
		for (i = 2; i <= k; i++)
			if (n % i == 0)
				break;
		if (i > k)
			sum = sum + sqrt((double)n);
	}
	printf("sum=%lf\n", sum);
	return 0;
}