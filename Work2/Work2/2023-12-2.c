#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�Ӽ�������һ�����ڣ�ĳ��ĳ��ĳ�գ����涨���������������ȷ�ģ�����������Ǹ���ڼ��졣
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	int sum = 0;
//	int i = 0;
//	int j = 0;
//	int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	scanf("%d %d %d", &year, &month, &day);
//	if (year % 400 == 0 || (year % 100 == 0 && year % 4 != 0))
//		arr[1]++;
//	for (i = 0; i < month - 1; i++)
//	{
//		sum += arr[i];
//	}
//	printf("�����Ǹ���ĵ�%d��",sum+day);
//	return 0;
//}

//��д�������ж�һ���������Ƿ�Ϊ����  ������һ�������ǡ�õ�����������֮�ͣ���Ƹ����ǡ���������1������������6=1+2+3��6��������
//int ws(int n)
//{
//	int i = 0;
//	int sum = 0;
//	if (n == 1)
//		return 0;
//	else
//	{
//		for (i = 2; i < n; i++)
//		{
//			if (n % i == 0)
//				sum += i;
//		}
//		if (sum+1 == n)
//			return 1;
//		else
//			return 0;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ws(int n);
//	if (ws(n))
//		printf("%d��������", n);
//	else
//		printf("%d����������",n);
//	return 0;
//}
void strappend(char*, char*);
int replace(char*, char);
int main()
{
	char ch[100] = "good morning,haha";
	char ch1[40] = "good afternoon";
	int count = 0;
	int len = 0;
	strappend(ch, ch1);//��ch1���ַ������ӵ�chβ��
	puts(ch);
	count = replace(ch, 'o');//��ch��ĳ�ַ�(o)��תΪ��д��������ת������
	printf("%d",count);
	return 0;
}
void strappend(char* p,char* q)
{
	while (*p)
		p++;
	while (*q)
		*p++ = *q++;
	*p = '\0';
}
int replace(char* ch, char a)
{
	int num = 0;
	char* p = ch;
	while (*p)
	{
		if (*p == 'o')
		{
			*p = *p - 32;
			num++;
			p++;
		}
	}
	return num;
}