#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

//my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//    //�Ƚ�
//	while (str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//��ȵ�
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//����
//	else
//		return -1;//С��
//	
//
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello";
//	strncpy(arr1, arr2, 4);
//	printf("");
//	return 0;
//
//}

int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strnact(arr1, arr2, 3);
	printf("%s\n", arr1);
	return 0;
}