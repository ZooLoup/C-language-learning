#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
//1.��ǰ����֪�����ڴ��ʹ�÷�ʽ
//1.����һ������
//int a = 10;//�ֲ����� - ջ��
//int g_a=10;//ȫ�ֱ��� - ��̬��
//struct S
//{
//	char name[20];
//	int age
//};
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct S arr[50];//50��strucr S���͵�����
//	//30 - �˷�
//	//60 - ����
//	
//	return 0;
//}

//c�����ǿ��Դ����䳤����� -C99��������

int main()
{
	//���ڴ�����10�����εĿռ�
	int* p = (int*)malloc(INT_MAX+1);
	if (p == NULL)
	{
		//��ӡ����ԭ���һ����ʽ
		printf("%s\n", strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//
	//����̬����Ŀռ䲻��ʹ��ʱ
	//��Ӧ�û�������ϵͳ
	free(p);
	return 0;
}