#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
//��д����max(int a[]),����������a��Ԫ�ص����ֵ�����������ж���һ�����飬��������Ԫ��ֵ��Ȼ����ú���max(),�����������Ԫ�ص����ֵ��
//#define N 10
//int Max(int a[])
//{
//	int i = 0;
//	int max1 = 0;
//	max1 = a[0];
//	for (i = 1; i < N; i++)
//	{
//		if (max1 < a[i])
//			max1 = a[i];
//	}
//	return max1;
//}
//int main()
//{
//	int i = 0;
//	int a[N];
//	for (i = 0; i < N; i++)
//		scanf("%d",&a[i]);
//	printf("Ԫ�ص����ֵ��%d",Max(a));
//	return 0;
//}

//��дһ��ð�ݷ���n������С�����������ĺ�������������������n��ֵ�Լ�n�ĸ�����Ȼ������Զ��庯���������������
int sort(int a[], int n)
{
	int i = 0;
	int j = 0;
	int tmp=0;
	for (i = 1; i < n - 1; i++)
	{
		for (j = 1; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int i = 0;
	int n = 0;
	int a[100];
	int sort(int a[], int n);
	printf("������Ԫ�ظ���:");
	scanf("%d",&n);
	printf("������n��Ԫ�ص�ֵ:");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}