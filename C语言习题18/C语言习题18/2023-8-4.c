#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
//设某班每位同学有3门课程的考试成绩，采用二维数组编程实现从键盘输入每个同学的成绩，并计算其平均成绩后输出。
#define MAX 100
int main()
{
	int i, j, n;
	double score[MAX][4];
	printf("请输入学生人数:");
	scanf("%d",n);
	for (i = 1; i <= n; i++)
	{
		printf("请输入第%d学生的三科成绩:",i);
		for (j = 1; j <= 3; j++)
		{
			scanf("%lf",&score[i][j]);
			score[i][4]=(score[i][])
		}
	}
	return 0;
}