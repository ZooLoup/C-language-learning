#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//��дһ������������ͳ��һ���ַ��е��ʵĸ���������֮���ÿո�ֿ�����������������һ���ַ���Ȼ������Զ��庯�������ͳ�ƽ����
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
//	printf("������һ���ַ���:");
//	gets(str);
//	printf("ԭ�ַ���Ϊ:");
//	puts(str);
//	printf("���ʵĸ�����:%d\n",count(str));
//	return 0;
//}
//����ͳ�Ƶ��ʸ�����д��һ�������������б���mΪ���ʼ�������flagΪ��־���������Ա�ʶ�Ƿ�����µ��ʣ��ո����ֵ�һ����ĸʱ��ʾ�����µ��ʣ�����ʼʱ��flag��Ϊ1����ʾֻҪ����һ����ĸ����һ���µ��ʣ���m��1��������־flag��Ϊ0����ʾ���ŵ���ĸ����һ���µ��ʡ������ֿո�ʱ���ٽ�flag��Ϊ1���Ժ�һ������һ����ĸ������һ���µ��ʡ����ú���ʱ��ʵ������str[]���׵�ַ�����ݸ��β�����ch[],�������鹲ռ��ͬ���ڴ浥Ԫ��


//��дһ��������������һ����ά���飨M*N��ת�á���������������һ����ά���飨M*N���������Զ��庯����������������������
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
//	printf("�����������е�Ԫ��:");
//	for (i = 0; i < M; i++)
//		for (j = 0; j < N; j++)
//			scanf("%d",a[i][j]);
//	convert(a, b);
//	printf("ת�ú������ֵ:\n");
//	for (i = 0; i < N; i++)
//		for (j = 0; j < M; j++)
//			printf("%d",b[i][j]);
//	printf("\n");
//	return 0;
//}

//��дһ����Fibonacci����ĳһ��ĵݹ麯������������������N,�����Զ��庯�������Finbonacci���е�ǰn�Fibonacci����������������:���еĵ�һ����Ϊ0���ڶ�����Ϊ1���Ժ�ÿ����Ϊ��ǰ����֮�ͼ���0,1,1,2,3,5,8,13,����,n;
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
	printf("������Fibonacci���е���: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		printf("%d ",fib(i));
}