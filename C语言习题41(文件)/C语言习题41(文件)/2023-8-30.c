#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
//�Ӽ��������������ַ�(���һ�а�Enter����ʾ����),�����Ǵ�������ļ��У��ٶȳ���Щ�ַ��������еĴ�д��ĸת����Сд��ĸ��д����һ�����ļ��С�

//int main()
//{
//	int i = 0;
//	FILE* fp, * fp1;
//	char str[100], fname[50], fname1[50];
//	printf("�����������ļ���:");
//	gets(fname);
//	gets(fname1);
//	if ((fp = fopen(fname, "w+")) == NULL)
//	{
//		printf("���ܴ򿪵�һ���ļ���д�ļ�ʧ�ܣ�\n");
//		exit(0);
//	}
//	if ((fp1 = fopen(fname1, "w")) == NULL)
//	{
//		printf("���ܴ򿪵�2���ļ���д�ļ�ʧ�ܣ�\n");
//		exit(0);
//	}
//	printf("����������������:\n");
//	while (strlen(gets(str)) > 0)
//	{
//		fputs(str, fp);
//		fputs("\n", fp);
//	}
//	rewind(fp);
//	while (fgets(str, 100, fp) != NULL)
//	{
//		for (i = 0; str[i] != '\n'; i++)
//			if (str[i] >= 'A' && str[i] <= 'Z')
//			{
//				str[i] = str[i] + 32;
//				printf("%s",str);
//				fputs(str, fp);
//			}
//		fclose(fp);
//		fclose(fp1);
//	}
//	return 0;
//}

#define M 3
struct product
{
	char bh[5];
	char name[11];
	float dj;
	int s1;
	float je;
}sell[M];
void Input_data()
{
	FILE* fp;
	int i;
	char fname[50];
	printf("�������Ʒ���ۼ�¼�ļ���:\n");
	gets(fname);
	if ((fp = fopen(fname, "wb")) == NULL)
	{
		printf("���ܴ��ļ���д�ļ�ʧ��!\n");
		exit(0);
	}
	for (i = 0; i < M; i++)
	{
		printf("�������%d����Ʒ�����ۼ�¼����:\n", i + 1);
		printf("��Ʒ���:");
		scanf("%s", sell[i].bh);
		printf("��Ʒ����:");
		scanf("%s", sell[i].name);
		printf("����:");
		scanf("%f", &sell[i].dj);
		printf("����:");
		scanf("%d", &sell[i].s1);
		sell[i].je = sell[i].dj * sell[i].s1;
	}
	if (fwrite(sell, sizeof(struct product), M, fp) != M)
		printf("�ļ�д����!\n");
	fclose(fp);
	return 0;
}
void Sort_Data()
{
	FILE* fp, * fp1;
	int i, j;
	char fname[50], fname1[50];
	struct product t;
	printf("�������Ʒ���ۼ�¼�ļ����������ļ���:\n");
	scanf("%s%s",fname,fname);
	if ((fp = fopen(fname, "rb")) == NULL)
	{
		printf("���ܴ��ļ������ļ�ʧ�ܣ�\n");
		exit(0);
	}
	fread(sell, sizeof(struct product), M, fp);
	fclose(fp);
	for(i=1;i<=M-1;i++)
		for(j=0;j<M-i;j++)
			if ((sell[j].je > sell[j + 1].je) || (sell[j].je == sell[j + 1].je && strcmp(sell[j].bh, sell[j + 1].bh) > 0))
			{
				t = sell[j];
				sell[j] = sell[j + 1];
				sell[j + 1] = t;
			}
	if ((fp1 = fopen(fname, "wb")) == NULL)
	{
		printf("���ܴ��ļ���д�ļ�ʧ�ܣ�\n");
		exit(0);
	}
	for (i = 0; i < M; i++)
	{
		fwrite(&sell[i], sizeof(struct product), 1, fp1);
		printf("%s\t%s\t%f\t%d\t%f\n",sell[i].bh,sell[i].bh,sell[i].name,sell[i].dj,sell[i].s1,sell[i].je);
	}
	fclose(fp1);
}
void main()
{
	input_Data();
	Sort_Data();
}