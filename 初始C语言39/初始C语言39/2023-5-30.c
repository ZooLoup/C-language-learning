#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//
//	//char* dest,const char*src
//	strcpy(arr2, arr1);
//	return 0;
//}
//void* - �����͵�ָ��
#include <stdio.h>
//#include <assert.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//
//	return ret;
//}

//C���Ա�׼��
//memcpy ֻҪ���� ���ص����ڴ濽���Ϳ���
//memmove �����ص��ڴ�Ŀ���

//void* my_memmove
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	my_memcpy(arr+2,arr)
//	my_memcpy(arr + 2, arr, 20);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"����",20},{"����",30} };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//}

//void* my_memcpy(void* dest,const void* src, size_t count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	int i = count;
//	while (i--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	
//}
//#include <string.h>
//
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//�� - ǰ
//	}
//	return ret;
//}
//int main()
//{
	//int arr1[] = { 1,2,3,4,5 };
	//int arr2[10] = { 0 };
	//arr1�е����ֿ�����arr2��
	//my_memcpy(arr2, arr1, sizeof(arr1));

	//int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };

	//my_memmove(arr3 + 2, arr3, 20);
	//my_memcpy����ʤ���ص�������
	//my_memcpy(arr3+2,arr3,20);

	//memmove����ʤ���ڴ���ص�����
	//memmove(arr3 + 2, arr3, 20);
	//C���Ա�׼˵:memcpy�������Կ������ص��ľͿ�����
	//���·���:VS2013�����µ�memcpy���Դ����ظ�������

	//return 0;
//}

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,5,4,3 };
	int ret = memcmp(arr1,arr2, 9);
	printf("%d\n", ret);

	return 0;
}