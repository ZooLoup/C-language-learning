//����һ����stdio.h���ļ�
//std-��׼standard i-input output 
#include <stdio.h>
//int�����ε���˼
//mainǰ���int��ʾmain�������ú󷵻ص�һ������ֵ
//int main()//��������FN+F10
//{
	//�����������
	//����Ļ�����hello world
	//����-printf function
	//�⺯��-c���Ա����ṩ������ʹ�õĺ���
	//printf("hehe\n");
	//return 0;//���� 0
//}

//void main()����д���ǹ�ʱ��д��

//int main()
//{
//	char ch = 'A';//'A';//�ڴ�
//	printf("%c", ch);//%c -- ��ӡ�ַ���ʽ������
	//20;
	//short int - ������
	//int - ����
	//int age = 20;
	//printf("%d", age);//%d -- ��ӡ����ʮ��������
	//long ������
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	//����
//	//20
//	short age = 20;//���ڴ����������ֽ�=18bitλ
//	float weight = 95.6f;//���ڴ�����4���ֽڣ����С��
//
//	return 0;
//}


//int num2 = 20;//ȫ�ֱ���-��������({})֮��ı���
//int main()
//{
//	int num1 = 10;//�ֲ�����-����������({})֮�ڵı���
//
//	return 0;
//}


//int a = 100;
//int main()
//{
//	int a = 10;
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-�������
//	//���ֲ�������ȫ�ֱ���������һ��ʱ���ֲ���������
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	//�����������ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������-ʹ�����뺯��
//	scanf_s("%d%d", &num1, &num2);//ȡ��ַ����&
//	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	//�ֲ�������������
//	//{
//		//int num = 0;
//	//}
//
//	int num = 0;
//	printf("num=%d\n", num);
//	return 0;
//}


//int global = 2020;
//void test()
//{
//	printf("test()-- % d\n" ,global);
//}
//int main()
//{
//	printf("%d\n", global);
//	return 0;
//}

//int main()
//{
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}


//��������
//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);
//	return 0;
//}
//���뿪ʼ����ȥ����