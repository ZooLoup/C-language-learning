#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define M 3
//#define N 4
//�Ӽ�������һ��M*N��ά���飬�����Ծ�����ʽ����Ļ����ʾ���������Ծ�����ʽд���ļ��С�
//int main()
//{
//	int i;
//	int j;
//	int array[M][N];
//	FILE* fp;
//	char fname[50];
//	printf("�������ļ���:");
//	scanf("%s",fname);
//	printf("����������:");
//	for (i = 0; i < M; i++)
//		for (j = 0; j < N; i++)
//			scanf("%d",&array[i][j]);
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//			printf("%7d",array[i][j]);
//		printf("\n");
//	}
//	fp = fopen(fname, "w");
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//			fprintf(fp,"%7d",array[i][j]);
//		fprintf(fp,"\n");
//	}
//	fclose(fp);
//	return 0;
//}

//��1��M�ܱ�7����11�����������������ÿ��5������ʾ����Ļ�ϣ�����ͬ���ĸ�ʽд���ļ��С�
#define M 100
int main()
{
	int bb[M];
	int i;
	int n = 0;
	FILE* fp;
	char fname[50];
	printf("�������ļ���:");
	scanf("%s",fname);
	for(i=1;i<=M;i++)
		if (i % 7 == 0 || i % 11 == 0)
		{
			bb[n] = i;
			n++;
		}
	for (i = 0; i < n; i++)
	{
		printf("%4d",bb[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");
	fp = fopen(fname, "w");
	for (i = 0; i < n; i++)
	{
		fprintf(fp,"%4d",bb[i]);
		if ((i + 1) % 5 == 0)
			fprintf(fp,"\n");
	}
	fclose(fp);
	return 0;
}