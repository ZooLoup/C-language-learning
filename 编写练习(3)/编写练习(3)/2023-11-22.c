#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//��д������ѡ�񷨽��Ӽ����������10����������������������ÿո�ֿ���
//int main()
//{
//	int a[10], i, j, t, k;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		k = i;
//		for (j = i + 1; j < 10; j++)
//			if (a[k] > a[j])
//				k = j;
//		if (i != k)
//		{
//			t =a[i];
//			a[i] = a[k];
//			a[k] = t;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",a[i]);
//	}
//	return 0;
//}

//��������һ���ַ����У�ϣ�����ַ��������Ų�������򴮣�������"abcd�����"dcba"����ȫ����
//int main()
//{
//	char ch[100];
//	char* p1;
//	char* p2;
//	char c;
//	gets(ch);
//	p1 = p2 = ch;
//	while (*p2)
//		p2++;
//	p2--;
//	while (p1 < p2)
//	{
//		c = *p1;
//		*p1 = *p2;
//		*p2 = c;
//		p1++;
//		p2--;
//	}
//	puts(ch);
//	return;
//}

#define N 40
typedef struct
{
	char name[10];
	int num;
}Emp;
int main()
{
	Emp a[N];
	int i, min;
	input(a, N);//����¼��
	min = qmin(a, N);//����������
	output(a, N, min);
	return 0;
}
int input(Emp *a,int n)
{
	int i;
	for (i = 0; i < n; i++)
		scanf("%s%d",a[i].name,&a[i].num);
}
int qmin(Emp* a, int n)
{
	int min = a[0].num;
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i].num < min)
			min = a[i].num;
		return min;
	}
}
int output(Emp* a, int n, int min)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (min == a[i].num)
			printf("%s",a[i].name);
	}
}