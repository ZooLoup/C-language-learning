#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}
//ѭ������0��

//do..whileѭ��
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//��ϰ
//1.����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		//n�Ľ׳�
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//дһ�����룬��arr�������ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±���: %d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}



//�۰�����㷨
// 
// 
// 
//���ֲ����㷨
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//
//	while (left <= right)
//{
//		int mid = (left + right) / 2;
//	if (arr[mid] > k)
//	{
//		right = mid - 1;
//	}
//	else if (arr[mid] < k)
//	{
//		left = mid + 1;
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", mid);
//		break;
//	}
//}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}



//int main()
//{
	//welcome to bit!!!
	//#################
	//w###############!
	//we#############!!
	//wel###########!!!
	//...
	//welcome to bit!!!

	//char arr[]= "abc";
	//[a b c \0]
	//0 1 2 3
	//4-1
	// 
	// 
	// 
	// 
	//char arr1[] = "welcome to bit!!!!!!";
	//char arr2[] = "####################";
	//int left = 0;
	////int right = sizeof(arr1)/sizeof(arr1[0])-2;//err  '\0'
	//int right = strlen(arr1)-1;
	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	//��Ϣһ��
	//	Sleep(1000);
	//	system("cls");//ִ��ϵͳ�����һ������-cls - �����Ļ
	//	left++;
	//	right--;
	//}
	//printf("%s\n", arr2);
	//return 0;
//}

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)// == ���������Ƚ������ַ������,Ӧ��ʹ��һ���⺯��-strcmp
		{
			printf("��¼�ɹ�\n");
			break;
		}
	}
	if (i == 3)
		printf("����������������˳�����");
	return 0;
}