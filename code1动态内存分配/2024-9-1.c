#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S arr[50];//50个struct S类型的数据
//	//30 浪费
//	//60 不够
//	return 0;
//}

//C语言是可以创建变长数组 C99中增加了

//int main()
//{
//	//向内存申请10个整型的空间
//	int *p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ",*(p+i));
//		}	
//	}
//
//	//当动态内存申请的空间不用就释放
//	free(p);
//	p = NULL;//避免犯错误，安全
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	//把空间的每个字节初始化为0
//	if (p = NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d",*(p+i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc
//调整动态开辟内存空间的大小
//int main()
//{
	//在使用malloc开辟的20个字节空间
	//假设这里，20个字节的空间不能满足我们使用了
	//希望能够有40个字节的空间
	//这里就可以用realloc来动态调整内存

	//realloc使用的注意事项:
	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
	//2.如果p只想的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
	//开辟一块满足需求的空间,并且把原来内存中的数据拷贝回来，释放旧的空间，最后返回新开辟的内存空间的地址
	//3.得用一个新的变量来接受realloc函数的返回值


//	int* p=(int *)malloc(20);
//
//
//	if (p = NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	int* p2 = realloc(p, 40);
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p2 + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//*常见错误
//1.对空指针的解引用
//int main()
//{
//	int* p = (int*)(malloc(40));
//	//万一malloc失败了，p就被赋值为
//	*p = 0;//error
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.对动态开辟的内存的越界访问
//int main()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.对非动态内存开辟的空间进行释放