#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��д�����������ֱ����������������Լ������С����������������������������������ŷ���Ǹ����Ǻ���������
int fgcd(int a, int b)
{
	int i;
	for (i = (a > b ? a : b); i > 1; i--)
	{
		if (a % i == 0 && b % i == 0)
			break;
	}
	return i;
}
int flcd(int a, int b)
{
	int i;
	for (i = (a > b ? a : b); i < a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			break;
		}
		return i;
	}
}
int main()
{
	int fgcd(int a, int b);
	int flcd(int a, int b);
	int a, b, gcd, lcd;
	printf("��������������:");
	scanf("%d%d",&a,&b);
	gcd = fgcd(a, b);
	lcd = flcd(a, b);
	printf("���Լ��:%d\n��С������:%d\n",gcd,lcd);
	return 0;
}