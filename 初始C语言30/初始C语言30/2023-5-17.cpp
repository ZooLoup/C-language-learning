#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 a[0]相当于第一行作为一维数组的数组名，sizeof(arr[0])把数组名单位放在sizeof()内，计算的是第一行的大小
//	printf("%d\n", sizeof(a[0]+1));//4 - a[0]是第一行的数组名，数组名此时是首元素的地址，其实就是第一行第一个元素的地址，所以a[0]+1就是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0]+1)));//是第一行第二个元素  大小是4个字节
//	printf("%d\n", sizeof(a+1));    //a是二维数组的数组名，没有Sizeof（数组名）也没有&（数组名），也没有&（数组名），所以a是首元素地址,而二维数组看出一维数组时，二维数组的首元素是他的第一行，a就是第一行（首元素）的地址
//	printf("%d\n", sizeof*(a+1));  //16 - sizeof(a[1])
//	printf("%d\n", sizeof(&a[0]+1));//4 第二行的地址
//	printf("%d\n", sizeof(*(&a[0]+1)));//16 计算第二行的大小，单位是字节
//	printf("%d\n", sizeof(*a));   //a是首元素地址-第一行的地址，*a就是第一行
//	printf("%d\n", sizeof(a[3]));
//
//}

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d\n", *(a + 1), *(ptr - 1));
	return 0;
}