#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <string.h>

//int main()
//{
//	//const - ������
//	//const���εĳ�����
//	//const int n = 10;//n�Ǳ������������г�����
//	//n = 20;
//	//const int num = 4;
//	//printf("%d\n", sum);
//	//num = 8;
//	//printf("%d\n", sum);
//	//3;//���泣��
//	//100;
//	//3.14;
//
//	return 0;
//}


//#define ����ı�ʶ������
//#define MAX 10 //����һ������
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}


//4.ö�ٳ���
//ö��:һһ�о�
//�Ա�;�У�Ů������
//��ԭɫ:��
//enum Sex
//{
//	MALE,
//    FEMALE,
//    SECRET
//};
////MALE,FEMALE,SECRET - ö�ٳ���
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	return 0;
//}

//enum Color
//{
//	RED,
//	YELLO,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;
//	return 0;
//}


//�ַ�������
//int main()
//{
//	"abcdef";
//	"hello world";
//	"";//�ַ���
//	return 0;
//}

//int main()
//{
	//�����ڼ�����ϴ洢��ʱ�򣬴洢���Ƕ�����
	//a - 97
	//A - 65
	//...
	//ASCII ����
	//ASCII ��ֵ
	//char arr1[] = "abc";//����
	//char arr2[] = {'a','b', 'c', '\0'};
	////"abc" -- 'a' 'b' 'c' '\0'
	//printf("%s\n", arr2);
	//printf("%s\n", arr1);
	//return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));//strlen �����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//	//3   ���ֵ
//}

//int main()
//{
//	printf("abc\n");
//	return 0;
//}

//int main()
//{
//	printf("c:\\test\\32\\test.c");
//	//\t - ˮƽ�Ʊ��
//	return 0;
//}

//int main()
//{
//	//printf("%c\n", 'a');
//	printf("%s\n", "abc");
//	return 0;
//}

//int main()
//{
	//printf("%c\n", '\x61');
	//printf("%d\n", strlen("c:\test\32\test.c"));
	//\32 -- 32��2��8��������
	//printf("%c\n", '\132');
	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII���Ӧ���ַ�
	//32 -- > ʮ���� 26 ->��ΪASCII��ֵ��Ӧ���ַ�
	//return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("����\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0)>:");
//	scanf("%d", &input);
//}


//ѭ��
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 20000);
//	{
//	    printf("��һ�д���:%d\n", line);
//	    line++;
//	}
//	printf("��offer\n");
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	//sum = a + b; 
//	sum = Add(num1, num2);
//	//sum = num1 + num2;
//	//sum = a + b;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,9,10};
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//�±�ķ�ʽ����Ԫ��
//	//arr[�±�]
//	return 0;
//}

//����������
//int main()
//{
//	int a = 5 % 2;//ȡģ
//	printf("%d\n", a);
//	return 0;
//}

//��λ������
//int main()
//{
//	//<<����
//	//>>����
//	int a = 1;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//(2����)λ����
//	//& ��λ��
//	//|  ��λ��
//	//^  ��λ���
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	//011
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;//=��ֵ   == �ж����
//	a = a + 10;//1
//	a += 10;//2
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 20;
//	//���ϸ�ֵ��
//	//+= -= *= /= %=
//	return 0;
//}

//��Ŀ������
//˫Ŀ������
//��ľ������
//int main()
//{
//	/*int a = 10;
//	int b = 120;
//	a + b;*///+����һ��������,�������߸���һ������������˫Ŀ������
//	//c�����б�ʾ���
//	//0-��ʾ��
//	//��0-��
//	//int a = 0;
//
//	int a = -2;
//	int b = -a;
//	int c = +3;//+�Ŷ���ʡ��
//
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}

//int main()
//{
	//int arr[10] = { 0 };//10������Ԫ�ص�����
	//int sz = 0;
	//10*sizeof(int) = 40;
	// ���������Ԫ�ظ���
	// ���� = �����ܴ�С/ÿ��Ԫ�صĴ�С
	//sz = sizeof(arr) / sizeof(arr[0]);
	//printf("sz = %d\n", sz)
	//int a = 10;
	////sizeof ������Ǳ���/������ռ�ռ�Ĵ�С
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof int (a));
	//return 0;
//}