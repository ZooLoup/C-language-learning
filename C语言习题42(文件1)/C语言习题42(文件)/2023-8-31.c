#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define M 3
//#define N 4
//从键盘输入一个M*N二维数组，将其以矩阵形式在屏幕上显示出来，并以矩阵形式写入文件中。
//int main()
//{
//	int i;
//	int j;
//	int array[M][N];
//	FILE* fp;
//	char fname[50];
//	printf("请输入文件名:");
//	scanf("%s",fname);
//	printf("请输入数据:");
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

//求1—M能被7或者11整除的数，将结果以每行5个数显示在屏幕上，并以同样的格式写入文件中。
#define M 100
int main()
{
	int bb[M];
	int i;
	int n = 0;
	FILE* fp;
	char fname[50];
	printf("请输入文件名:");
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