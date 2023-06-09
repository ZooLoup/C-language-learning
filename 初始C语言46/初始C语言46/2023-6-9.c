#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//malloc(19*sizeof(int));
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态开辟的空间的
//	free(p)
//	p = NULL;;
//	return 0;
//}

//realloc
//调整动态开辟内存空间的大小

//int main()
//{
//	int* p = (int*)malloc(20);
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
	//就是在使用mallo开辟的20个字节空间
	//假设这里，20个字节不能满足我们的使用了
	//希望我们能够有40个字节的空间
	//这里就可以使用realloc来调整动态开辟的内存空间了

	//reallon使用的注意事项
	//1.如果p指向的空间之后有足够的内存空间可以追加
	//2.如果p志昂的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
	//开辟一块满足需求的空间，并且
	//把原来内存的数据拷贝回来，释放旧的内存空间
	//最后返回新开辟的内存空间地址
//	int* ptr = realloc(p, INT_MAX);
//	int* p2 = realloc(p, 40);
//	int i = 0;
//	for (p == NULL)
//	{
//		printf("%s\n", strerror());
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p2 + i));
//	}
//	return 0;
//}

//int main()
//{
	////1.对NULL进行解引用操作
	//int* p = (int*)malloc(40);
	////万一malloc失败了，p就被赋值为null
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;

//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p = NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

int a = 10;
int* p = &a;
*p = 20;
//3.对非动态开辟内存空间的释放