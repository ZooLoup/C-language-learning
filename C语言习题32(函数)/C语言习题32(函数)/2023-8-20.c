#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//编写函数将数组中的n个整数按相反顺序存放。要求在main()函数中输入数组的值并输出结果。
//int main()
//{
//	int i, n;
//	int a[100];
//	void reverse(int p[], int m);
//	printf("请输入n:",&n);
//	scanf("%d",&n);
//	printf("请输入n个数:");
//	for (i = 0; i < n; i++)
//		scanf("%d",&a[i]);
//	reverse(a, n);
//	printf("反序后数组元素的值:\n");
//	for (i = 0; i < n; i++)
//		printf("%d",a[i]);
//	printf("\n");
//	return 0;
//}
//void reverse(int p[], int m)
//{
//	int i, t;
//	for (i = 0; i < m / 2; i++)
//	{
//		t = p[i];
//		p[i] = p[m - i - 1];
//		p[m - i - 1] = t;
//	}
//}

//编写函数，求一个英文句子中最长的英文单词。要求在主函数中输入数据，并输出结果。
//int zm(char c)
//{
//	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//		return 1;
//	else
//		return 0;
//}
//int p(char s[])
//{
//	int i;
//	int len = 0;
//	int length = 0;
//	int flag = 1;
//	int place = 0;
//	int point;
//	for (i = 0; i <= strlen(s); i++)
//	{
//		if (zm(s[i]))
//		{
//			if (flag)
//			{
//				len++;
//				point = i;
//				flag = 0;
//			}
//			else
//				len++;
//		}
//		else
//		{
//			flag = 1;
//			if (len > length)
//			{
//				length = len;
//				place = point;
//				len = 0;
//			}
//		}
//	}
//	return place;
//}
//int main()
//{
//	int i;
//	char str[100];
//	printf("请输入一句英文:");
//	gets(str);
//	printf("最长的单词为:");
//	for (i = p(str); zm(str[i]); i++)
//		printf("%c",str[i]);
//	printf("\n");
//	return 0;
//}

//从键盘输入某商场M个柜台6个月的营业总额（单位:万元）。统计:1.每个柜台的总营业额及平均营业额。2.每月的总营业额及平均营业额。3.找出最高营业额及其所对应的柜台和月份。要求数据输入，输出及上述各项统计功能都分别采用函数来实现。
#define M 5
#define N 6
float a[M][N];
float sum1[M];
float ave1[M];
float sum2[N];
float ave2[N];
int row, col;
void intput_data()
{
	int i, j;
	for (i = 0; i < M; i++)
	{
		printf("请输入第%d个柜台6个月的营业总额:\n",i+1);
		for (j = 0; j < N; j++)
			scanf("%f",&a[i][j]);
	}
}
void compute1()
{
	int i, j;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
			sum1[i] = sum1[i] + a[i][j];
		ave1[i] = sum1[i] / N;
	}
}
void compute2()
{
	int i, j;
	for (j = 0; j < N; j++)
	{
		for (i = 0; i < M; i++)
			sum2[j] = sum2[j] + a[i][j];
		ave2[j] = sum2[j] / M;
	}
}
float highest()
{
	int i, j;
	float max;
	max = a[0][0];
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			if (a[i][j] > max)
			{
				max = a[i][j];
				row = i + 1;
				col = j + 1;
			}
	return max;
}
void output_data()
{
	int i, j;
	float h;
	printf("柜台号\t1月/t2月\t3月\t4月\t5月\t6月\t总额\t平均额\n");
	for (i = 0; i < M; i++)
	{
		printf("%d\t",i+1);
		for (j = 0; j < N; j++)
			printf("%2.f\t,a[i][j]");
		printf("%2.f\t%2.f\n",sum1[i], ave1[i]);
	}
	printf("柜台总额");
	for (j = 0; j < N; j++)
		printf("%2.f\t",sum2[j]);
	printf("\n");
	printf("柜台均额");
	for (j = 0; j < N; j++)
	{
		printf("%2.f\t",ave2[j]);
	}
	printf("\n");
	h = highest();
	printf("最高额:%2.f万,第%d柜台,%d月份\n",h,row,col);
}
int main()
{
	intput_data();
	compute1();
	compute2();
	output_data();
}