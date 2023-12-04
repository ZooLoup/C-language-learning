#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//编写程序，输入两个正整数m和n，求其最大公约数。
//int main()
//{
//	int m;
//	int n;
//	int r;
//	int s;
//	scanf("%d %d",&m,&n);
//	if (m < n)
//	{
//		s = m;
//		m = n;
//		n = s;
//	}
//	r = m % n;
//	if (r == 0)
//		printf("最大公约数是%d",n);
//	else
//	{
//		while (r != 0)
//		{
//			m = n;
//			n = r;
//			r = m % n;
//		}
//		printf("最大公约数是%d", r);
//	}
//	return 0;
//}
//2.copy(charstrlDl,char str2[lintn)，实现将st2中字符串前n个字符复制到strl中
// (1)用for循环编写函数 copy(char strl[l,char str2l,intn)不允许用strcpy0函数。
// (2)编写主函数输入字符串，调用copy(char strl[l,char str2l,intn)并输出。
//void copy(char* str1, char* str2, int n);
//void copy(char* str1, char* str2,int n)
//{
//	int* p = str1;
//	int* q = str2;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*p++ = *q++;
//	}
//	str1[i] = '\0';
//}
//int main()
//{
//	char str1[100];
//	char str2[100];
//	int n;
//	scanf("%d",&n);
//	gets(str1);
//	gets(str2);
//	copy(str1, str2,n);
//	puts(str1);
//	return 0;
//}

//         *
//        ***
//       *****
//      *******
//       *****
//        ***
//         *
int main()
{

	int i = 0;
	int j = 0;
	int n = 0;
	scanf("%d",&n);
	//打印上半部分
	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n; j++)
			printf(" ");
		for (j = 1;j<=2*i-1;j++)
			printf("*");
		printf("\n");
	}
	//打印下半部分
	for (i = 1; i <=n-1; i++)
	{
		for (j = 1; j<=i+1; j++)
			printf(" ");
		for (j = 1;j<=2*(n-1-i)+1;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}