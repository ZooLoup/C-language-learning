#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
	//int* p = (int*)malloc(40);
	//if (p == NULL);
	//{
	//	return 0;
	//}
	////ʹ�ÿռ�
	//int* p2 = realloc(p, 80);
	//if (p2 != NULL)
	//{
	//	p = p2;
	//}
	//int* p = realloc(NULL, 40);//malloc
	/*return 0;
}*/

//int main()
//{
	//1.��NULLָ��Ľ����ò���
	/*int* p = malloc(40);
	*p = 10;*///mallloc���ٿռ�ʧ��-��NULLָ������ò���

	//2.�Զ�̬���ٿռ��Խ�����
	//int* p = (int)malloc(40);
	//if (p != NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//Խ�����
	/*for (i = 0; i <= 10; i++)
	{
		*(p + i) = i;
	}
	free(p);
	p = NULL;
	return 0;*/
//}
//3.
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//���տռ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//ʹ��
//	//�ͷ�
//	free(p);
//	free(p);
//
//	return 0;
//}

//6.��̬�����ڴ������ͷ�(�ڴ�й¶)
//#include <windows.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//		Sleep(1000);
//	}
//}


//���������
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GerMemory(str);
//	strcpy(str, "helloc world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//1.���д���������ֱ���������
//2.��������ڴ�й¶������
//str��ֵ���ݵ���ʽ��p
//p��GetMemory�������βΣ�ֻ�ܺ����ڲ���Ч
//��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷŲ����޷��ҵ������Ի�����ڴ�й¶

//�ڶ��ָ�����ʽ
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	GerMemory(str);
//	strcpy(str, "helloc world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//
//	return 0;
//}

//void test()
//{
//	static int a = 10;//ջ��
//	return &a;
//}
//int main()
//{
//	int*p = test();
//	*p = 20;
//	return 0;
//}

//int* test()
//{
//	int* ptr = malloc(100);
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
	int main()
	{
		Test();

		return 0;
	}