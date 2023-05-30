#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		//int ret = 1;调试
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	system("pause");
//	return 0;
//}
//1.栈区的默认使用：
//先使用高地址处的空间，再使用低地址处的空间
//2.数组随着下标的增长
//地址是由低到高变化

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, char* src)
//{
//	assert (dest != NULL);
//	assert (src != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//8分

//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "##############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	const int* p = &num;
//	// const 放在指针变量的*左边时，修饰的是*p，也就是说:不能通过p来改变*p(num)的值
//	// const 放在指针变量的*右边是，修饰的是指针变量p本身
//	//*p = 20;//err
//	int n = 100;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* p = &a;
//	assert(p != NULL);
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);

	return 0;
}