#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}
//循环进行0次

//do..while循环
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//练习
//1.计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		//n的阶乘
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//写一个代码，在arr数组中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是: %d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}



//折半查找算法
// 
// 
// 
//二分查找算法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//
//	while (left <= right)
//{
//		int mid = (left + right) / 2;
//	if (arr[mid] > k)
//	{
//		right = mid - 1;
//	}
//	else if (arr[mid] < k)
//	{
//		left = mid + 1;
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", mid);
//		break;
//	}
//}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}



//int main()
//{
	//welcome to bit!!!
	//#################
	//w###############!
	//we#############!!
	//wel###########!!!
	//...
	//welcome to bit!!!

	//char arr[]= "abc";
	//[a b c \0]
	//0 1 2 3
	//4-1
	// 
	// 
	// 
	// 
	//char arr1[] = "welcome to bit!!!!!!";
	//char arr2[] = "####################";
	//int left = 0;
	////int right = sizeof(arr1)/sizeof(arr1[0])-2;//err  '\0'
	//int right = strlen(arr1)-1;
	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	//休息一秒
	//	Sleep(1000);
	//	system("cls");//执行系统命令的一个函数-cls - 清空屏幕
	//	left++;
	//	right--;
	//}
	//printf("%s\n", arr2);
	//return 0;
//}

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)// == 不能用来比较两个字符串相等,应该使用一个库函数-strcmp
		{
			printf("登录成功\n");
			break;
		}
	}
	if (i == 3)
		printf("三次密码输入错误，退出程序");
	return 0;
}