#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//p128
//��д�������������¹�ʽ���ߵ�ֵ��Ҫ���������������뾫�ȣ��������������ȱ�ʾ���㵽��ʽ��ĳһ���ֵС�ڹ涨ֵΪֹ��
//double fun(double eps)
//{
//	double s = 1.0, n = 1.0, t, pi = 1;
//	while (s >= eps)
//	{
//		t = n / (2 * n + 1);
//		s = s * t;
//		pi = pi +s;
//		n++;
//	}
//	pi = pi * 2;
//	return pi;
//}
//int main()
//{
//	double x;
//	printf("�����뾫��:");
//	scanf("%lf",&x);
//	printf("pi=%lf\n",fun(x));
//	return 0;
//}

//��д�������ҳ�һ�����ڸ�������n�ҽ���n��������Ҫ����������������n������������
int fun(int m)
{
	int i ;
	int k ;
	for (i = m + 1; ;i++)
	{
		for (k = 2; k < i; k++)
		{
			if (i % k == 0)
				break;
			if (k >= i)
				return(i);
		}
	}
}
void main()
{
	int n;
	printf("������һ������:");
	scanf("%d", &n);
	printf("���������Ϊ: %d\n",fun(n));
}