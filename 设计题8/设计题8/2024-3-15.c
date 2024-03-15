#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float a, b, c;
//	float detal = 0;
//	float x1;
//	float x2;
//	scanf("%f %f %f",&a,&b,&c);
//	detal = b * b - 4 * a * c;
//	if (detal < 0)
//		printf("无根");
//	else if (detal == 0)
//	{
//		x1 = x2 = (-b) / 2 * a;
//		printf("%.1f",x1);
//	}
//	else
//	{
//		x1 = (-b + sqrt(detal)) / 2 * a;
//		x2 = (-b - sqrt(detal)) / 2 * a;
//		printf("1.%.1f\n2.%.1f",x1,x2);
//	}
//	return 0;
//}

//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	float item = 1;
//	int flag = 1;
//	float fm = 1;
//	float sum = 0;
//	while (fabs(item) >= 1e-8)
//	{
//		item = 1 / fm;
//		item *= flag;
//		sum += item;
//		fm += 2;
//		flag = -flag;
//	}
//	printf("%.f",sum*4);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int mark = 1, fm = 1;
//	float item=1,sum = 1;
//	while (fabs(item) >= 1e-8)
//	{
//		mark = -mark;
//		fm += 2;
//		item = mark * 1.0 / fm;
//		sum += item;
//	}
//	printf("%f",sum*4);
//	return 0;
//}

//#define N 10
//#include <stdio.h>
//int fun(int* a, int* b, int n)
//{
//	int i;
//	int count = 0;
//	for (i = 0; i < N; i++)
//	{
//		if (a[i] == b[i])
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int a[N], b[N], i;
//	printf("等值的个数为%d",fun(a,b,N));
//	return 0;
//}
//

//#include <stdio.h>
//int fun(int x)
//{
//	int i;
//	if (x == 2)
//		return 1;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			return 0;
//		return 1;
//	}
//}
//int main()
//{
//	int sum = 0;
//	int i;
//	for (i = 2; i <= 100; i++)
//		if (fun(i))
//			sum += i;
//	printf("%d",sum);
//	return 0;
//}

//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	float sum = 0;
//	float item = 1;
//	float fm = 2;
//	float fz = 1;
//	int flag = 1;
//	item = fz * 1.0 / (fm * fm);
//	while (fabs(item) >= 1e-3)
//	{
//		sum += item;
//		fz += fm;
//		fm = fz + 1;
//		item = fz / (fm * fm);
//		flag = -flag;
//		item *= flag;
//	}
//	printf("%f",sum);
//	return 0;
//}

//#include <stdio.h>
//int fun(char* p)
//{
//	int sum = 0;
//	while (*p)
//	{
//		if (*p >= '0' && *p <= '9')
//		{
//			sum = sum * 10 + *p - '0';
//			//p++;
//		}
//		p++;
//	}
//	return sum;
//}
//int main()
//{
//	char ch[100];
//	int x=0;
//	gets(ch);
//	x = fun(ch);
//	printf("%d",x);
//	return 0;
//}

//#include <stdio.h>
//int fun(char* p)
//{
//	int y = 0;
//	while (*p)
//	{
//		if (*p >= '0' && *p <= '9')
//			y = y * 10 + *p - '0';
//		p++;
//	}
//	return y;
//}
//int main()
//{
//	char ch[100];
//	int x;
//	gets(ch);
//	x = fun(ch);
//	printf("%d",x);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float sum = 100;
//	float item = 50;
//	int i;
//	for (i = 1; i <= 9; i++)
//	{
//		sum += item*2;
//		item = item / 2;
//	}
//	printf("%f %f",sum,item);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double h = 100, sum = h, t;
//	int n;
//	for (n = 1; n <= 9; n++)
//	{
//		h = h / 2;
//		t = h * 2;
//		sum += t;
//	}
//	printf("%f %f",h/2,sum);
//	return 0;
//}

//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char ch[80], * p = ch;
//	gets(ch);
//	while (*p)
//	{
//		if (*p >= 'a' && *p <= 'z' || *p >= 'A' && *p <= 'Z')
//			*p = *p - 4;
//		if (*p < 'A' || *p>'Z' && *p < 'a')
//			*p = *p + 26;
//		p++;
//	}
//	puts(ch);
//	return 0;
//}

//#define N 4
//#include <stdio.h>
//int fun(int(*a)[N], int n)
//{
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < i; j++)
//			if (a[i][j] != a[j][i])
//				return 0;
//		return 1;
//	}
//}
//int main()
//{
//	int a[N][N], i, j;
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//			scanf("%d",&a[i][j]);
//	if (fun(a, N))
//		printf("对称");
//	else
//		printf("不对称");
//	return 0;
//}

//#include <math.h>
//#include <stdio.h>
//int fun(int n)
//{
//	int y = 0;
//	y = sqrt(n);
//	if (n == y * y)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int sum = 0;
//	int i;
//	for (i = 1; i <= 1000; i++)
//		if (fun(i)&&i%3==0)
//			sum += i;
//	printf("%d",sum);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int fun(int x)
//{
//	int y = sqrt(x * 1.0);
//	if (y * y == x)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int i, sum = 0;
//	for (i = 1; i <= 1000; i++)
//		if (fun(i) && i % 3 == 0)
//			sum += i;
//	printf("%d",sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[30], i, n = 0, sum = 0;
//	for (i = 0; i < 30; i++)
//	{
//		scanf("%d", &a[i]);
//		sum += a[i];
//	}
//	for (i = 0; i < 30; i++)
//	{
//		if (a[i] > sum / 30)
//			n++;
//	}
//	printf("%d",n);
//	return 0;
//}

//#include <stdio.h>
//int converse(char* ch)
//{
//	char* p = ch;
//	int n = 0;
//	while (*p)
//	{
//		if (*p >= 'A' && *p <= 'Z')
//		{
//			n++;
//			*p += 32;
//		}
//		else if (*p >= 'a' && *p <= 'z')
//		{
//			n++;
//			*p -= 32;
//		}
//		p++;
//	}
//	return n;
//}
//int main()
//{
//	char ch[80];
//	int n;
//	gets(ch);
//	n=converse(ch);
//	puts(ch);
//	printf("%d",n);
//	return 0;
//}

//#include <stdio.h>
//int fun(int x)
//{
//	if (x % 400 == 0 || x % 4 == 0 && x % 100 != 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1900; i <= 2024; i++)
//	{
//		if (fun(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (count % 5 == 0)
//			printf("\n");
//	}
//	return 0;
//}

//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	float num;
//	float item=1;
//	float i = 1;;
//	float sum = 0;
//	int flag = 1;
//	scanf("%f",&num);
//	float fz = num;
//	float fm = i;
//	sum = 1 - num;
//	while (fabs(item) >= 1e-6)
//	{
//		fz = fz * num;
//		fm = fm * (i + 1);
//		item = fz / fm;
//		item *= flag;
//		flag = -flag;
//		sum += item;
//	}
//	printf("%f",sum);
//	return 0;
//}
#include <stdio.h>
#include <math.h>
void main()
{
	int i = 1, x, mark = -1, jc = 1, fz = 1;
	scanf("%d",&x);
	float item = 1, sum = 1;
	while (fabs(item) >= 1e-6)
	{
		jc = jc * i;
		fz = fz * x;
		item = 1.0 * fz;
		sum += mark * item;
		i++;
		mark = -mark;
	}
	printf("%f",sum);
}

//#include <string.h>
//#include <stdio.h>
//void strappend(char* ch, char* ch1)
//{
//	char* p = ch;
//	char* q = ch1;
//	int n = strlen(ch1);
//	while (*p)
//		p++;
//	while (*q)
//	{
//		*p = *q;
//		p++;
//		q++;
//	}
//}
//void strasc(char* ch)
//{
//	int i, j;
//	int len = 0;
//	len = strlen(ch)-1;
//	char t;
//	for (i = 0; i < len - 1; i++)
//	{
//		for (j = 0; j < len - i - 1; j++)
//		{
//			if (ch[j]>ch[j+1])
//			{
//				t = ch[j];
//				ch[j] = ch[j + 1];
//				ch[j + 1] = t;
//			}
//		}
//	}
//}
//int main()
//{
//	char ch[100] = "good morning", ch1[40] = "HAHAHa";
//	strappend(ch, ch1);
//	strasc(ch);
//	puts(ch);
//	return 0;
//}