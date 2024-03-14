#define _CRT_SECURE_NO_WARNINGS 1
//1.1
//#include <stdio.h>
//#define N 200
//typedef struct {
//	char name[20];
//	char author[10];
//	int price;
//}Book;
//int main()
//{
//	Book b[N], t;
//	int i,j;
//	int sum = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%s %s %d", b[i].name, b[i].author, &b[i].price);
//		sum += b[i].price;
//	}
//	for (i = 0; i < N - 1; i++)
//	{
//		for (j = 0; j < N - i - 1; j++)
//		{
//			if (b[j + 1].price > b[j].price)
//			{
//				t = b[j + 1];
//				b[j + 1] = b[j];
//				b[j] = t;
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//		scanf("%d-%s书 -%s 作者-%s 价格-%d\n", i + 1, b[i].name, b[i].author, b[i].price);
//	printf("总价格:%d",sum);
//	return 0;
//}

//#include <stdio.h>
//int fun(int x, int y)
//{
//	int sum = 1;
//	int i;
//	for (i = 0; i < y; i++)
//		sum *= x;
//	return sum;
//}
//int main()
//{
//	int a, n;
//	scanf("%d %d",&a,&n);
//	printf("%d的%d次方为%d",a,n,fun(a,n));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	int i, j;
//	scanf("%d",&x);
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= x - i; j++)
//			printf(" ");
//		for (j = 1; j <= i; j++)
//			printf("%d",j);
//		for (j = i-1; j >= 1; j--)
//			printf("%d",j);
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, a[10], max, min, sum;
//	sum = 0;
//	max = 0;
//	min = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//		sum += a[i];
//		max = a[0];
//		min = a[0];
//		if (max < a[i])
//			max = a[i];
//		if (min > a[i])
//			min = a[i];
//	}
//	sum = sum - min - max;
//	printf("%d",sum/8);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x=0;
//	int y;
//	int n = 0;
//	scanf("%d",&x);
//	y = x;
//	while (x)
//	{
//		x /= 10;
//		n++;
//	}
//	printf("%d是%d位数",y,n);
//	return 0;
//}

//#include <stdio.h>
//#define N 30
//typedef struct {
//	char name[10];
//	int c1;
//	int c2;
//}Student;
//int main()
//{
//	Student stu [N];
//	int max1 = 0;
//	int max2 = 0;
//	int x = 0;
//	int y = 0;
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%s %d %d",stu[i].name,&stu[i].c1,&stu[i].c1);
//		max1 = stu[0].c1;
//		max2 = stu[0].c2;
//		if (max1 < stu[i].c1)
//			max1 = stu[i].c1;
//		if (max2 < stu[i].c2)
//			max2 = stu[i].c2;
//	}
//	printf("课程c1最高分%d,分别是:",max1);
//	for (i = 0; i < N; i++)
//	{
//		if (max1 == stu[i].c1)
//			printf("%s",stu[i].name);
//	}
//	printf("课程c2最高分%d,分别是:",max2);
//	for (i = 0; i < N; i++)
//	{
//		if (max2 == stu[i].c2)
//			printf("%s",stu[i].name);
//	}
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	int a[10], i, j, t, k;
//	for (i = 0; i < 10; i++)
//		scanf("%d",&a[i]);
//	for (i = 0; i < 10; i++)
//	{
//		k = i;
//		for (j = i + 1; j < 10; i++)
//			if (a[j] < a[k])
//				k = j;
//		if (k != i)
//		{
//			t = a[k];
//			a[k] = a[i];
//			a[i] = t;
//		}
//	}
//	for (i = 0; i < 10; i++)
//		printf("%d",a[i]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch[100], * p1, * p2, c;
//	gets(ch);
//	p1 = p2 = ch;
//	while (*p1)
//		p1++;
//	p1--;
//	while (p2 < p1)
//	{
//		c = *p1;
//		*p1 = *p2;
//		*p2 = c;
//		p1--;
//		p2++;
//	}
//	puts(ch);
//	return 0;
//}

//#include <stdio.h>
//#define N 40
//typedef struct {
//	char name[10];
//	int num;
//}Emp;
//void input(Emp* a, int n)
//{
//	int i;
//	scanf("%s %d",a[i].name,&a[i].num);
//}
//int qmin(Emp* a, int n)
//{
//	int i;
//	int min = a[0].num;
//	for (i = 0; i < N; i++)
//	{
//		if (min > a[i].num)
//			min = a[i].num;
//	}
//	return min;
//}
//void output(Emp* a, int n, int min)
//{
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		if (min == a[i].num)
//			printf("%s ",a[i].name);
//	}
//}
//int main()
//{
//	Emp a[N];
//	int i, min;
//	input(a, N);
//	min = qmin(a, N);
//	output(a, N, min);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int digit = 0;
//	char c;
//	while ((c = getchar()) != ' ')
//	{
//		if (c >= '0' && c <= '9')
//			digit++;
//	}
//	printf("%d",digit);
//	return 0;
//}

//#include <stdio.h>
//#define N 6
//void input(int (*b)[N], int n)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			scanf("%d",&b[i][j]);
//}
//int min(int(*b)[N], int n)
//{
//	int i, j;
//	int min = b[0][0];
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (min > b[i][j])
//				min = b[i][j];
//		}
//	}
//	return min;
//}
//int main()
//{
//	int b[N][N];
//	input(b, N);
//	printf("最小值为%d",min(b,N));
//	return 0;
//}

#include <stdio.h>
#include <string.h>
#define N 100
typedef struct {
	char name[10];
	int num;
	float life;
}Country;
int main()
{
	Country s[N], t;
	int i, j;
	for (i = 0; i < N; i++)
		scanf("%s %d %f",s[i].name,&s[i].num,&s[i].life);
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - 1 - i; j++)
		{
			if (strcmp(s[j].name, s[j + 1].name) < 0)
			{
				t = s[j];
				s[j] = s[j + 1];
				s[j + 1] = t;
			}
		}
	}
	for (i = 0; i < N; i++)
		scanf("%s国人口%d,平均寿命:%.2f",s[i].name,&s[i].num,s[i].life);
	return 0;
}