#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����Fibonacci���е�ǰ20������д������ļ��У��������н������ü��±��鿴�ļ������ݡ�Ҫ��ֱ��ԡ��ı���ʽ��д���"�����Ʒ�ʽ"д���̡�
//#define N 20
//int main()
//{
//	int i;
//	int f[N] = { 0,1 };
//	FILE *fp;
//	char fname[50];
//	printf("�������ļ���:");
//	scanf("%s",fname);
//	if ((fp = fopen(fname, "w")) == NULL)
//	{
//		printf("���ܴ��ļ���д�ļ�ʧ�ܣ�\n");
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


//��̽������Ᵽ���ڴ����ļ��е����ݶ���������ʾ����Ļ�ϡ�Ҫ�������ı��ļ��Ͷ������ļ��ֱ��̡�
//#define N 20
//int main()
//{
//	int i;
//	int f[N];
//	FILE* fp;
//	char fname[50];
//	printf("�������ļ���:");
//	scanf("%s",fname);
//	if ((fp = fopen(fname, "r")) == NULL)
//	{
//		printf("���ܴ��ļ���\n");
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

//(�����Ʒ�ʽ)
#define N 20
int main()
{
	int i;
	int f[N] = { 1,1 };
	FILE* fp;
	char fname[50];
	printf("�������ļ���:");
	scanf("%s",fname);
	if((fp=fopen(fname,"rb"))==NULL)
	{
		printf("���ܴ��ļ���\n");
		return;
	}
	fread(f, sizeof(int), 20, fp);
	for (i = 0; i < N; i++)
		printf("%d",f[i]);
	fclose(fp);
	return 0;
}