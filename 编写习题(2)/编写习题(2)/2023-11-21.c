#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n;
//	int j = 0;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = n - i; j >= 1; j--)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d",j);
//		}
//		for (j = i - 1; j >= 1; j--)
//		{
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//�Ӽ���¼��10���ɼ���ȥ��һ����߷ֺ�һ����ͷ֣�����������ƽ��ֵ���������ȫ����
//int main()
//{
//	int i, max, min;
//	int sum = 0;
//	int a[10];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d ",&a[i]);
//		max = a[0];
//		if (a[i] > max)
//			max = a[i];
//		min = a[0];
//		if (a[i] < min)
//			min = a[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		sum += a[i];
//	}
//	printf("%d",(sum-min-max)/8);
//	return 0;
//}

//����һ����������������Ǽ�λ��
//int main()
//{
//	int x, n;
//	int count = 0;
//	scanf("%d",&x);
//	n = x;
//	while (x)
//	{
//		x = x / 10;
//		count++;
//	}
//	printf("%d��%dλ��",n,count);
//	return 0;
//}

#define N 30
typedef struct
{
	char name[N];
	int score1[N];
	int score2[N];
}Stu;
int main()
{
	int i, j;
	int m1 = 0;
	int m2 = 0;
	Stu s[N];
	int max1[N];
	int max2[N];
	for (i = 0; i < N; i++)
	{
		scanf("%s%d%d",s[i].name,s[i].score1,s[i].score2);
		if (s[i].score1 > m1)
		{
			m1 = s[i].score1;
			max1[i] = s[i].score1;
		}
		if (s[i].score2 > m2)
		{
			m2 = s[i].score2;
			max2[i] = s[i].score2;
		}
	}
	printf("�γ�c1��߷���%d,�ֱ���:",m1);
	for (i = 0; i < N; i++)
	{
		printf("%d",max1[i]);
	}
	printf("�γ�c2��߷���%d,�ֱ���:",m2);
	for (i = 0; i < N; i++)
	{
		printf("%d",max2[i]);
	}
	return 0;
}