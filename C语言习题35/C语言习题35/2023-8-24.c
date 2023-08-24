#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//编写一个类似库函数strcat()的函数，实现两个字符串的连接，并在main()函数中严重该自定义函数的功能。
int main()
{
	char str1[100] = "ABC";
	char str2[] = "DEF";
	char* scat(char* s1, char* s2);
	printf("连接后的字符串:%s\n",scat(str1,str2));
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

//编写函数，判断一个字符串是否是回文。在主函数中输入一个字符串，调用自定义函数，输出结果。所谓回文是指顺读和倒读都一样的字符串。如"XZYKYZX"是回文字符串。
int main()
{
	char s[50];
	int hw(char* s);
	puts("请输入一个字符串:");
	gets(s);
	if (hw(s))
		printf("该字符串是回文！\n");
	else
		printf("该字符串不是回文！"\n);
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