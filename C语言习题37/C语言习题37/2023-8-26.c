#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//��д����,�Ӽ�������ְ��������ÿλְ������Ϣ��������ְ���ţ������͹�н���������ְ����ƽ�����ʼ����ʵ���2000.00Ԫ��ְ����Ϣ��Ҫ���������Ͷ�̬�洢�������ַ�����ʵ�֡�
//struct worker
//{
//	char num[10];
//	char name[10];
//	float salary;
//};
//int main()
//{
//	struct worker* p, * p1;
//	int n, i;
//	float sum = 0;
//	printf("������ְ������:");
//	scanf("%d",&n);
//	p1 = (struct worker*)malloc(sizeof(struct worker) * n);
//	p = p1;
//	for (i = 0; i < n; i++)
//	{
//		printf("�������%d��ְ������Ϣ(ְ���ţ������͹���)\n",i+1);
//		scanf("%s%s%f",p->num,p->name,&(p->salary));
//		sum = sum + p->salary;
//		p++;
//	}
//	printf("�����˵�ƽ��������:%.2f\n",sum/n);
//	printf("���ʵ���2000.00Ԫ��ְ����Ϣ:\n");
//	p = p1;
//	printf("ְ����\t����\t����\n");
//	for (i = 0; i < n; i++)
//	{
//		if ((p->salary) < 2000)
//			printf("%s\t%s\t%.2f\n",p->num,p->name,p->salary);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	char s[10];
//	int n;
//	int fun(char* s);
//	printf("�����벻����9���ַ������ִ�: ");
//	gets(s);
//	n = fun(s);
//	printf("��Ӧ������Ϊ: %d\n",n);
//}
//int fun(char* s)
//{
//	int len, i, k, n = 0;
//	len = strlen(s);
//	for (i = 0; i < len; i++)
//	{
//		k = s[i] = '0';
//		n = n * 10 + k;
//	}
//	return n;
//}

int main()
{
	char str[30];
	int strlen1(char*);
	printf("�������ַ���: ");
	gets(str);
	printf("�ַ�������Ϊ: %d\n",strlen1(str));
}
int strlen1(char* p)
{
	int len = 0;
	while (*p != '\0')
	{
		len++;
		p++;
	}
	return len;
}