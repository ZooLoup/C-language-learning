#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	int b = a + 1;
//	return 0;
//
//}

//#define MAX(X,Y) (X)>(Y)?(X):(Y)
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	//int max = ((a++) > (b++) ? (a++) : (b++));
//	printf("%d\n", max);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//
//}
//1.º¯Êý
//int Max  (int x, int y)
//{
//	return (x > y ? x : y);
//}
//int Max2(float x, float y)
//{
//	return (x > y ? x : y);
//}
////2.ºê
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 3.0f;
//	float d = 4.0f;
//	int max = Max(c, d);
//	printf("max=%d\n", max);
//	max = Max(c, d);
//	printf("max=%d\n", max);
//	/*int max = Max(a, b);
//	printf("max=%d\n", max);
//	max = Max(a, b);
//	printf("max=%d\n", max);*/
//	return 0;
//}

//#define TEST(x,y) printf("test\n")
//int main()
//{
//	TEST();
//	TEST();
//	TEST();
//	return 0;
//}

//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	int ret = sizeof(int);
//	printf("%d\n", ret);
//	return 0;
//}

//#define MALLOC(num, type)(type*)malloc(num*sizoef(type))
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	int* p = MALLOC(10, int);
//	//int* p = (int*)malloc(10 * sizeof(int));
//	return 0;
//}

//#define MAX 100
//
//int main()
//{
//	printf("MAX= %d\n", MAX);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef	DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}
