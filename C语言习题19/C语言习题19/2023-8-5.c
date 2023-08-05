#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//设某班级每位同学有3门课程的考试成绩，采用二维数组编程实现从键盘输入每个同学的成绩，并计算其平均成绩后输出。
//#define MAX 100
//int main()
//{
//	int n, i, j;
//	double grade[MAX][4];
//	printf("请输入学生人数:");
//	scanf("%d",&n);
//	for (i = 0; i < n; i++)
//	{
//		printf("请输入第%d学生的三科成绩:",i+1);
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%lf",&grade[i][j]);
//			grade[i][3] = (grade[i][0] + grade[i][1] + grade[i][2]) / 3;
//		}
//		for (i = 0; i < n; i++)
//		{
//			printf("序号:%d\n 课程1:%lf\n 课程2:%lf\n 课程3:%lf\n 平均分:%lf\n",i+1,grade[i][0],grade[i][1],grade[i][2],grade[i][3]);
//		}
//	}
//	return 0;
//}

//编程实现从键盘输入两个字符串，比较两者的长度，并输出较长的字符串。要求不能调用库函数strlen().
//int main()
//{
//	char a[20], b[20], n1, n2,i;
//	printf("请输入第一个字符串:");
//	gets(a);
//	printf("请输入第二个字符串:");
//	gets(b);
//	for (i = 0; a[i] != '\0'; i++)
//		n1 = i;
//	for (i = 0; b[i] != '\0'; i++)
//		n2 = i;
//	if (n1 > n2)
//		printf("较长的字符串是:%s\n",a);
//	else
//		printf("较长的字符串是:%s\n",b);
//	return 0;
//}

//编程实现从键盘输入一个字符串和一个字符，统计该字符串中指定字符出现的次数。
//int main()
//{
//	char a[50], b;
//	int i = 0, count = 0;
//	printf("请输入一个字符串:");
//	gets(a);
//	printf("请输入一个字符:");
//	scanf("%c",&b);
//	while (a[i])
//	{
//		if (a[i] == b)
//			count++;
//		i++;
//	}
//	printf("%d\n",count);
//	return 0;
//}

//编程实现从键盘输入一个字符串，统计该字符串从"a"到"z"26个小写字母出现的次数，将结果存入数组中，并输出。
//#define N 100
//int main()
//{
//	int i, j = 0, c[26] = {0};
//	char str[N];
//	printf("请输入一个字符串:");
//	gets(str);
//	for(i=0;i<strlen(str);i++)
//		for(j=0;j<26;j++)
//			if (str[i] == 'a' + j)
//			{
//				c[j]++;
//				break;
//			}
//	for (i = 0; i < 26; i++)
//		printf("%c-%d ",'a'+i,c[i]);
//	return 0;
//}