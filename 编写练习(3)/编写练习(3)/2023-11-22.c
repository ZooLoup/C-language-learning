#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//编写程序，用选择法将从键盘上输入的10个整数按升序排序并输出，用空格分开。
//int main()
//{
//	int a[10], i, j, t, k;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		k = i;
//		for (j = i + 1; j < 10; j++)
//			if (a[k] > a[j])
//				k = j;
//		if (i != k)
//		{
//			t =a[i];
//			a[i] = a[k];
//			a[k] = t;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",a[i]);
//	}
//	return 0;
//}

//键盘输入一串字符序列，希望将字符串逆序存放并输出逆序串，如输入"abcd，输出"dcba"。补全程序。
//int main()
//{
//	char ch[100];
//	char* p1;
//	char* p2;
//	char c;
//	gets(ch);
//	p1 = p2 = ch;
//	while (*p2)
//		p2++;
//	p2--;
//	while (p1 < p2)
//	{
//		c = *p1;
//		*p1 = *p2;
//		*p2 = c;
//		p1++;
//		p2--;
//	}
//	puts(ch);
//	return;
//}

#define N 40
typedef struct
{
	char name[10];
	int num;
}Emp;
int main()
{
	Emp a[N];
	int i, min;
	input(a, N);//数据录入
	min = qmin(a, N);//求最差的销量
	output(a, N, min);
	return 0;
}
int input(Emp *a,int n)
{
	int i;
	for (i = 0; i < n; i++)
		scanf("%s%d",a[i].name,&a[i].num);
}
int qmin(Emp* a, int n)
{
	int min = a[0].num;
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i].num < min)
			min = a[i].num;
		return min;
	}
}
int output(Emp* a, int n, int min)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (min == a[i].num)
			printf("%s",a[i].name);
	}
}