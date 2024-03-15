#define _CRT_SECURE_NO_WARNINGS 1
//5.1
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int i, j;
//	scanf("%d",&x);
//	for (i = 1; i <= x; i++)
//	{
//		for (j = i; j <= x - 1; j++)
//			printf(" ");
//		for (j = 1; j < i * 2; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch1[100], ch2[100], * p, * q;
//	int n, x;
//	scanf("%s",ch1);
//	scanf("%d %d",&n,&x);
//	p = ch1+n-1;
//	q = ch2;
//	while (x--)
//	{
//		*q = *p;
//		p++;
//		q++;
//	}
//	*q = '\0';
//	puts(ch2);
//	return 0;
//}

//#include <stdio.h>
//#define N 10
//typedef struct {
//	char name[10]; 
//	float result;
//}Diver;
//int main()
//{
//	Diver ds[10];
//	float max = 0;
//	float min = 0;
//	float sum = 0;
//	float score[6];
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%s ", ds[i].name);
//		{
//			for (j = 0; j < 6; j++)
//			{
//				scanf("%f", score[j]);
//				sum += score[j];
//			}
//		}
//		max = min = score[0];
//		for (j = 0; j < 6; j++)
//		{
//			if (max < score[j])
//				max = score[j];
//			if (min > score[j])
//				min = score[j];
//		}
//		ds[i].result = (sum - max - min) / 4;
//	}
//	for (i = 0; i < N; i++)
//		printf("%s总分:%.1f",ds[i].name,ds[i].result);
//	return 0;
//}

//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	float x1, y1, x2, y2, x3, y3;
//	float S = 0;
//	float c = 0;
//	float s = 0;
//	float dis1=0;
//	float dis2 = 0;
//	float dis3 = 0;
//	int i;
//	scanf("%d %d",&x1,&y1);
//	scanf("%d %d",&x2,&y2);
//	scanf("%d %d",&x3,&y3);
//	dis1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//	dis2 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
//	dis3 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
//	if ((dis1 + dis2) > dis3 && (dis1 + dis3) > dis2 && (dis2 + dis3) > dis1)
//	{
//		c = dis1 + dis2 + dis3;
//		s = c / 2;
//		S = sqrt(s * (s - dis1) * (s - dis2) * (s - dis3));
//		printf("三角形的周长是:%.1f\n三角形的面积是%.1f", c, S);
//	}
//	else
//		printf("不能构成三角形");
//	return 0;
//}

//#include <string.h>
//#include <stdio.h>
//#define N 10
//int main()
//{
//	char ch[N][30], * p;
//	int i=0;
//	for (i = 0; i < 10; i++)
//		scanf("%s",ch[i]);
//	p = ch[0];
//	while (*p)
//	{
//		if (strcmp(p, ch[i]) < 0)
//			p = ch[i];
//		i++;
//	}
//	puts(p);
//	return 0;
//}

//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	float fz = 1;
//	float fm = 1;
//	float n = 1;
//	float m = 3;
//	float item = 0;
//	float sum = 0;
//	fm = n * m;
//	item = fz / fm;
//	while (item >= 1e-4)
//	{
//		sum += item;
//		fz += 1;
//		n += 2;
//		m += 2;
//		fm = n * m;
//		item = fz / fm;
//	}
//	printf("%f",sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float i = 1, fz = i, fm=(2 * i - 1)* (2 * i + 1), t, sum = 0;
//	t = fz / fm;
//	while (t >= 1e-4)
//	{
//		sum += t;
//		i++;
//		fz = i, fm = (2 * i - 1) * (2 * i + 1);
//			t = fz / fm;
//	}
//	printf("%f",sum);
//}

//#include <stdio.h>
//int getDays(int year, int months)
//{
//	int days = 0;
//	switch (months)
//	{
//	case 1:
//		days = 31;
//		break;
//	case 2:
//		if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
//			days = 29;
//		else
//			days = 28;
//		break;
//	case 3:
//		days = 31;
//		break;
//	case 4:
//		days = 30;
//		break;
//	case 5:
//		days = 31;
//		break;
//	case 6:
//		days = 30;
//		break;
//	case 7:
//		days = 31;
//		break;
//	case 8:
//		days = 31;
//		break;
//	case 9:
//		days = 30;
//		break;
//	case 10:
//		days = 31;
//		break;
//	case 11:
//		days = 30;
//		break;
//	case 12:
//		days = 31;
//		break;
//	}
//	return days;
//}
//int main()
//{
//	int year = 0;
//	int months = 0;
//	scanf("%d %d",&year,&months);
//	printf("%d", getDays(year, months));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[10], i, k;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&a[i]);
//		k = a[0];
//		if (k < a[i])
//			k = a[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (k == a[i])
//			break;
//	}
//	printf("%d %d",k,i);
//	return 0;
//}
#define N 10
#include <stdio.h>
struct student {
	char name[10];
	int math;
	int eng;
	int cn;
};
void input(struct student* s, int n)
{
	int i;
	for (i = 0; i < n; i++)
		scanf("%s %d %d %d", s[i].name, &s[i].math, &s[i].eng, &s[i].cn);
}
int maxinfo(struct student* s, int n, struct student *temp)
{
	int i = 0;
	int max = 0;
	*temp = s[0];
	max = s[i].math + s[i].eng + s[i].cn;
	for (i = 1; i < 10; i++)
	{
		if (max < s[i].math + s[i].eng + s[i].cn)
		{
			max = s[i].math + s[i].eng + s[i].cn;
			*temp = s[i];
		}

	}
	return temp;
}
int main()
{
	struct student s[10], temp;
	input(s, N);
	maxinfo(s, N, &temp);
	printf("最高分:%s,总分:%d\n",temp.name,temp.math+temp.eng,temp.cn);
	return 0;
}