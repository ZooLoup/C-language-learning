#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//��̲���һ��10*10�ķ���Ҫ��÷��󸱶Խ����ϵ�Ԫ�ؾ�Ϊ2������Ԫ�ؾ�Ϊ0������÷���

//int main()
//{
//	int i, j;
//	int a[10][10] = {0};
//	for (i = 0; i < 10; i++)
//		a[i][9 - i] = 2;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//�Ӽ�������һ���ַ�����һ��������m��������ƶ��ַ����е��ַ����ƶ��������£��ѵ�1����m���ַ���ƽ�Ƶ��ַ����ĺ󲿣��ѵ�m+1���ַ���ĩβ���ַ�ƽ�Ƶ��ַ�����ǰ�������磬�ַ���Ϊabcdeghi��m��ֵΪ4���ƶ���Ľ��Ϊefghiabcd
int main()
{
	char s[80], a[80];
	int i, j, n= 0;
	printf("�������ַ���:");
	gets(s);
	printf("������һ������:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		a[i] = s[i];
	for (i = 0; i < (strlen(s)) - n; i++)
		s[i] = s[i + n];
	for (j = 0; j < n; j++)
	{
		s[i] = a[j];
		i++;
	}
	a[i] = '\0';
	printf("�ƶ���Ľ��Ϊ:");
	puts(s);

	return 0;
}