#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a;
//	int* pa;
//	void (*p)(char*) = Print;
//	return 0;
//}

//(*(void (*)())0)();//��0ǿ������ת����:void(*)() ����ָ������ - 0����һ�������ĵ�ַ
//����0��ַ���ĸú���
//signal��һ����������
//signal�����Ĳ�������������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int,����������void
//signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��
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
//	//ָ������
//	int* arr[5];
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//	int (*pa)(int, int) = Add;//Sub//Mul//Div
//	int(*parr[4])(int, int) = {Add,Sub,Mul,Div};//����ָ�������
//	int i = 0;
//	for (i == 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
//1.дһ������ָ��pf���ܹ�ָ��my_strcpy
// char* (*pf)(char*,const char*)
//2.дһ������ָ������ pfArr,�ܹ����4��my_strcpy
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
//			printf("��ѡ��:>");
//			scanf("%d", &input);
//			if (input >= 1 && input <= 5)
//			{
//				printf("����������������:>");
//				scanf("%d%d", &x, &y);
//				int ret = pfArr[input](x, y);
//				printf("%d\n", ret);
//			}
//			else if (input == 0)
//			{
//				printf("�˳�\n");
//			}
//			else
//			{
//				printf("ѡ�����");
//			}
//			
//		} while (input);
//}

//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	do
//	{
//		int input = 0;
//		menu();
//		printf("��ѡ��:>");
		//scanf("%d", &input);
		//printf("����������������:>");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p[10]) = &arr;//ȡ������ĵ�ַ
//	int(*pf)(int, int);//����ָ������
//	int (*pfArr[4])(int, int);//pfArr��һ������ - ����ָ�������
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr��һ������ָ�룬ָ��ָ����������ĸ�Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int, int)
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
//qsort - ���������������͵�����
int main()
{
	//ð��������
	//ð��������ֻ��������������
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}