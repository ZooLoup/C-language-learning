#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��̴Ӽ�������һ��N*N�ľ���A�������B(B=A*A)����������A����װ�þ�����ӣ������ŵ�����B�С����磬��������ľ���
//1 2 3
//4 5 6
//7 8 9
//��ת�þ���Ϊ
//1 4 7
//2 5 8
//3 6 9
//������������Ϊ:
//2 6 10
//6 10 14
//10 14 18
//#define N 3
//int main()
//{
//	int a[N][N], b[N][N], c[N][N];
//	int i, j;
//	printf("���������a:\n");
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//			scanf("%d", &a[i][j]);
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//		{
//			c[i][j] = a[j][i];
//			b[i][j] = a[i][j] + c[i][j];
//		}
//	printf("���Ϊ:\n");
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//				printf("%7d",b[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//��̴Ӽ�������һ�����������������Ԫ�أ���÷����������ǡ���Ԫ��֮�͡�
//int main()
//{
//	int x[10][10] = { 0 };
//	int n, i, j;
//	int sum = 0;
//	printf("�����뷽�������:");
//	scanf("%d",&n);
//	printf("�����뷽���Ԫ��:");
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d",&x[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//		for (j = i; j < n; j++)
//			sum = sum + x[i][j];
//	printf("sum=%d\n",sum);
//	return 0;
//}

//�Ӽ�������һ���ַ��������䰴���������
//int main()
//{
//	char a[20] = { 0 };
//	int i = 0;
//	printf("������һ���ַ���:");
//	gets(a);
//	for (i = strlen(a) - 1; i >= 0; i--)
//		printf("%c",a[i]);
//	return 0;
//}