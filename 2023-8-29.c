#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//计算Fibonacci数列的前20项，将结果写入磁盘文件中，程序运行结束后用记事本查看文件的内容。要求分别以”文本方式“写入和"二进制方式"写入编程。
//#define N 20
//int main()
//{
//	int i;
//	int f[N] = { 0,1 };
//	FILE *fp;
//	char fname[50];
//	printf("请输入文件名:");
//	scanf("%s",fname);
//	if ((fp = fopen(fname, "w")) == NULL)
//	{
//		printf("不能打开文件，写文件失败！\n");
//		return;
//	}
//	for (i = 2; i < N; i++)
//	{
//		f[i] = f[i - 1] + f[i - 2];
//	}
//	for (i = 0; i < N; i++)
//	{
//		fprintf(fp, "%d", f[i]);
//		fclose(fp);
//	}
//	return 0;
//}


//编程将第三题保存在磁盘文件中的数据读出，并显示在屏幕上。要求正对文本文件和二进制文件分别编程。
//#define N 20
//int main()
//{
//	int i;
//	int f[N];
//	FILE* fp;
//	char fname[50];
//	printf("请输入文件名:");
//	scanf("%s",fname);
//	if ((fp = fopen(fname, "r")) == NULL)
//	{
//		printf("不能打开文件！\n");
//		return;
//	}
//	for (i = 0; i < N; i++)
//	{
//		fscanf(fp,"%d", &f[i]);
//		printf("%d",f[i]);
//	}
//	fclose(fp);
//
//	return 0;
//}

//(二进制方式)
#define N 20
int main()
{
	int i;
	int f[N] = { 1,1 };
	FILE* fp;
	char fname[50];
	printf("请输入文件名:");
	scanf("%s",fname);
	if((fp=fopen(fname,"rb"))==NULL)
	{
		printf("不能打开文件！\n");
		return;
	}
	fread(f, sizeof(int), 20, fp);
	for (i = 0; i < N; i++)
		printf("%d",f[i]);
	fclose(fp);
	return 0;
}