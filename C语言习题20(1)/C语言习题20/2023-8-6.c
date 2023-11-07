#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//编程实现从键盘输入一个字符串，将其中下标为偶数且ASCII码值也为偶数的字符存放到另一个字符数组中，并输出。
//int main()
//{
//	char str[100], s[100];
//	int i = 0;
//	int j = 0;
//	int len = 0;
//	printf("请输入一个字符串:");
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

//编程实现从键盘输入一个字符串，删除字符串中的前导空格，中间和尾部的空格不删除。例如，字符串为:“        A BC DEF”，删除后的结果是“A BC DEF”。
//int main()
//{
//	char a[100], b[100];
//	int i = 0;
//	int j = 0;
//	printf("请输入一个带有空格的字符串:");
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
//	printf("删除空格后的字符串是:");
//	puts(a);
//	return 0;
//}

//编程实现从键盘输入一个字符串和一个字符，删除该字符串中所有指定的字符，将结果保存到一个新的字符串中，并输出。
int main()
{
	char a[100], b[100];
	char c;
	int i = 0, j = 0;
	printf("请输入一个字符串:");
	gets(a);
	printf("请输入一个特定字符:");
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