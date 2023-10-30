#define _CRT_SECURE_NO_WARNINGS 1
//从键盘输入两个字符串，将第二个字符串连接到第一个字符串的末尾，并输出连接后的结果。要求不能调用字符串库函数strcat().
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	char s1[90], s2[90];
//	printf("请输入第一个字符串:");
//	gets(s1);
//	printf("请输入第二个字符串:");
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
//	printf("连接后的字符串为:%s\n",s1);
//	return 0;
//}

//编程将字符数组s2中的全部字符复制到字符数组s1中。要求:不能调用字符串库函数strcpy()。
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