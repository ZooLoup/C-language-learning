#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//��д��������һ�������ַ���ת����Ϊһ�����������ܵ���C�����н��ַ���ת���������Ŀ⺯������
//int fun(char p[])
//{
//	int s = 0;
//	int t;
//	int i = 0;
//	int j = 0;
//	int n = strlen(p);
//	int k;
//	if (p[0] == '-')
//		i++;
//	for (j = 1; j <= n - 1; j++)
//	{
//		t = p[j] - '0';
//		s = s * 10 + t;
//	}
//	if (p[0] == '-')
//		return s;
//	else
//		return s;
//}
//int main()
//{
//	char s[6];
//	int n;
//	printf("������һ�����ִ�:\n");
//	gets(s);
//	n = fun(s);
//	printf("�����:%d",n);
//	return 0;
//}

//��д����������һά�����ֵ�����¹���������������һά�����ֵΪ1,2,3,4���ú�����������·���Ҫ����main()��������������a��ֵ��
#include <stdio.h>
#define M 4
void fun(int a[])
{
	int i, j, k;
	for (i = 0; i < M; i++)
	{
		k = a[M - 1];
		for (j = M - 1; j > 0; j--)
			a[j] = a[j - 1];
		a[0] = k;
		for (j = 0; j < M; j++)
			printf("%6d",a[j]);
		printf("\n");
	}
}
int main()
{
	int i, a[M];
	printf("������%d������:",M);
	for (i = 0; i < M; i++)
		scanf("%d",&a[i]);
	fun(a);
	return 0;
}