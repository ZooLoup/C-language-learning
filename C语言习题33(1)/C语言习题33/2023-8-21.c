#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//����ָ�������Ϊ�βΣ���дһ��ʵ���������������ĺ�������������������3���������������ݽ������������ǰ��Ӵ�С��˳������������
//int main()
//{
//	int a, b, c;
//	void swap(int* px, int* py);
//	printf("��������������:");
//	scanf("%d%d%d",&a,&b,&c);
//	if (a < b)
//		swap(&a, &b);
//	if (a < c)
//		swap(&a, &c);
//	if (b < c)
//		swap(&b, &c);
//	printf("���������Ӵ�С��˳����:%d,%d,%d",a,b,c);
//	return 0;
//}
//void swap(int* px, int* py)
//{
//	int temp;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//}

//��main()����������10�������������У����õ�һ������ݽ����������������������������һ������������С�����һ����������
int main()
{
	int a[10], i;
	int* pmax, * pmin;
	void swap(int* px, int* py);
	printf("������10������:");
	for (i = 0; i < 10; i++)
		scanf("%d",a+i);
	pmax = a;
	pmin = a;
	for (i = 1; i < 10; i++)
	{
		if (*pmax < a[i])
			pmax = &a[i];
		if (*pmin > a[i])
			pmin = &a[i];
	}
	swap(pmax, &a[9]);
	swap(pmin, &a[0]);
	printf("�������10������������:\n");
	for (i = 0; i < 10; i++)
		printf("%d\t",a[i]);
	printf("\n");
	return 0;
}
void swap(int* px, int* py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}