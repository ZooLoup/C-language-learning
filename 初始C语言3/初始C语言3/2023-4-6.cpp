#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6, };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);//err
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) 5/ sizeof(arr[0]));
//	return 0;
//}

//����--ԭ�룬���룬������ͬ
// ����:
// ԭ��      -->     ����      -->      ����
// ֱ�Ӱ�������      ԭ��ķ���λ����   ����+1
//                   ����λ��λȡ��
// 
// //д���Ķ���������
//int main()
//{
//	int a = 0;//4���ֽ�  32������λ
//	int b = ~a;
//	//~ -- ��(2����)λȡ��
//	//1010
//	//0101
//	//�������ڴ��д洢��ʱ�򣬴洢�����������ԭ��
//	printf("%d\n", b);//ʹ�õģ���ӡ���������ԭ��
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	//int b = ++a;//ǰ��++����++����ʹ��
//	int b = a--;//����--����ʹ�ã���--
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//
//}

//
//int main()
//{
//	int a = (int)3.14;
//
//	return 0;
//}

//int main()
//{
//	//�� - ��0
//	//�� - 0
//	//&& - �߼���
//	//|| - �߼���
//	int a = 3;
//	int b = 5;
//	//int c = a && b;//aΪ�棬bҲΪ���Ϊ��
//	//int c = a || b;//��һ��Ϊ���Ϊ��;
//	printf("c = %d\n", c);
//	return 0;
//}

//��Ŀ������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
////	int arr[10] = { 0 };
////	arr[4];//[] - �±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//() - �������ò�����
//
//	return 0;
//}


//�ؼ���
// auto
//int main()
//{
//	auto int a = 10;//�ֲ�����--�Զ�����
//	return 0;
//}

//int main()
//{
//	//register int a = 10;
//	int a = 10;
//	a = -2;
//	//int ����ı������з��ŵ�
//	//signed int;
//	unsigned int num = 0;
//	return 0;
//}

//�ؼ���:typedef - ���Ͷ��� - �����ض���
//int main()
//{
//	//���� - ������� - int | ���˽���С�� -- u_int
//	typedef unsigned int u_int;//�������ض���
//	u_int num2 = 20;
//	unsigned int num = 20;
//
//	return 0;
//}

//�ؼ��� - static
//static ���ξֲ������
//1.�ֲ��������������ڱ䳤
//void test()
//{
//	//int a = 1;������
//	static int a = 1;//��̬�ľֲ�����
// 2.static ����ȫ�ֱ���
// �ı��˱�����������
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//extern - �����ⲿ����
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//3.Ҳ�Ǹı��˺�����������-��׼ȷ
//static���κ����ı��˺�������������
//�ⲿ�������� -> �ڲ���������
//�����ⲿ����
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#define ����ı�ʶ������
//#define MAX 100
//#define ���Զ����-������
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//��Ķ���
//#define MAX(X,Y) (X>Y?:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	//max = (a)
//	printf("max = %d\n", max);
//	return 0;
//}


//ָ��
//int main()
//{
//	int a = 10;
//	int *p = &a;//ȡ��ַ
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 20;//* - �����ò�����
//	printf("a = %d\n", a);
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%p\n", ch);
//	return 0;
//}
//ָ��Ĵ�С��32λƽ̨��4���ֽڣ���64λƽ̨����8���ֽ�