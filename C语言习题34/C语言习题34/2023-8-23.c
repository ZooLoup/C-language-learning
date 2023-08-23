#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//3.输入一个字符串，从中查找'k'，若找到，则输出"已找到"!否则输出没找到.
//int main()
//{
//	char str[100];
//	char* p;
//	int flag = 0;
//	puts("请输入一个字符串: ");
//	gets(str);
//	p = str;
//	while (*p != '\0')
//	{
//		if (*p == 'k')
//		{
//			flag = 1;
//			break;
//		}
//		p++;
//	}
//	if (flag == 1)
//		printf("已找到!\n");
//	else
//		printf("没找到!\n");
//	return 0;
//}

//采用指针变量作为形参，编写一个实现两字符交换的函数。在主函数中输入一字符串，调用字符交换函数将其中的字符按从小到大的顺序排序后输出。
//思路:采用顺序表比较法排序。第一趟将第一个字符与其后的每个字符进行比较，将次小的字符排到第2的位置……直到结束。
#include <stdio.h>
int main()
{
	char str[80], i, j;
	void swap(char* pa, char* pb);
	printf("请输入两个字符串:");
	gets(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = i + 1; str[j] != '\0'; j++)
		{
			if (str[i] > str[j])
				swap(&str[i], &str[j]);

		}
		printf("排序后的字符串:%s\n",str);
	}
	return 0;
}
void swap(char* pa, char* pb)
{
	char t;
	t = *pa;
	*pa = *pb;
	pb = t;
}