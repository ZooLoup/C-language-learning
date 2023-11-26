#define _CRT_SECURE_NO_WARNINGS 1
//输入一个整数，按如下图形特点打印星图
#include <stdio.h>
//int main()
//{
//	int i, j, n;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n - i; j++)
//			printf(" ");
//		for (j = 1; j <= i * 2 - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//键盘输入字符串到ch1中，希望将ch1中字符串从第n位开始连续 拷贝x位到ch中，并输出ch2中字符串，补全程序。
//int main()
//{
//	char ch1[100], ch2[100];
//	char* q = 0;
//	char* p = 0;
//	int n, x;
//	scanf("%s",ch1);
//	scanf("%d%d",&n,&x);
//	p = p + n - 1;
//	while (x--)
//		*q++ = *p++;
//	*q = '\0';
//	puts(ch2);
//	return 0;
//}

//N人参加自由操比赛，6名裁判进行打分（分值含小数），打分后去掉一个最低分和最高分，其余4个成绩之和为参赛者最终得分。打分完毕后依次输出每个参赛者数据。补全程序。
//数据输入格式：张三 成绩 1 2 3 4 5 6（空格分割）
//数据输出格式：张三总分：xx.x

#define N 10
typedef struct
{
	char name[10];
	float result;
}Diver;
void main()
{
	Diver ds[10];
	float max, min, sum, score[6];
	int i, j;
	for (i = 0; i < N; i++)
	{
		scanf("%s", ds[i].name);
		for (j = 0; j < 6; j++)
		{
			scanf("%f", &score[j]);
			sum += score[j];
		}

		for (j = 0; j < 6; j++)
		{
			max = score[0];
			if (score[j] > max)
				max = score[j];
			min = score[0];
			if (score[j] < min)
				min = score[j];
		}
		ds[i].result = (sum - max - min) / 4;
	}
	for (i = 0; i < N; i++)
	{
		printf("%s总分:%1.f",ds[i].name,ds[i].result);
	}
	return 0;
}