#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//编写程序,从键盘输入职工人数及每位职工的信息，包括：职工号，姓名和工薪，输出所有职工的平均工资及工资低于2000.00元的职工信息。要求采用数组和动态存储分配两种方法来实现。
//struct worker
//{
//	char num[10];
//	char name[10];
//	float salary;
//};
//int main()
//{
//	struct worker* p, * p1;
//	int n, i;
//	float sum = 0;
//	printf("请输入职工人数:");
//	scanf("%d",&n);
//	p1 = (struct worker*)malloc(sizeof(struct worker) * n);
//	p = p1;
//	for (i = 0; i < n; i++)
//	{
//		printf("请输入第%d个职工的信息(职工号，姓名和工资)\n",i+1);
//		scanf("%s%s%f",p->num,p->name,&(p->salary));
//		sum = sum + p->salary;
//		p++;
//	}
//	printf("所有人的平均工资是:%.2f\n",sum/n);
//	printf("工资低于2000.00元的职工信息:\n");
//	p = p1;
//	printf("职工号\t姓名\t工资\n");
//	for (i = 0; i < n; i++)
//	{
//		if ((p->salary) < 2000)
//			printf("%s\t%s\t%.2f\n",p->num,p->name,p->salary);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	char s[10];
//	int n;
//	int fun(char* s);
//	printf("请输入不超过9个字符的数字串: ");
//	gets(s);
//	n = fun(s);
//	printf("对应的整数为: %d\n",n);
//}
//int fun(char* s)
//{
//	int len, i, k, n = 0;
//	len = strlen(s);
//	for (i = 0; i < len; i++)
//	{
//		k = s[i] = '0';
//		n = n * 10 + k;
//	}
//	return n;
//}

int main()
{
	char str[30];
	int strlen1(char*);
	printf("请输入字符串: ");
	gets(str);
	printf("字符串长度为: %d\n",strlen1(str));
}
int strlen1(char* p)
{
	int len = 0;
	while (*p != '\0')
	{
		len++;
		p++;
	}
	return len;
}