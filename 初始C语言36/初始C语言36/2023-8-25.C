#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//编写程序，从键盘输入月份号，输出该月的英文名。例如:若输入“5”,则输出“May”，要求用指针数组实现
//int main()
//{
//	char* month[] = { "January","Feberary","March","April","May","June","July","August","September","October","November","December" };
//	int m;
//	printf("请输入月份值(1-12之间的整数):");
//	scanf("%d",&m);
//	printf("对应的月份英文名称是:%s\n",month[m-1]);
//	return 0;
//}

//编写程序,从键盘输入职工人数及每位职工的信息，包括：职工号，姓名和工薪，输出所有职工的平均工资及工资低于200000元的职工信息。要求采用数组和动态存储分配两种方法来实现。
struct worker
{
	char num[10];
	char name[10];
	float salary;
};
int main()
{
	struct worker w[100];
	*p = w;
	int n;
	int i;
	float sum = 0;
	printf("请输入职工人数:");
	scanf("%d",&n);
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个职工的信息(职工号，姓名和工资)\n",[i+1]);
		scanf("%s%s%f",p->num,p->name,&(p->salary));
		sum = sum + p->salary;
		p++;
	}
	printf("所有人的平均工资是:%2.f",sum/n);
	printf("工资低于2000.00元的职工信息:\n");
	p = w;
	printf("职工号\t姓名\t工资\n");
	for (i = 0; i < n; i++)
	{
		if ((p->salary) < 2000)
			printf("%s\t%s\t%.2f\n",p->num,p->name,p->salary);
		p++;
	}
	return 0;
}