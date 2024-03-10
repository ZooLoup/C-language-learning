#define _CRT_SECURE_NO_WARNINGS 1
//7.1
//#include <stdio.h>
//int main()
//{
//	int i, j, n;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 0; j < n - i; j++)
//			printf(" ");
//		for (j = 1; j <= i; j++)
//			printf("%d",j);
//		for (j = i - 1; j >= 1; j--)
//			printf("%d",j);
//		printf("\n");
//	}
//	return 0;
//}

//char* find(char* p)
//{
//	while (*p)
//	{
//		if (*p >= 'A' && *p <= 'Z')
//		{
//			return p;
//			break;
//		}
//		p++;
//	}
//
//}
//#include <stdio.h>
//int main()
//{
//	char ch[100], * p = ch;
//	gets(ch);
//	p = find(p);
//	if (p == NULL)
//		puts("无大写字母");
//	else
//		puts(p);
//	return 0;
//}

//#include <string.h>
//#include <stdio.h>
//#define N 100
//typedef struct {
//	char name[20];
//	int num;
//	float life;
//}Country;
//int main()
//{
//	Country c[N],t;
//	int i,j;
//	for (i = 0; i < N; i++)
//		scanf("%s%d%f",c[i].name,&c[i].num,&c[i].life);
//	for (i = 0; i < N - 1; i++)
//	{
//		for (j = 0; j < N - 1 - i; j++)
//		{
//			if (strcmp(c[j].name, c[j + 1].name) < 0)
//			{
//				t = c[j];
//				c[j] = c[j + 1];
//				c[j + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//		printf("%s 国人口%d, 平均寿命: %.2f\n", c[i].name,c[i].num,c[i].life);
//		/*printf("%s 国人口%d，平均寿命：%.2f\n", c[i].name, c[i].num, c[i].life);*/
//
//	return 0;
//}


//#include<stdio.h>
//#include <string.h>
//#define N 100
//typedef struct {
//	char name[20]; int num; float life;
//}Country;
//void main()
//{
//	Country cts[5], t;
//	int i, j;
//	for (i = 0; i < N; i++)
//		scanf("%s%d%f", cts[i].name, &cts[i].num, &cts[i].life);
//	for (i = 1; i < N; i++)
//		for (j = 0; j < N - i; j++)
//		{
//			if (strcmp(cts[j].name, cts[j + 1].name) < 0)
//			{
//				t = cts[j]; cts[j] = cts[j + 1]; cts[j + 1] = t;
//			}
//		}
//	for (i = 0; i < N; i++)
//		printf("%s 国人口%d，平均寿命：%.2f\n", cts[i].name, cts[i].num, cts[i].life);
//}

//int prime(int n)
//{
//	int i;
//	if (n == 2)
//		return 1;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	while (n++)
//	{
//		if (prime(n))
//		{
//			break;
//		}
//	}
//	printf("%d", n);
//	return 0;
//}

//#include <stdio.h>
//int prime(int n)
//{
//	int i;
//	for (i = 2; i < n; i++)
//		if (n % i == 0) return 0;
//	return 1;
//}
//void main()
//{
//	int x;
//	scanf("%d", &x);
//	while (1)
//	{
//		x++;
//		if (prime(x))
//		{
//			printf("%d\n", x);
//			break;;
//		}
//	}
//}

//#include <stdio.h>
//#include <string.h>
//#define N 10
//int main()
//{
//	char ch[N][20], * p;
//	int i;
//	p = ch[0];
//	for (i = 0; i < N; i++)
//		gets(ch[i]);
//	for (i = 1; i < N; i++)
//	{
//		if (strcmp(ch[i], p) < 0)
//			p = ch[i];
//	}
//	printf("最小的字符串是%s",ch[i]);
//	return 0;
//}

//#include <stdio.h>
//#define N 10
//int main()
//{
//	int a[N] = { 1,3,7,9 };
//	int n = 4;
//	int x, i, j;
//	printf("请输入一个数：");
//	scanf("%d",&x);
//	for (i = 0; i < n; i++)
//	{
//		if (x > a[i])
//			break;
//	}
//	for (j = n; j > i; j--)
//		a[j] = a[j - 1];
//	a[i] = x;
//	n++;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x;
//	scanf("%d",&x);
//	if (x % 5 ==1||x%5==2||x%5==3)
//		printf("打鱼");
//	else
//		printf("晒网");
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//struct stu {
//	char name[10];
//	int a;
//	int b;
//	int c;
//};
//void input(struct stu* s, int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		scanf("%s %d %d %d",s[i].name,&s[i].a,&s[i].b,&s[i].c);
//}
//void sort(struct stu* s, int n)
//{
//	int i,j;
//	struct stu t;
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (strcmp(s[i].name, s[i + 1].name) > 0)
//			{
//				t=s[j];
//				s[j] = s[j+1];
//				s[j + 1] = t;
//			}
//		}
//	}
//}
//int maxS(struct stu* s, int n)
//{
//	int t = 0;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if ((s[t].a+s[t].b+s[t].c) < (s[i].a + s[i].b + s[i].c))
//		{
//			t = i;
//		}
//	}
//	return t;
//}
//int main()
//{
//	struct stu s[10];
//	int pos;
//	input(s, 10);
//	sort(s, 10);
//	pos = maxS(s, 10);
//	printf("最高分是%s\n",s[pos].name);
//	return 0;
//}

#include <stdio.h>
void input(int* score, int n)
{
	int i;
	for (i = 0; i < n; i++)
		scanf("%d",&score[i]);
}
int summ(int* score, int n)
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < n; i++)
		sum += score[i];
	return sum;
}
int smax(int* score, int n)
{
	int i;
	int max = score[0];
	for (i = 1; i < n; i++)
	{
		if (max < score[i])
			max = score[i];
	}
	return max;
}
int smin(int* score, int n)
{
	int i;
	int min = score[0];
	for (i = 1; i < n; i++)
	{
		if (min > score[i])
			min = score[i];
	}
	return min;
}
int main()
{
	int score[10];
	int max = 0;
	int min = 0;
	int sum = 0;
	float aver;
	input(score, 10);
	sum = ssum(score, 10);
	max = smax(score, 10);
	min = smin(score, 10);
	aver = (sum - max - min) * 1.0 / (10 - 2);
	printf("%f\n",aver);
	return 0;
}