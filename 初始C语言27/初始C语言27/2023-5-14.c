#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a;
//	int* pa;
//	void (*p)(char*) = Print;
//	return 0;
//}

//(*(void (*)())0)();//把0强制类型转换成:void(*)() 函数指针类型 - 0就是一个函数的地址
//调用0地址处的该函数
//signal是一个函数声明
//signal函数的参数有两个，第一个是int。第二个是函数指针，该函数指针指向的函数的参数是int,返回类型是void
//signal函数的返回类型也是一个函数指针，该函数指针
//void(*signal(int, void(*)(int)))(int);
//
//typedef void(*pfun_t)(int);
//
//pfun_t signal(int, pfun_t);
//
//typedef unsigned int unit;

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
//	int(*pa)(int, int) = Add;
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", Add(2, 3));
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//	int (*pa)(int, int) = Add;//Sub//Mul//Div
//	int(*parr[4])(int, int) = {Add,Sub,Mul,Div};//函数指针的数组
//	int i = 0;
//	for (i == 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
//1.写一个函数指针pf，能够指向my_strcpy
// char* (*pf)(char*,const char*)
//2.写一个函数指针数组 pfArr,能够存放4个my_strcpy
//char* (*pfArr[4])(char *,const char *)

//void menu()
//{
//	printf("**********************\n");
//	printf("***  1.add   2.sub  **\n");
//	printf("***  3.mul   4.div  **\n");
//	printf("***  5.xor   0.exit      **\n");
//	printf("**********************\n");
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int Sub(int x, int y)
//{
//	return x-y;
//}
//
//int Mul(int x, int y)
//{
//	return x*y;
//}
//
//int Div(int x, int y)
//{
//	return x/y;
//}
//
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[6])(int, int) = { 0, Add, Sub, Mul, Div, Xor };
//		do
//		{
//			menu();
//			printf("请选择:>");
//			scanf("%d", &input);
//			if (input >= 1 && input <= 5)
//			{
//				printf("请输入两个操作数:>");
//				scanf("%d%d", &x, &y);
//				int ret = pfArr[input](x, y);
//				printf("%d\n", ret);
//			}
//			else if (input == 0)
//			{
//				printf("退出\n");
//			}
//			else
//			{
//				printf("选择错误");
//			}
//			
//		} while (input);
//}

//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	do
//	{
//		int input = 0;
//		menu();
//		printf("请选择:>");
		//scanf("%d", &input);
		//printf("请输入两个操作数:>");
		//scanf("%d%d", &x, &y);

//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//			//printf("%d\n", Add(x, y));
//		case 2:
//			Calc(Sub);
//			break;
//			//printf("%d\n", Sub(x, y));
//		case 3:
//			Calc(Mul);
//			break;
//			//printf("%d\n", Mul(x, y));
//		case 4:
//			Calc(Div);
//			break;
//			//printf("%d\n", Div(x, y));
//		case 0:
//			break;
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p[10]) = &arr;//取出数组的地址
//	int(*pf)(int, int);//函数指针数组
//	int (*pfArr[4])(int, int);//pfArr是一个数组 - 函数指针的数组
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr是一个数组指针，指针指向的数组有四个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*)(int, int)
//		return 0;
//}

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

void BubbleSort(int arr[], int sz)
{

}
//qsort - 可以排序任意类型的数据
int main()
{
	//冒泡排序函数
	//冒泡排序函数只能排序整形数组
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}