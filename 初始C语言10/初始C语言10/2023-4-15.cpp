#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//判断
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//		printf("count = %d\n", count);
//	}
//	return 0;
//}

//分数求和
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//最大值
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//打印乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//猜数字游戏
//#include <time.h>
//void menu()
//{
//	printf("*************************************\n");
//	printf("****   1 . play        0 .  exit ****\n");
//	printf("*************************************\n");
//}
//void game()
//{
//	//1.生成随机数
//	int ret = 0;
//	int guess = 0;
//	//拿时间戳来设置随机数的生成起始点
//	//time_t time()
//	//srand(2);
//	//时间戳
//	//当前计算机的时间 - 计算机的起始时间
//	ret = rand()%100+1;//生成1=100之间的随机数
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while(input);
//	return 0;
//}
//goto语句最好不要用
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//函数 system() - 执行系统命令
//	system("shutdown -s -t 60");
//again;
//	printf("请注意,你的电脑在1分钟内关机,如果输入:我是猪，就取消关机\n 请输入>:");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟后关机,如果输入:我是猪,就取消关机\n 请输入>:");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0);
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}




//函数
#include <stdio.h>

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

#include <string.h>
//int main()
//{
//	//strcpy - string copy - 字符串拷贝
//	//strlen - string lenth - 字符串长度有关的
//	char arr1[] = "bit";
//	char arr2[20] = "############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	//***** world
//	return 0;
//}

//定义函数
int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max = %d\n", max);
	return 0;
}