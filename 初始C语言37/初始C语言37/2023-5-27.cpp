#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int strnmp(const char* string1, const char* string2, size_t count);
//int main()
//{
//	//strncmp - �ַ����Ƚ�
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

//strstr - �����ַ���
#include <assert.h>
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;
	if (*p2 == '\0')
	{
		return p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while ((*s1!='\0') && (*s2!='\0')&&(*s1 == *s2)
		{
			s1++;
		    s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
}
int main()
{
	const char* p1 = "abcdef";
	const char* p2 = "def";
	char* ret = my_strstr(p1, p2);
	if (ret = NULL)
	{
		printf("�ַ���������\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}