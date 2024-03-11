#define _CRT_SECURE_NO_WARNINGS 1
//10.1
//#include <stdio.h>
//int isprime(int x)
//{
//	int i;
//	if (x == 2)
//		return 1;
//	for (i = 2; i < x; i++)
//	{
//		if (x % 2 == 0)
//			return 0;
//		return 1;
//	}
//}
//int main()
//{
//	int sum = 0;
//	int i;
//	for (i = 100; i <= 999; i++)
//	{
//		if (isprime(i) && (i % 10 == 3))
//			sum += i;
//		printf("%d ",i);
//	}
//	printf("和:%d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, n, i, item ,sum = 0;
//	scanf("%d %d",&a,&n);
//	item = a;
//	for (i = 0; i < n; i++)
//	{
//		sum += item;
//		item = item * 10 + a;
//	}
//	printf("%d",sum);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#define N 2
//int main()
//{
//	char ch[N][20];
//	int i, len;
//	for (i = 0; i < N; i++)
//		scanf("%s",ch[i]);
//	len = strlen(ch[0]);
//	for (i = 1; i < N; i++)
//	{
//		if (len > strlen(ch[i]))
//			len = strlen(ch[i]);
//	}
//	for (i = 0; i < N; i++)
//	{
//		if (strlen(ch[i]) == len)
//			printf("%s",ch[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#define N 10
//int main()
//{
//	char ch;
//	int i=0;
//	int zimu = 0, shuzi = 0, space = 0, other = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
//			zimu++;
//		else if (ch >= '0' && ch <= '9')
//			shuzi++;
//		else if (ch == ' ')
//			space++;
//		else
//			other++;
//	}
//	printf("字母：%d\n数字：%d\n空格：%d\n其他:%d\n",zimu,shuzi,space,other);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float sum = 0;
//	float item;
//	float fz = 2;
//	float fm = 1;
//	int i = 1;
//	float m;
//	for (i = 1; i <= 20; i++)
//	{
//		item = fz / fm;
//		sum += item;
//		m = fm;
//		fm = fz;
//		fz =fm+m;
//	}
//	printf("%f",sum);
//	return 0;
//}


//#include <stdio.h>
//void main()
//{
//	float fz = 2, fm = 1, t, sum = 0, m;
//	int i;
//	for (i = 1; i <= 20; i++)
//	{
//		t = fz / fm;
//		sum += t;
//		m = fz;
//		fz = fz + fm;
//		fm = m;
//	}
//	printf("%f", sum);
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
//	float max, min, sum, score[6];
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		sum = 0;
//		scanf("%s ",ds[i].name);
//		for (j = 0; j < 6; j++)
//		{
//			scanf("%f ",&score[j]);
//			sum += score[j];
//		}
//		max = min = score[0];
//		for (j = 1; j < 6; j++)
//		{
//			if (max < score[j])
//				max = score[j];
//			if (min > score[j])
//				min = score[j];
//		}
//		ds[i].result = sum - max - min;
//	}
//	for (i = 0; i < N; i++)
//		printf("%s总分:%.1f",ds[i].name,ds[i].result);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float limit, speed;
//	scanf("%f %f",&limit,&speed);
//	if (speed < limit * (1 + 1.0))
//		printf("正常行驶");
//	else if (speed < (limit * (1 + 0.5)))
//		printf("Exceed %.0f%%,Ticket 200", (speed - limit) / limit * 100);
//	else
//		printf("Exceed %.0f%%,License Revoked", (speed - limit) / limit * 100);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[10], i, j, t, k;
//	for (i = 0; i < 10; i++)
//		scanf("%d",&a[i]);
//	for (i = 0; i < 10; i++)
//	{
//		k = i;
//		for(j=i+1;j<10;j++)
//			if (a[k] > a[j])
//			{
//				k = j;
//			}
//		if (k != i)
//		{
//			t = a[k];
//			a[k] = a[i];
//			a[i] = k;
//		}
//	}
//	for (i = 0; i < 10; i++)
//		printf("%d ",a[i]);
//	return 0;
//}

#include <stdio.h>
int main()
{
	char ch;
	int count = 0;
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
			count++;
	}
	printf("%d",count);
	return 0;
}