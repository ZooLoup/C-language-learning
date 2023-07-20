#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 3 == 0 && a % 5 == 0)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//int main()
//{
//	float a, b, c, p, s;
//	printf("请输入三角形的三个边长:");
//	scanf("%f%f%f", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		p = (a + b + c)/2;
//		s = sqrt(p * (p - a) * (p - b) * (p - c));
//		printf("三角形的面积是%.2f\n", s);
//	}
//	else
//	{
//		printf("输入的边长错误，请重新输入");
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;
//	scanf("%d",&x);
//	if (x > -5 && x < 0)
//	{
//		y = x - 1;
//	}
//	else if (x == 0)
//	{
//		y = x;
//	}
//	else if (x > 0 && x < 8)
//	{
//		y = x + 1;
//	}
//	else
//	{
//		y = 10;
//	}
//	printf("y=%d", y);
//	return 0;
//}

//int main()
//{
//	char x=0;
//	printf("请输入一个字符:");
//	scanf("%c", &x);
//	if (x >= 'A' && x <= 'Z')
//		printf("%c", x + 32);
//	else if (x >= 'a' && x <= 'z')
//		printf("%c", x - 32);
//	else
//		printf("%c", x);
//	
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	int x;
//	printf("请输入一个三位数:\n");
//	scanf("%d", &x);
//	if (x > 100 && x < 1000)
//	{
//		a = x / 100;
//		b = x % 100 / 10;
//		c = x % 10;
//		if (x == a * a * a + b * b * b + c * c * c)
//		{
//			printf("这个数是水仙花数");
//		}
//		else
//		{
//			printf("这个数不是水仙花数");
//		}
//	}
//	else
//	{
//		printf("输入的数据无效，请重新输入");
//	}
//}

//int main()
//{
//	int a, b, c, o;
//	double x1, x2;
//	printf("请输入方程的三个系数:");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a != 0)
//	{
//		o = b * b - 4 * a * c;
//		if (o > 0)
//		{
//			x1 = -b + sqrt(o) / 2 * a;
//			x2 = b + sqrt(o) / 2 * a;
//			printf("方程的两个解是:x1=%.2f\n x2=%.2f", x1, x2);
//		}
//		else if (o = 0)
//		{
//			x1 = x2 = -b / 2 * a;
//			printf("方程的两个解是:x1=x2=%.2f", x1);
//		}
//		else
//		{
//			printf("该方程无解");
//		}
//	}
//	else
//	{
//		printf("输入的第一个系数不合法，请重新输入");
//	}
//	return 0;
//}

int main()
{
	int year = 0;
	double money, rate, total;
	printf("请输存款的本金和期限");
	scanf("%lf%d", &money, &year);
	switch (year)
	{
	case 1:
		rate = 0.00215;
		break;
	case 2:
		rate = 0.0023;
		break;
	case 3:
		rate = 0.00245;
		break;
	case 5:
		rate = 0.00275;
		break;
	case 8:
		rate = 0.0032;
		break;
	default:
		printf("输入的年限不正确");
		return 0;
	}
	total = money+money * rate * year * 12;
	printf("金额=%.2f", total);
	return 0;
}