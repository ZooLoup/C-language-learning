#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h >
#include <stdlib.h>
//�Ӽ�������һ��ѧ�������������䣬����д������ļ��У��������н������ü��±��鿴�ļ������ݡ�
//int main()
//{
//	FILE* fp;
//	char name[20], fname[50];
//	int age;
//	printf("����������������:");
//	scanf("%s%d",name,&age);
//	printf("%s",fname);
//	if ((fp = fopen(fname, "w")) == NULL)
//	{
//		printf("�����ļ���\n");
//		exit(0);
//	}
//	fprintf(fp,"%s %d",name,age);
//	fclose(fp);
//	return 0;
//}

//��̽���һ�Ᵽ���ڴ����ļ��е����ݶ���������ʾ����Ļ�ϡ�
int main()
{
	FILE* fp;
	char name[20], fname[50];
	int age;
	printf("�������ļ���:");
	scanf("%s",fname);
	if ((fp = fopen(fname, "r")) == NULL)
	{
		printf("�����ļ���\n");
		exit(0);
	}
	fscant(fp, "%s%d", name, &age);
	printf("%s %d\n",name,age);
	fclose(fp);
	return 0;
}