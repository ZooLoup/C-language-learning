#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//1.计数器的方法
//2.递归
//3指针-指针
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
//	//拷贝src指向的字符串到dest 指向的空间,包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回的地址
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

	//1.找到母的字符串的'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.追加

}
int main()
{
	char arr1[] = "hello";
	char arr2[] = "world";
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}