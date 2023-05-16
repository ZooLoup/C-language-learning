#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//第一个参数：待排序数组的首元素地址
//	//第二个参数：待排序数组的元素个数
//	//第三个参数：待排序数组的每个元素的大小-单位是字节
//	//第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
//	return 0;
//}
//实现bubble_sort函数的程序员，他们是否知道未来排序的数据类型-不知道

//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void*e1,void*e2 ))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width);
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用bubble_sort的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较排序数组中的元素
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//}

//int main()
//{
//	//数组名是首元素的地址
//	//1.sizeof(数组名) - 数组名表示整个数组
//	//2.&数组名 - 数组名表示整个数组
//
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));   //16 sizeof(数组名)-计算的是数组总大小 - 单位
//	printf("%d\n", sizeof(a+0)); //4 - 数组名这里表示首元素的值，a+0还是首元素地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(*a));  //4 - 数组名表示首元素地址，*a就是首元素，sizeof(*a)就是4
//	printf("%d\n", sizeof(a+1)); //4/8 - 数组名这里表示首元素的值，a+1第二个元素的地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(a[1]));//4 - 第二个元素的大小
//	printf("%d\n", sizeof(&a));  //4/8 &a取出的是数组的地址，但是数组的地址也是地址，地址的大小就是4/8字节
//	printf("%d\n", sizeof(*&a)); //16 - &a是数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小单位是字节
//	printf("%d\n", sizeof(&a+1));//4/8 - &a是数组的地址。&a+1虽然地址跳过整个数组，但还是地址，所以是4/8个字节
//	printf("%d\n", sizeof(&a[0]));//4/8 &a[0]是第一个元素的地址
//	printf("%d\n", sizeof(&a[0]+1));//4/8 &a[0]+1 是第二个元素的地址
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));   //sizeof计算的是数组大小，6*1是6个字节
//	printf("%d\n", sizeof(arr+0)); //4/8 arr是首元素的地址，arr+0还是首元素的地址，地址的大小是4/8字节
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr+1));   //4/8 &arr+1 是跳过整个数组后的地址，地址大小
//	printf("%d\n", sizeof(&arr[0]+1));//4/8 第二个元素的地址
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(&arr));//
//	printf("%d\n", strlen(arr+0));
//	//printf("%d\n", strlen(*arr));err
//	//printf("%d\n", strlen(arr[1]));err
//	printf("%d\n", strlen(&arr+1));
//	printf("%d\n", strlen(&arr[0]+1));
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));  //7 arr是单独放在sizeof内部，计算的是数组的大小
//	printf("%d\n", sizeof(arr+0));//4/8个字节 计算的是地址的大小-arr+0是首元素的地址
//	printf("%d\n", sizeof(*arr)); //1 *arr是首元素 sizeof(*arr)计算的是首元素的地址
//	printf("%d\n", sizeof(arr[1]));//1 arr[1]是第二个元素
//	printf("%d\n", sizeof(&arr));  //4/8 &arr虽然是数组的地址，但也是地址，所以是4/8个字节
//	printf("%d\n", sizeof(&arr+1));//4/8 &arr+1是跳过整个数组后的地址，但也是地址
//	printf("%d\n", sizeof(&arr[0] + 1));//第二个元素的地址
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//		printf("%d\n", strlen(arr));    //6
//		printf("%d\n", strlen(arr+0));  //6 
//		//printf("%d\n", strlen(*arr)); //err
//		printf("%d\n", strlen(arr[1])); //err
//		printf("%d\n", strlen(&arr));   //&arr - 数组的地址-数组指针 char (*p)[7]
//		printf("%d\n", strlen(&arr+1));
//		printf("%d\n", strlen(&arr[0] + 1));
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8 - 计算指针变量p的大小
//	printf("%d\n", sizeof(p+1));//4/8 - p+1 得到的是字符b的地址
//	printf("%d\n", sizeof(*p));//1 *p就是字符串的首元素
//	printf("%d\n", sizeof(p[0]));//1 int arr[10]; arr[0]==
//	printf("%d\n", sizeof(&p));//4/8		
//	printf("%d\n", sizeof(&p+1));//4/8
//	printf("%d\n", sizeof(&p[0]+1));//4
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//从a开始向后数
//	printf("%d\n", strlen(p + 1));//
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));	//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//随机值
//	return 0;
//}

int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0]+1));
	printf("%d\n", sizeof(*(a[0]+1));
	printf("%d\n", sizeof(a+1));
	printf("%d\n", sizeof(*(a+1));
	printf("%d\n", sizeof(&a[0]+1));
	printf("%d\n", sizeof(*(&a[0]+1));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));
	return 0;
}