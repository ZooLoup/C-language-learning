#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//��һ���������������������Ԫ�ص�ַ
//	//�ڶ��������������������Ԫ�ظ���
//	//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
//	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
//	return 0;
//}
//ʵ��bubble_sort�����ĳ���Ա�������Ƿ�֪��δ���������������-��֪��

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
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width);
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽ����������е�Ԫ��
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//}

//int main()
//{
//	//����������Ԫ�صĵ�ַ
//	//1.sizeof(������) - ��������ʾ��������
//	//2.&������ - ��������ʾ��������
//
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));   //16 sizeof(������)-������������ܴ�С - ��λ
//	printf("%d\n", sizeof(a+0)); //4 - �����������ʾ��Ԫ�ص�ֵ��a+0������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(*a));  //4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4
//	printf("%d\n", sizeof(a+1)); //4/8 - �����������ʾ��Ԫ�ص�ֵ��a+1�ڶ���Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(a[1]));//4 - �ڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&a));  //4/8 &aȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С����4/8�ֽ�
//	printf("%d\n", sizeof(*&a)); //16 - &a������ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С��λ���ֽ�
//	printf("%d\n", sizeof(&a+1));//4/8 - &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
//	printf("%d\n", sizeof(&a[0]));//4/8 &a[0]�ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0]+1));//4/8 &a[0]+1 �ǵڶ���Ԫ�صĵ�ַ
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));   //sizeof������������С��6*1��6���ֽ�
//	printf("%d\n", sizeof(arr+0)); //4/8 arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ����ַ�Ĵ�С��4/8�ֽ�
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr+1));   //4/8 &arr+1 ���������������ĵ�ַ����ַ��С
//	printf("%d\n", sizeof(&arr[0]+1));//4/8 �ڶ���Ԫ�صĵ�ַ
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//���ֵ
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
//	printf("%d\n", sizeof(arr));  //7 arr�ǵ�������sizeof�ڲ��������������Ĵ�С
//	printf("%d\n", sizeof(arr+0));//4/8���ֽ� ������ǵ�ַ�Ĵ�С-arr+0����Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr)); //1 *arr����Ԫ�� sizeof(*arr)���������Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(arr[1]));//1 arr[1]�ǵڶ���Ԫ��
//	printf("%d\n", sizeof(&arr));  //4/8 &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ��������4/8���ֽ�
//	printf("%d\n", sizeof(&arr+1));//4/8 &arr+1���������������ĵ�ַ����Ҳ�ǵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�صĵ�ַ
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
//		printf("%d\n", strlen(&arr));   //&arr - ����ĵ�ַ-����ָ�� char (*p)[7]
//		printf("%d\n", strlen(&arr+1));
//		printf("%d\n", strlen(&arr[0] + 1));
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8 - ����ָ�����p�Ĵ�С
//	printf("%d\n", sizeof(p+1));//4/8 - p+1 �õ������ַ�b�ĵ�ַ
//	printf("%d\n", sizeof(*p));//1 *p�����ַ�������Ԫ��
//	printf("%d\n", sizeof(p[0]));//1 int arr[10]; arr[0]==
//	printf("%d\n", sizeof(&p));//4/8		
//	printf("%d\n", sizeof(&p+1));//4/8
//	printf("%d\n", sizeof(&p[0]+1));//4
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//��a��ʼ�����
//	printf("%d\n", strlen(p + 1));//
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));	//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//���ֵ
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