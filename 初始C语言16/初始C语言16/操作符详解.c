#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	double a = 5 / 2;//��2��1
//	printf("a=%lf\n", a);
//	return 0;
//}

//int main()
//{
	/*int a = -1;
	a >> 1;*/// >> -���Ʋ�����
	//�ƶ����Ƕ�����λ
	//���Ʋ�����
	//1.��������
	//�ұ߶�������߲�ԭλ���� 
	//2.�߼�����
	//�ұ߶�������߲�0
    //�����Ķ����Ʊ�ʾ��ԭ�룬���룬����
	//�洢���ڴ��е��ǲ���
	/*int a = -1;
	int b = a >> 1;
	printf("%d\n", b);
	return 0;
}*/

//int main()
//{
	//& - ��2����λ��
	/*int a = 3;
	int b = 5;
	int c = a & b;
	printf(" % d\n", c);*/

	//| - ��������λ��
	/*int a = 3;
	int b = 5;
	int c = a | b;
	printf("%d\n", c);*/

	//��������λ���
	//��ͬΪ0������Ϊ1
	/*int a = 3;
	int b = 5;
	int c = a ^ b;
	printf("%d\n", c);
	return 0;
}*/


//���������������Ҳ�������ʱ����
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int tmp = 0;
//	printf("before:a=%d b=%d\n", a, b);
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//
//	//�Ӽ���-���ܻ����
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("atfer : a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;//a 011 b 101  110
//	b = a ^ b;//  110   101  011
//	a = a ^ b;//  110   011  101
//	printf("after : a=%d b=%d\n", a, b );
//	return 0;
//}

//��д���룬��һ������������ڴ��ж�����1�ĸ���
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> 1) & 1))
//			count++;
//	}
	//32bit
	// 
	//ͳ��num�Ĳ������м���1
	// 
	// 
	//while (num)
	//{
	//	if (num % 2 == 1)
	//		count++;
	//	num = num / 2;
	//}



//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	if (a)
//	{
//		printf("�Ǻ�\n");
//	}
//	if (!a)
//	{
//		printf("�Ǻ�\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;//�����ò�����
//	return 0;
//}

int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof(c));//1

	printf("%d\n", sizeof(p));//8  32λƽ̨���ĸ��ֽ�  64λƽ̨��8���ֽ�

	printf("%d\n", sizeof(arr));//40

	return 0;
}