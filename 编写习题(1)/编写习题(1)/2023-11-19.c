#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��һ��ͼ�飨200������ÿ�����У�������name��20�ֽڣ�����(author��10�ֽ�)���۸�price���������������ݣ�ͼ����Ⲣ���۸�����ʾÿ��������ݼ�ͼ���ܼۣ���ʽ���£�
//#define N 200
//typedef struct
//{
//	char name[20], author[10];
//	int price;
//}Book;
//void main()
//{
//	int i=0;
//	int j=0;
//	int sum = 0;
//	Book bk[N],t;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%s%s%d",bk[i].name,bk[i].author,&bk[i].price);
//		sum += bk[i].price;
//		for (i = 1; i < N; i++)
//		{
//			for (j = 0; j < N - i; j++)
//			{
//				if (bk[j].price < bk[j + 1].price)
//				{
//					t = bk[j];
//					bk[j] = bk[j + 1];
//					bk[j + 1] = t;
//				}
//			}
//		}
//		for (i = 0; i < N; i++)
//		{
//			printf("%d-%s-%s-%d\n",i+1,bk[i].name,bk[i].author,bk[i].price);
//		}
//		printf("�ܼ۸�:%d",sum);
//	}
//	return 0;
//}

//����fun��������һ��������n�η�����������������(a)��n������fun���������������ȫ����
//int fun(int a, int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * a;
//	}
//	return sum;
//}
//int main()
//{
//	int a ;
//	int n ;
//	scanf("%d,%d",&a,&n);
//	printf("%d��%d�η�Ϊ%d",a,n,fun(a,n));
//	return 0;
//}

//��д��������������������ӡͼ�Ρ�
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n-i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("%d",j);
		}
		for (j = i - 1; j >= 1; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}