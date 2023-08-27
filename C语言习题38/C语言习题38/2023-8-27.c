#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//编写函数ltrinm()，用来删除字符串中的前导空格，中间和尾部的空格不删除。例如，字符串为"   A BC DEF",删除后的结果是"A BC DEF".要求函数形参采用指针变量。
//int main()
//{
//	void ltrim(char* a);
//	char s[100];
//	printf("请输入一个前面带空格的字符串:");
//	gets(s);
//	ltrim(s);
//	printf("删除前导空格后的结果:");
//	puts(s);
//	return 0;
//}
//void ltrim(char* a)
//{
//	char* p;
//	int i = 0;
//	p = a;
//	while (*p == ' ')
//		p++;
//	while (*p)
//	{
//		a[i] = *p;
//		p++;
//		i++;
//	}
//	a[i] = '\0';
//}

//已知学生的记录由学号和分数构成，从键盘输入若干名学生的数据，调用自定义函数fun()，找出分数最高的学生。要求采用结构体数组来保存学生的记录，通过形参指针将找到的结果传回主函数，在主函数中输出结果。
//#define N 3
//struct stu
//{
//	char num[10];
//	int score;
//};
//int main()
//{
//	struct stu a[N], m;
//	int i;
//	void fun(struct stu a[], struct stu* p);
//	printf("请输入%d个学生的信息:\n",N);
//	for (i = 0; i < N; i++)
//		scanf("%s%d",a[i].num,&a[i].score);
//	fun(a, &m);
//	printf("最高分的学生信息为:%s,%d\n",m.num,m.score);
//	return 0;
//}
//void fun(struct stu a[], struct stu* p)
//{
//	int i, j=0;
//	int max = a[0].score;
//	for (i = 1; i < N; i++)
//	{
//		if (max < a[i].score)
//		{
//			j = i;
//			max = a[i].score;
//		}
//		*p = a[j];
//	}
//}

//编写函数，将输入的一个整数转换为与之逆序的字符串。如整数1234，转换成字符串4321，整数-1234转换成字符串-4321.
//void main()
//{
//	int x, n;
//	char s[20], * p;
//	char m[30] = "-";
//	void divide(char* s, int xx);
//	void reverse(char* s);
//	printf("请输入一个整数：");
//	scanf("%d",&x);
//	n = abs(x);
//	divide(s, n);
//	reverse(s);
//	if (x < 0)
//		p = strcat(m, s);
//	else
//		p = s;
//	printf("整数%d转换后的字符串是:%s\n",x,p);
//}
//void divide(char* s, int xx)
//{
//	char* p;
//	int single;
//	p = s;
//	while (xx > 0)
//	{
//		single = xx % 10;
//		*p = single + '0';
//		p++;
//		xx = xx / 10;
//	}
//	*p = '\0';
//}
//void reverse(char* s)
//{
//	char t, * p, * q;
//	for (p = s, q = s + strlen(s) - 1; p < q; p++, q--)
//	{
//		t = *p;
//		*p = *q;
//		*q = t;
//
//	}
//}

//利用指向指针的指针和冒泡法对M*N矩阵进行处理，使每行元素按照从小到大的顺序排列。
//思路：矩阵采用M行N列的二维数组存储，定义一个指针数组，是其中每个元素分别指向矩阵每行的首元素，指向指针的指针p在指向指针数组。
#define M 3
#define N 4
int main()
{
	int a[M][N];
	int i;
	int j;
	int k;
	int t;
	int** p, * pa[M];
	printf("请输入矩阵元素:\n");
	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
			scanf("%d",&a[i][j]);
	for (i = 0; i < M; i++)
		pa[i] = a[i];
	p = pa;
	for(k=0;k<M;k++,p++)
		for(i=1;i<=N-1;i++)
			for(j=0;i<N-1;j++)
				if (*(*p + j) > *(*p + j + 1))
				{
					t = *(*p + j);
					*(*p = j) = *(*p + j + 1);
					*(*p + j + 1) = t;
				}
	printf("排序后的矩阵:\n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	return 0;
}