#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//编程产生一个10*10的方阵，要求该方阵副对角线上的元素均为2，其余元素均为0，输出该方阵。

//int main()
//{
//	int i, j;
//	int a[10][10] = {0};
//	for (i = 0; i < 10; i++)
//		a[i][9 - i] = 2;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//从键盘输入一个字符串和一个整数（m），编程移动字符串中的字符，移动规则如下，把第1到第m个字符，平移到字符串的后部，把第m+1到字符串末尾的字符平移到字符串的前部。例如，字符串为abcdeghi，m的值为4，移动后的结果为efghiabcd
int main()
{
	char s[80], a[80];
	int i, j, n= 0;
	printf("请输入字符串:");
	gets(s);
	printf("请输入一个整数:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		a[i] = s[i];
	for (i = 0; i < (strlen(s)) - n; i++)
		s[i] = s[i + n];
	for (j = 0; j < n; j++)
	{
		s[i] = a[j];
		i++;
	}
	a[i] = '\0';
	printf("移动后的结果为:");
	puts(s);

	return 0;
}