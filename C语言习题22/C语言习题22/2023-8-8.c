#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��д����Min(x,y,z)�������������е���Сֵ�������øú�������������е���Сֵ��Ҫ�����������������������������������
int Min(int a, int b, int c)
{
	int min;
	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return min;
}
int main()
{
	int x, y, z, m, n, min1, min2;
	printf("������5������:");
	scanf("%d %d %d %d %d",&x,&y,&z,&m,&n);
	int Min(x, y, z);
	min1 = Min(x, y, z);
	min2 = Min(min1, m, n);
	printf("5����������Сֵ��:%d",min2);
	return 0;
}
