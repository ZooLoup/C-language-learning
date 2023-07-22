#define _CRT_SECURE_NO_WARNINGS 1
//编程实现从键盘输入k，求1^2+2^2+3^2+……+k^2
#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	scanf("%d",&k);
//	for (i = 1; i <= k; i++)
//	{
//		sum = sum + i * i;
//		printf("sum=%d\n", sum);
//	}
//	return 0;
//}

//编程输入k的值及k个整数，统计其中正数，零和负数的个数。
//int main()
//{
//	int k, a=0, b=0, c=0, i, z;
//	printf("请输入k的值:");
//	scanf("%d", &k);
//	for (i = 1; i <= k; i++)
//	{
//		printf("请输入第%d个数:",i);
//		scanf("%d", &z);
//		if (k > 0)
//			a++;
//		else if (k = 0)
//			b++;
//		else
//			c++;
//	}
//	printf("正数有%d个\n负数有%d个\n零有%d个\n",a,c,b);
//	return 0;
//}

//编程输出1-200所有能被三整除且个位数为6的整数。
//int main()
//{
//	int x = 0,i;
//	for (i = 1; i <= 200; i++)
//	{
//		if (i % 3 == 0 && i % 10 == 6)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//编程求1-1/2+1/3-1/4+……+1/99-1/100
//int main()
//{
//	int i = 0;
//	int sign = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + sign * 1 / i;
//		sign = -sign;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//编程求e=1+1/1!+1/2!+……+1/n!
//int main()
//{
//	int i = 0;
//	double j = 1.0;
//	double sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		j = j * i;
//		sum = sum + 1 / j;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	double m = 1.0;
//	double e = 1.0;
//	while (1 / m >= 1e-5)
//	{
//		m = m * i;
//		e = e + 1 / m;
//		i++;
//	}
//	printf("e=%lf", e);
//	return 0;
//}

//输入两个正整数m和n，编程求其最小公倍数.
//思路：最小公倍数肯定是m和n的整数倍，先设变量k=m,当k不能够被m和n整除时，就将k加1，直至能够被m和n整除为止，此时，k即为最小公倍数.
//int main()
//{
//	int m, n, k;
//	printf("输入两个正整数m和n:");
//	scanf("%d%d", &m, &n);
//	k = m;
//	while (k % n != 0 || k % m != 0)
//	{
//		k++;
//	}
//	printf("%d\n",k);
//	return 0;
//}

//思路2：最小公倍数肯定时m和n的整数倍，先使m>n,并设变量k=m,再将k每次增加m，当k能够被n整除时，k即为最小公倍数。该方法循环执行的次数最少，程序的效率最高。
//int main()
//{
//	int m, n, k,t;
//	printf("输入两个正整数m和n:");
//	scanf("%d%d", &m, &n);
//	if (m < n)
//	{
//		t = m;
//		m = n;
//		n = t;
//	}
//	k = m;
//	while (k % n != 0)
//	{
//		k += m;
//	}
//	printf("k=%d\n", k);
//	return 0;
//}

//从键盘输入若干个学生的成绩（学生人数未知），输入负数时表示输入结束，编程求所有学生的最高分。
int main()
{
	int i = 0;
	int score = 0;
	int max = 0;
	while (score >= 0)
	{
		printf("请输入学生成绩:",i+1);
		scanf("%d", &score);
		if (score > max)
		{
			score = max;
			i++;
		}
		printf("%d\n", score);
	}
	return 0;
}