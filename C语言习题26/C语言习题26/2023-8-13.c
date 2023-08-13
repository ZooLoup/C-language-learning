#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//编写一个函数，用来统计一行字符中单词的个数，单词之间用空格分开。在主函数中输入一行字符，然后调用自定义函数，输出统计结果。
//int count(char ch[])
//{
//	int i;
//	int m = 0;
//	int flag = 1;
//	for (i = 0; ch[i] != '\0'; i++)
//	{
//		if (ch[i] == ' ')
//			flag = 1;
//		else if (flag == 1)
//		{
//			flag = 0;
//			m++;
//		}
//	}
//	return m;
//}
//int main()
//{
//	char str[1000];
//	int count(char ch[]);
//	printf("请输入一个字符串:");
//	gets(str);
//	printf("原字符串为:");
//	puts(str);
//	printf("单词的个数是:%d\n",count(str));
//	return 0;
//}
//程序将统计单词个数编写成一个函数。函数中变量m为单词计数器，flag为标志变量，用以标识是否出现新单词（空格后出现第一个字母时表示出现新单词）。开始时将flag记为1，表示只要出现一个字母就是一个新单词，对m加1，并将标志flag改为0，表示接着的字母不是一个新单词。当出现空格时，再将flag置为1，以后一旦出现一个字母就又是一个新单词。调用函数时，实参数组str[]的首地址被传递给形参数组ch[],两个数组共占相同的内存单元。


//编写一个函数，用来将一个二维数组（M*N）转置。在主函数中输入一个二维数组（M*N），调用自定义函数后，在主函数中输出结果。
//#define M 3
//#define N 4
//void convert(int a[][N], int b[][M])
//{
//	int i, j;
//	for (i = 0; i < M; i++)
//		for (j = 0; j < N; j++)
//			b[j][i] = a[i][j];
//}
//int main()
//{
//	int i, j, a[M][N], b[N][M];
//	printf("请输入数组中的元素:");
//	for (i = 0; i < M; i++)
//		for (j = 0; j < N; j++)
//			scanf("%d",a[i][j]);
//	convert(a, b);
//	printf("转置后数组的值:\n");
//	for (i = 0; i < N; i++)
//		for (j = 0; j < M; j++)
//			printf("%d",b[i][j]);
//	printf("\n");
//	return 0;
//}

//编写一个求Fibonacci数列某一项的递归函数，在主函数中输入N,调用自定义函数后输出Finbonacci数列的前n项。Fibonacci数列是这样的数列:数列的第一个数为0，第二个数为1，以后每个数为其前两数之和即，0,1,1,2,3,5,8,13,……,n;
#include <stdio.h>
int fib(int k)
{
	int f;
	if (k == 1)
		f = 0;
	else if (k == 2)
		f = 1;
	else
		f = fib(k - 1) + fib(k - 2);
	return 1;
}
void main()
{
	int n, i;
	printf("请输入Fibonacci数列的项: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		printf("%d ",fib(i));
}