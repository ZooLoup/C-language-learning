#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//��дһ�����ƿ⺯��strcat()�ĺ�����ʵ�������ַ��������ӣ�����main()���������ظ��Զ��庯���Ĺ��ܡ�
int main()
{
	char str1[100] = "ABC";
	char str2[] = "DEF";
	char* scat(char* s1, char* s2);
	printf("���Ӻ���ַ���:%s\n",scat(str1,str2));
	return 0;
}
char* scat(char* s1, char* s2)
{
	char* p, * q;
	p = s1;
	while (*p != '\0')
		p++;
	q = s2;
	while (*q = '\0')
	{
		*p = *q;
		p++;
		q++;
	}
	*p = '\0';
	return s1;
}

//��д�������ж�һ���ַ����Ƿ��ǻ��ġ���������������һ���ַ����������Զ��庯��������������ν������ָ˳���͵�����һ�����ַ�������"XZYKYZX"�ǻ����ַ�����
int main()
{
	char s[50];
	int hw(char* s);
	puts("������һ���ַ���:");
	gets(s);
	if (hw(s))
		printf("���ַ����ǻ��ģ�\n");
	else
		printf("���ַ������ǻ��ģ�"\n);
	return 0;
}
int hw(char* s)
{
	int flag = 1;
	char* p, * q;
	for (p = s, q = s + strlen(s) - 1; p < q; p++, q--)
	{
		if (*p != *q)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}