#define _CRT_SECURE_NO_WARNINGS 1
//�Ӽ������������ַ��������ڶ����ַ������ӵ���һ���ַ�����ĩβ����������Ӻ�Ľ����Ҫ���ܵ����ַ����⺯��strcat().
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	char s1[90], s2[90];
//	printf("�������һ���ַ���:");
//	gets(s1);
//	printf("������ڶ����ַ���:");
//	gets(s2);
//	while (s1[i] != '\0')
//		i++;
//	while (s2[j] != '\0')
//	{
//		s1[i] = s2[j];
//		i++;
//		j++;
//	}
//	s1[i] = '\0';
//	printf("���Ӻ���ַ���Ϊ:%s\n",s1);
//	return 0;
//}

//��̽��ַ�����s2�е�ȫ���ַ����Ƶ��ַ�����s1�С�Ҫ��:���ܵ����ַ����⺯��strcpy()��
int main()
{
	int i = 0;
	char s1[90], s2[90];
	scanf("%s",&s2);
	for (i = 0; i < strlen(s2); i++)
		s1[i] = s2[i];
	s1[i] = '\0';
	printf("%s",s1);
	return 0;
}