#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//���ʵ�ִӼ�������һ���ַ������������±�Ϊż����ASCII��ֵҲΪż�����ַ���ŵ���һ���ַ������У��������
//int main()
//{
//	char str[100], s[100];
//	int i = 0;
//	int j = 0;
//	int len = 0;
//	printf("������һ���ַ���:");
//	scanf("%s",str);
//	len = strlen(str);
//	for(i=0;i<len;i+=2)
//		if (str[i] % 2 == 0)
//		{
//			s[j] = str[i];
//			j++;
//		}
//	s[j] = '\0';
//	printf("%s\n",s);
//	return 0;
//}

//���ʵ�ִӼ�������һ���ַ�����ɾ���ַ����е�ǰ���ո��м��β���Ŀո�ɾ�������磬�ַ���Ϊ:��        A BC DEF����ɾ����Ľ���ǡ�A BC DEF����
//int main()
//{
//	char a[100], b[100];
//	int i = 0;
//	int j = 0;
//	printf("������һ�����пո���ַ���:");
//	gets(a);
//	strcpy(b, a);
//	while (b[i] == ' ')
//		i++;
//	while (b[i] != '\0 ')
//	{
//		a[j] = b[i];
//		j++;
//		i++;
//	}
//	a[j] = '\0';
//	printf("ɾ���ո����ַ�����:");
//	puts(a);
//	return 0;
//}

//���ʵ�ִӼ�������һ���ַ�����һ���ַ���ɾ�����ַ���������ָ�����ַ�����������浽һ���µ��ַ����У��������
int main()
{
	char a[100], b[100];
	char c;
	int i = 0, j = 0;
	printf("������һ���ַ���:");
	gets(a);
	printf("������һ���ض��ַ�:");
	scanf("%c", &c);
	while (a[i]!='\0')
	{
		if (a[i] != c)
		{
			b[j] = a[i];
			j++;
		}
		i++;
	}
	b[j] = '\0';
	printf("%s",b);
	return 0;
}