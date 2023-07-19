#define _CRT_SECURE_NO_WARNINGS 1
//1.从键盘输入3个整数到变量a,b和c中，将这个3个数由小到大进行排序，使a中存放最小数，c中存放最大数，然后输出。
//#include <stdio.h>
//int main()
//{
//	int a ;
//	int b ;
//	int c ;
//	int tmp ;
//	printf("请输入三个数:");
//	scanf("%d%d%d",&a,&b,&c);
//	if (a > b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a > c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b > c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d<=%d<=%d", a, b, c);
//}

//从键盘输入3个整数a,b,c的值，求一元二次方程ax^2+bx+c=0(a/=0)的根，计算结果保留两位小数。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int o;
//	double x1;
//	double x2;
//	printf("请输入三个整数作为方程的三个系数：");
//	scanf("%d%d%d",&a,&b,&c);
//	if (a == 0)
//		printf("输入的第一个系数无效，请重新输入");
//	if (a != 0)
//	{
//		o = b * b - 4 * a * c;
//		if (o > 0)
//		{
//			x1 = -b + sqrt(b * b - 4 * a * c);
//			x2 = -b - sqrt(b * b - 4 * a * c);
//			printf("方程的解为:x1=%.2lf,x2=%2.lf", x1, x2);
//		}
//		else if (o == 0)
//		{
//			x1 = x2 = -b / 2 * a;
//			printf("方程的解为:x1=x2=%.2lf", x1);
//		}
//		else
//		{
//			printf("方程无解");
//		}
//		return 0;
//	}
//}

//已知银行整存整取存款不同期限的月息利率如下：0.215%（期限一年）,0.230%(期限两年)，0.245%（期限三年）,0.275%(期限五年)，0.320%(期限八年)，编程从键盘输入存款的本届==本金和期限，计算到期时从银行得到的金额，计算结果保留两位小数，要求分别用分支if语句和switch语句编写，并且当输入的存款期限不是上述年限时能给出错误信息。
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	double money = 0;
//	double rate = 0;
//	double total = 0;
//	printf("请输入存款的本金和期限:");
//	scanf("%lf%d", &money, &year);
//	if (year == 1)
//	{
//		rate = 0.00215;
//	}
//	else if (year == 2)
//	{
//		rate = 0.00230;
//	}
//	else if (year == 3)
//	{
//		rate = 0.0245;
//	}
//	else if (year == 5)
//	{
//		rate = 0.00275;
//	}
//	else if (year == 8)
//	{
//		rate = 0.00320;
//	}
//	else
//	{
//		printf("请输入正确的年限");
//		return 0;
//	}
//	total = money * rate * year * 12;
//	printf("金额=%.2lf", total);
//	return 0;
//}