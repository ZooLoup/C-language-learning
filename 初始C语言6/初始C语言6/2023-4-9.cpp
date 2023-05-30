#define _CRT_SECURE_NO_WARNINGS 1
//分支和循环语句
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	;//是语句-空语句
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else(age > 90);
//		printf("老不死\n");
	/*int age = 10;
	if (age < 18)
		printf("未成年,禁止访问\n");
	else
		printf("成年,可以访问\n");*/
	//return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//	//else会与与他最近的未匹配的if匹配
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//	//if (num = 5) // = 赋值 == 判断相等
//	//{
//	//	printf("呵呵\n");
//	//}
//	return 0;
//}

//练习
//1.判断一个数是否为奇数
//2.输出1-100之间的奇数
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d", i);
//		i++;
//		return 0;
//	}
//}

//int main()
//{
	/*int day = 0;
	scanf("%d", &day);
	if (day == 1)
		pritnf("星期一\n");
	else if (2 == day)
		printf("星期二\n");
	else if (3 == day)
		printf("星期三\n");
	return 0;*/

	//switch case 语句
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//}

//int main()
//{
//	//while(1)
//	int i = 1;
//	//printf("%d", i);
//	//i++;
//	while (i < 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

int main()
{
	int ch = 0;
	//CRTL + Z
	//EOF - end of file -> -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	//int ch = getchar();
	//putchar(ch);
	//printf("%c\n", ch);
	return 0;
}