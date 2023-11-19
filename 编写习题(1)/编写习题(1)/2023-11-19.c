#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//有一批图书（200本），每本书有：书名（name，20字节）作者(author，10字节)，价格（price，整数）三个数据，图书入库并按价格降序显示每本书的数据及图书总价，格式如下：
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
//		printf("总价格:%d",sum);
//	}
//	return 0;
//}

//函数fun用来计算一个整数的n次方，键盘上输入整数(a)和n，调用fun并输出计算结果，补全程序。
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
//	printf("%d的%d次方为%d",a,n,fun(a,n));
//	return 0;
//}

//编写程序根据输入的整数，打印图形。
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