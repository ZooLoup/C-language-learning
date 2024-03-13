#define _CRT_SECURE_NO_WARNINGS 1
//13.1
//#include <stdio.h>
//int main()
//{
//	float x = 50;
//	float sum = 0;
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		sum += 2.0*x;
//		x /= 2;
//	}
//	sum += 100;
//	printf("共经过%.2f米\n 第十次反弹%.2f米\n",sum,x);
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//	float h = 100, sum = h, t;
//	int n;
//	for (n = 1; n <= 9; n++)
//	{
//		h = h / 2;
//		t = h * 2;
//		sum += t;
//	}
//	printf("共经过：%.2f, 第 10 次反弹高度：%.2f\n", sum, h / 2);
//}

//#include <stdio.h>
//int main()
//{
//	int i, a[10], max, min, sum;
//    sum = 0;
//	max = 0;
//	min = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&a[i]);
//		sum += a[i];
//		max = a[0];
//		min = a[0];
//		if (max < a[i])
//			max = a[i];
//		if (min > a[i])
//			min = a[i];
//	}
//	printf("%.1f",1.0*(sum-min-max)/8);
//	return 0;
//}

//#include <stdio.h>
//#define N 50
//typedef struct{
//	char name[10];
//	char num[10];
//	int s1;
//	int s2;
//	int s3;
//	int sum;
//}student;
//int main()
//{
//	student stu[N];
//	int i;
//	int max = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%s %s %d %d %d",stu[i].name,stu[i].num, &stu[i].s1, &stu[i].s2, &stu[i].s3);
//		stu[i].sum = stu[i].s1 + stu[i].s2 + stu[i].s3;
//		if (max < stu[i].sum)
//			max = stu[i].sum;
//	}
//	printf("总分最高为%d,分别为:\n",max);
//	for (i = 0; i < N; i++)
//	{
//		if (max == stu[i].sum)
//			printf("%s %s %d %d %d\n",stu[i].name,stu[i].num,stu[i].s1,stu[i].s2,stu[i].s3);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	while (scanf("%d", &x))
//	{
//		if (x < 1 || x>7)
//		{
//			printf("输入有误，请重新输入\n");
//			continue;
//		}
//		switch (x)
//		{
//		case 1:
//			printf("周一");
//			break;
//		case 2:
//			printf("周二");
//			break;
//		case 3:
//			printf("周三");
//			break;
//		case 4:
//			printf("周四");
//			break;
//		case 5:
//			printf("周五");
//			break;
//		case 6:
//			printf("周六");
//			break;
//		case 7:
//			printf("周日");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[20] = { 1,1 };
//	int i = 0;
//	for (i = 2; i < 20; i++)
//		arr[i] = arr[i - 1] + arr[i - 2];
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ",arr[i]);
//		if (i % 4 == 0&i!=0)
//			printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int Fibonacci(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		printf("%d ",Fibonacci(i));
//		if (i % 5 == 0)
//			printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#define N 20
//typedef struct {
//	char name[10];
//	int s1;
//	int s2;
//	int s3;
//	int s4;
//	int n;
//	float agv;
//}student;
//int main()
//{
//	student s[N];
//	int i;
//	int sum = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%s %d %d %d %d",s[i].name,&s[i].s1,&s[i].s2, &s[i].s3, &s[i].s4);
//		sum = s[i].s1 + s[i].s2 + s[i].s3 + s[i].s4;
//		s[i].agv = sum * 1.0 / 4;
//		if (s[i].s1 < 60)
//			s[i].n++;
//		if (s[i].s2 < 60)
//			s[i].n++;
//		if (s[i].s3 < 60)
//			s[i].n++;
//		if (s[i].s4 < 60)
//			s[i].n++;
//	}
//	for (i = 0; i < N; i++)
//		printf("%s平均分:%.2f,不及格门数:%d",s[i].name,s[i].agv,s[i].n);
//	return 0;
//}

//#include <stdio.h>
//#define N 100
//int main()
//{
//	char a[N];
//	int b[10] = {0};
//	int i;
//	int j = 0;
//	gets(a);
//	for (i = 0; i < N; i++)
//	{
//		if (a[i] >= '0' && a[i] <= '9')
//			b[a[i] - '0']++;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (b[i])
//			printf("%d的个数为:%d\n",i+1,b[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int strcmp(char* p1, char* p2)
//{
//	while (*p1 && *p2)
//	{
//		if (*p1 == *p2)
//		{
//
//		}
//		else if (*p1 > *p2)
//		{
//			return *p1 - *p2;
//			break;
//		}
//		else
//		{
//			return *p1 - *p2;
//			break;
//		}
//		p1++;
//		p2++;
//	}
//	return 0;
//}
//int main()
//{
//	char a[10];
//	char b[10];
//	gets(a);
//	gets(b);
//	printf("%d",strcmp(a,b));
//	return 0;
//}

//int strcmp(char* p1, char* p2)
//{
//	while (*p1 == *p2 && *p1)
//	{
//		p1++; p2++;
//	}
//	return *p1 - *p2;
//}

//#include <stdio.h>
//int isprime(int n)
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
//int main()
//{
//	int x = 0;
//	int i = 0;
//	scanf("%d",&x);
//	for (i = 2; i <= x / 2; i++)
//	{
//		if (x % i == 0 && isprime(i))
//			printf("%d ",i);
//	}
//	return 0;
//}