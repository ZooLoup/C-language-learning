#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//��д�����������е�n���������෴˳���š�Ҫ����main()���������������ֵ����������
//int main()
//{
//	int i, n;
//	int a[100];
//	void reverse(int p[], int m);
//	printf("������n:",&n);
//	scanf("%d",&n);
//	printf("������n����:");
//	for (i = 0; i < n; i++)
//		scanf("%d",&a[i]);
//	reverse(a, n);
//	printf("���������Ԫ�ص�ֵ:\n");
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

//��д��������һ��Ӣ�ľ��������Ӣ�ĵ��ʡ�Ҫ�������������������ݣ�����������
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
//	printf("������һ��Ӣ��:");
//	gets(str);
//	printf("��ĵ���Ϊ:");
//	for (i = p(str); zm(str[i]); i++)
//		printf("%c",str[i]);
//	printf("\n");
//	return 0;
//}

//�Ӽ�������ĳ�̳�M����̨6���µ�Ӫҵ�ܶ��λ:��Ԫ����ͳ��:1.ÿ����̨����Ӫҵ�ƽ��Ӫҵ�2.ÿ�µ���Ӫҵ�ƽ��Ӫҵ�3.�ҳ����Ӫҵ�������Ӧ�Ĺ�̨���·ݡ�Ҫ���������룬�������������ͳ�ƹ��ܶ��ֱ���ú�����ʵ�֡�
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
		printf("�������%d����̨6���µ�Ӫҵ�ܶ�:\n",i+1);
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
	printf("��̨��\t1��/t2��\t3��\t4��\t5��\t6��\t�ܶ�\tƽ����\n");
	for (i = 0; i < M; i++)
	{
		printf("%d\t",i+1);
		for (j = 0; j < N; j++)
			printf("%2.f\t,a[i][j]");
		printf("%2.f\t%2.f\n",sum1[i], ave1[i]);
	}
	printf("��̨�ܶ�");
	for (j = 0; j < N; j++)
		printf("%2.f\t",sum2[j]);
	printf("\n");
	printf("��̨����");
	for (j = 0; j < N; j++)
	{
		printf("%2.f\t",ave2[j]);
	}
	printf("\n");
	h = highest();
	printf("��߶�:%2.f��,��%d��̨,%d�·�\n",h,row,col);
}
int main()
{
	intput_data();
	compute1();
	compute2();
	output_data();
}