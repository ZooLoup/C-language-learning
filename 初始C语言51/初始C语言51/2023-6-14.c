#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main()
//{
//	//���ļ�test.txt
//
//	//fopen("C:\\2020_code\\84��\\test5_6","r");
//	FILE* pfWrite = fopen("test.txt", "r");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fclose(pfWrite);
//	pfWrite = NULL; 
//	return 0;
//}

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//
//	return 0;
//}


//#include <errno.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//���ļ�
//	int ch = fertc(pf);
//	printf("%c", ch);
//	//д�ļ�
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//
//	fclose(pf);
//	pf = NULL;
//}

//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//�ӱ�׼�������
//	//fputs(buf, stdout);//���뵽��׼�����
//
//	gets(buf);
//	puts(buf);
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100, 3.14f, "bit" };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽд�ļ�
//	//fprintf(pf,"%d %f %s", s.n, s.score, s.arr);
//
//	fscanf("%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//scanf/fscanf/sscanf      scanf/printf����Ա�׼������/��׼������� ��ʽ������/������
//printf/fprintf/sprintf   fscanf/fprintf���������������/����������� ��ʽ������/������
//sscanf/sprintf sscanf�Ǵ��ַ����ж�ȡ��ʽ��������
//�ǰѸ�ʽ�������������(�洢��)�ַ�����
struct S
{
	int n;
	float score;
	char arr[0];
};

int main()
{
	struct S s = {100, 3.14f, "abcdef"};
	struct S tmp = { 0 };
	char buf[1024] = { 0 };
	//�Ѹ�ʽ��������ת�����ַ����洢��buf
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	//printf("%s\n", buf);
	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
	sscanf(buf, "%d %f %s", &(tmp.n),&(tmp.score), tmp.arr);
	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
	return 0;
}