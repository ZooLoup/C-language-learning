#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main()
//{
//	unsigned char a = 200;//unsigned char -1个字节-8bitWei   0-255
//	unsigned char b = 100;
//	unsigned char c = 0;
//
//	//00000000000000000000000011001000 - a
//	//00000000000000000000000001100100 - b
//	//00000000000000000000000100101100 - c
//	//取八个比特位
//	//00101100 - c
//
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//	//300 44
//}

//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//-128 -->127
//	char a[1000] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//		//-1 -2 ... -128 127 126 ... 3 2 1 0 -1
//		printf("%d\n", strlen(a));
//		return 0;
//	}
//}
//
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//第七题
//题目名称
//猜凶手
//内容
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必位4个嫌疑人中的一个
//供词
//A说：不是我
//B说：是C
//C说：是D
//D说：C在胡说
//已知三个人说了真话，1个人说的是假话。

//#include <stdio.h>
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')==3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}

//赛马问题:有36匹马，6条跑道，没有计时器，请赛马确定，36匹马的前三名
//请问最少比赛几次



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1) && ((e == 4) + (a == 1) == 1))
//						{
//							printf("a=%d b=%d c=%d d=%d", a, b, c, d ,e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	free(p);
//	return 0;
//}

//int* fun(int a, int b);//函数声明
//int(*) fun(int a, int b);

A.int(*(*F)(int, int))(int)
B.int(*F)(int,int)
C.int(*(*F)(int,int))
D.*(*F)(int, int)(int)
