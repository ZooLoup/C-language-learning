#define _CRT_SECURE_NO_WARNINGS 1
//输入一个字符串，使其逆序输出
//#include <stdio.h>
//#include <math.h>
//void reverse(char* arr)
//{
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len -1;
//	while (left<right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	//scanf("%s",&arr);//scanf读到空格会停止
//	gets(arr);
//	reverse(arr);
//	printf("%s",arr);
//	return 0;
//}


#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	scanf("%d", &n);
	//打印上半部分
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < i+1; j++)
			printf(" ");
		for (j = 0; j<2*(n-1-i)-1; j++)
			printf("*");
		printf("\n");
	}
}