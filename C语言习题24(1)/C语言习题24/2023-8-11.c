#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//��дһ������f()��������n��a��ֵ��������������������������a��n,���ú���f()����a+aa+aaa+aaaa+����+(n��a��ֵ),����������
//int Add(int m, int n)
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		j = 10 * n + m;
//	}
//	return j;
//}
//int main()
//{
//	int a, n, i;
//	int sum = 0;
//	printf("��������������:");
//	scanf("%d%d", &a, &n);
//	for (i = 0; i <= n; i++)
//	{
//		sum = sum + Add(a, n);
//	}
//	printf("%d",sum);
//	return 0;
//}

//��д����power()��������n^k��ֵ��������������������������n��k�����ú���power()����1^k+����+n^k��ֵ��
//int power(int n, int k)
//{
//	int i = 0;
//	int j = 1;
//	for (i = 1; i <= k; i++)
//	{
//		j = j * n;
//	}
//	return j;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int i = 0;
//	int sum = 0;
//	printf("������n��k��ֵ:");
//	scanf("%d %d",&n,&k);
//	for (i = 0; i < n; i++)
//	{
//		sum = sum + power(n, k);
//	}
//	printf("%d",sum);
//	return 0;
//}