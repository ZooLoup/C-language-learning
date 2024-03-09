#define _CRT_SECURE_NO_WARNINGS 1
//1.1
//#include <stdio.h>
//int main()
//{
//	double sum = 0, item = 1, x, y = 1;
//	scanf("%lf",&x);
//	while (item >= 1e-6)
//	{
//		sum += item;
//		x *= x;
//		y = y * (y + 1);
//		item = x / y;
//	}
//	printf("%lf",sum);
//	return 0;
//}

//#include <stdio.h>
//int fun(int n)
//{
//	int i;
//	int sum = 0;
//	if (n == 2)
//		return 1;
//	for (i = 2; i <= n / 2; i++)
//	{
//		if (n % i == 0)
//			sum += i;
//	}
//	if (sum + 1 == n)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 2;
//	for (i = 2; i <= 100; i++)
//	{
//		if (fun(i))
//			printf("%d ",i);
//	}
//	return 0;
//}

//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char ch[80], * p, * q;
//	int len=0;
//	gets_s(ch);
//	p = q = ch;
//	while (*q)
//	{
//		q++;
//		len++;
//	}
//	/*while (p < ch + len)
//	{
//		*q = *p;
//		q++;
//		p++;
//	}*/
//	*q = '\0';
//	puts(ch);
//}

//2.1
//#include <stdio.h>
//int fun(int m, int n)
//{
//	int x = 0;
//	int y = 0;
//	if (m < n)
//	{
//		x = m;
//		m = n;
//		n = x;
//	}
//	while (m % n)
//	{
//		y = m % n;
//		m = n;
//		n = y;
//	}
//	return n;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d",&a,&b);
//	printf("%d",fun(a,b));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float x = 0;
//	float sum = 0;
//	int i = 0;
//	for (i = 1; i <= 1000; i++)
//	{
//		scanf("%f",&x);
//		sum += x;
//		if (sum > 20000)
//			break;
//	}
//	printf("%d人共捐款%0.1f",i,sum);
//	return 0;
//}

//#include <stdio.h>
//#define N 3
//typedef struct
//{
//	char name[10];
//	int s1;
//	int s2;
//	int s3;
//	int sum;
//}Stu;
//int main()
//{
//	Stu sts[N],t;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <N; i++)
//	{
//		scanf("%s %d %d %d",sts[i].name,&sts[i].s1,&sts[i].s2,&sts[i].s3);
//		sts[i].sum = sts[i].s1 + sts[i].s2 + sts[i].s3;
//	}
//	for (i = 0; i < N-1; i++)
//	{
//		for (j = 0; j < N - i - 1; j++)
//		{
//			if (sts[j].sum < sts[j + 1].sum)
//			{
//				t = sts[j];
//				sts[j] = sts[j + 1];
//				sts[j + 1]= t;
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d----%s----%d", i + 1, sts[i].name, sts[i].sum);
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#define N 3
//typedef struct { char name[10]; int c1, c2, c3, sum; }Stu;
//void main()
//{
//	Stu sts[N], t;
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%s%d%d%d", sts[i].name, &sts[i].c1, &sts[i].c2, &sts[i].c3);
//		sts[i].sum = sts[i].c1 + sts[i].c2 + sts[i].c3;
//	}
//	for (i = 1; i < N; i++)
//	{
//		for (j = 0; j < N - i; j++)
//		{
//			if (sts[j].sum < sts[j + 1].sum)
//			{
//				t = sts[j]; sts[j] = sts[j + 1]; sts[j + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//		printf("%d——%s——%d\n", i + 1, sts[i].name, sts[i].sum);
//}

//3.1
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int a, x;
//	int sum = 0;
//	int item = 1;
//	scanf("%d %d",&a,&x);
//	for (i = 0; i < x; i++)
//	{
//		item *= a;
//		sum += item;
//	}
//	printf("%d",sum);
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//void fun(char* src, char* str)
//{
//	assert(src);
//	while (*src)
//	{
//		if (*src >= '0' && *src <= '9')
//		{
//			*str = *src;
//			str++;
//		}
//		src++;
//	}
//	*str = '\0';
//}
//int main()
//{
//	char ch1[100], ch2[20];
//	scanf("%s",ch1);
//	fun(ch1, ch2);
//	puts(ch2);
//	return 0;
//}

//#include <stdio.h>
//#define N 2
//struct student {
//	char name[10];
//	int c1;
//	int c2;
//	int c3;
//	int c4;
//	float agv;
//	int count;
//};
//int main()
//{
//	struct student s[N];
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		s[i].count = 0;
//		scanf("%s %d %d %d %d",s[i].name,&s[i].c1,&s[i].c2,&s[i].c3,&s[i].c4);
//		s[i].agv = (s[i].c1 + s[i].c2 + s[i].c3 + s[i].c4)*1.0/4;
//		if (s[i].c1 < 60)
//			s[i].count++;
//		if (s[i].c2 < 60)
//			s[i].count++;
//		if (s[i].c3 < 60)
//			s[i].count++;
//		if (s[i].c4 < 60)
//			s[i].count++;
//	}
//	for (i = 0; i < N; i++)
//		printf("%s平均分%.2f，不及格科目数:%d", s[i].name, s[i].agv, s[i].count);
//	return 0;
//}


//#include <stdio.h>
//struct student {
//	char name[10];
//	int n, c1, c2, c3, c4;
//	float avg;
//};
//void main()
//{
//	int i;
//	struct student s[2];
//	for (i = 0; i < 2; i++)
//	{
//		scanf("%s%d%d%d%d", s[i].name, &s[i].c1, &s[i].c2, &s[i].c3, &s[i].c4);
//		s[i].n = 0;
//		if (s[i].c1 < 60) s[i].n++;
//		if (s[i].c2 < 60) s[i].n++;
//		if (s[i].c3 < 60) s[i].n++;
//		if (s[i].c4 < 60) s[i].n++;
//		s[i].avg = (s[i].c1 + s[i].c2 + s[i].c3 + s[i].c4) * 1.0 / 4;
//	}
//	for (i = 0; i < 2; i++)
//		printf("%s 平均分：%.2f,不及格门数：%d\n", s[i].name, s[i].avg, s[i].n);
//}