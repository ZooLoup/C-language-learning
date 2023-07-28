#define _CRT_SECURE_NO_WARNINGS 1
//从键盘输入10个整数到数组中去，求其中整数的个数及其平均值。（结果精确到后两位）
#include <stdio.h>
//int main()
//{
//	int a[10] = {0};
//	int i = 0;
//	int k = 0;
//	float sum = 0;
//	printf("请输入10个整数:");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] > 0)
//		{
//			sum += a[i];
//			k++;
//		}
//	}
//	printf("整数的个数有:%d\n 平均值是:%.2f", k, sum / k);
//	return 0;
//}

//编程从键盘输入若干个学生的成绩，输入负数时表示输入结束，输出平均成绩和低于平均分的学生成绩，其中平均值精确到小数点后两位。
int main()
{
	int a[100] = { 0 };
	int score = 0;
	int i = 0;
	int n = 0;
	float sum = 0;
	float ave = 0;
	printf("请输入学生的成绩:");
	while ((score = getchar()) >= 0)
	{
		sum += score;
		a[i] = score;
		i++;
	}
	n = i;
	ave = sum / n;
	printf("平均分为:%2.lf", ave);
	printf("低于平均分的学生成绩: \n");
	for (i = 0; i < n; i++)
	{
		if (a[i] < ave)
			printf("%d",a[i]);
	}
	return 0;
}