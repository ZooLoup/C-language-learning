#define _CRT_SECURE_NO_WARNINGS 1
//4.1
//int fbnq(int n)
//{
//	int f1 = 1;
//	int f2 = 1;
//	int i = 0;
//	int f = 0;
//	if (n == 1 || n == 2)
//		return 1;
//	for (i = 3; i <= n; i++)
//	{
//		f = f1 + f2;
//		f1 = f2;
//		f2 = f;
//	}
//	return f;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		sum += fbnq(i);
//	}
//	printf("%d",sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, j, x, y, b[3][4],max=0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", b[i][j]);
//			if (max < b[i][j])
//			{
//				x = i;
//				y = j;
//			}
//		}
//	}
//	printf("%d",b[i][j]);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch[80], * p = ch;
//	gets(ch);
//	while (*p)
//	{
//		if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
//		{
//			*p = *p - 4;
//		}
//		if (*p < 'A' || *p>'Z' && *p < 'a')
//		{
//			*p = *p + 26 ;
//		}
//		p++;
//	}
//	puts(ch);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float road= 0.0;
//	int min = 0;
//	float sum = 0.0;
//	scanf("%f %d",&road,&min);
//	if (road < 3)
//		sum = 10;
//	else if (road > 3 && road < 10)
//		sum = 10 + (road - 3) * 2;
//	else
//		sum = 10 + 14 + (road - 10) * 3*1.0;
//	sum += (min / 5) * 2;
//	printf("%.0f",sum);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//float fun(float n)
//{
//	float fz = 1;
//	float fm = 1;
//	float item;
//	float m = 2;
//	int sign = 1;
//	float sum = 0.0;
//	fm = m * m;
//	item = fz / fm * fm * sign;
//	while (fabs(item) > n)
//	{
//		sum += item;
//		sign = -sign;
//		m += 2;
//		fz += 2;
//		fm = m * m;
//		item = fz / fm * sign;
//	}
//	return sum;
//}
//int main()
//{
//	float x = 0.0;
//	scanf("%f",&x);
//	printf("%f",fun(x));
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//float fun(float jd)
//{
//	float fz = 1, fm = 1, m = 2, sign = 1, t, sum = 0;
//	fm = m * m;
//	t = fz / fm * sign;
//	while (fabs(t) > jd)
//	{
//		sum += t;
//		m += 2;
//		sign = -sign;
//		fz += 2;
//		fm = m * m;
//		t = fz / fm * sign;
//	}
//	return sum;
//}
//int main()
//{
//	float x = 0;
//	scanf("%f",&x);
//	printf("%f",fun(x));
//	return 0;
//}
//#include <stdio.h>
//#define N 40
//typedef struct {
//	char name[10];
//	int num;
//}Emp;
//void input(Emp *a, int n)
//{
//	int i = 0;
//	for (i = 0; i < N; i++)
//		scanf("%s %d",a[i].name,&a[i].num);
//}
//int qmin(Emp* a, int n)
//{
//	int i = 0;
//	int min = a[0].num;
//	for (i = 0; i < N; i++)
//	{
//		if (a[i].num < min)
//			min = a[i].num;
//	}
//	return min;
//}
//void output(Emp* a, int n, int min)
//{
//	int i = 0;
//	printf("最差销量为%d,人员包括",min);
//	for (i = 0; i < N; i++)
//	{
//		if (min == a[i].num)
//			printf("%s",a[i].name);
//	}
//}
//int main()
//{
//	Emp a[N];
//	int i, min;
//	input(a,N);
//	min = qmin(a, N);
//	output(a, N, min);
//	return 0;
//}

//6.1
//#include <stdio.h>
//int main()
//{
//	int i, j, n;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d",j,i,j*i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#define R 2
//#define C 3
//int main()
//{
//	float b[R][C], max;
//	int i, j;
//	for (i = 0; i < R; i++)
//		for (j = 0; j < C; j++)
//			scanf("%f",&b[i][j]);
//	for (i = 0; i < R; i++)
//	{
//		 max = b[i][0];
//		for (j = 1; j < C; j++)
//		{
//			if (max < b[i][j])
//				max = b[i][j];
//		}
//		printf("第%d行最大值:%.1f\n",i+1,max);
//	}
//	return 0;
//}

//#include <stdio.h>
//#define R 2
//#define C 3
//int main()
//{
//	float b[R][C], max;
//	int i, j;
//	for (i = 0; i < R; i++)
//		for (j = 0; j < C; j++)
//			scanf("%f", &b[i][j]);
//	for (i = 0; i < R; i++)
//	{
//		max = b[i][0];
//		for (j = 1; j < C; j++)
//			if (max < b[i][j]) max = b[i][j];
//		printf("第%d 行最大值为：%.1f\n", i + 1, max);
//	}
//}

#include <stdio.h>
int main()
{
	char ch[100], * p1, * p2, c;
	gets(ch);
	p1 = p2 = ch;
	while (*p1)
		p1++;
	p1--;
	while (p2 < p1)
	{
		c = *p2;
		*p2 = *p1;
		*p1 = c;
		p1--;
		p2++;
	}
	puts(ch);
	return 0;
}