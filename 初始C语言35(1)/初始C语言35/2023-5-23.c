#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//1.�������ķ���
//2.�ݹ�
//3ָ��-ָ��
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')//while(*str)
//	{ 
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	//int len = my_strlen("abcdef");
//	//int len = strlen("abcdef");
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//int len = my_strlen(arr);
//	//printf("%d\n", len);
//
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//char* my_strcpy(char* dest,char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����dest ָ��Ŀռ�,����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//���صĵ�ַ
//	return ret;
//
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//strcpy();
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//
//	return 0;
//}

my_stract(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src);

	//1.�ҵ�ĸ���ַ�����'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.׷��

}
int main()
{
	char arr1[] = "hello";
	char arr2[] = "world";
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}