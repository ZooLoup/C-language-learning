#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	/*int a = 0;
//	char b = 'w';
//	int arr[10] = { 0 };
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));*/
//
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	//int a = 0;
//	////~ ���������ƣ�λȡ��
//	//printf("%d\n", ~a);
//
//	int a = 11;
//	//1011
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//printf("%d\n", ++a);//ǰ��++����++����ʹ��
//	printf("%d\n", a++);//����++����ʹ�ã���++
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//int a=int(3.14);
//
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	//i = a++ && ++b && d++;//a++ֵΪ�� ������������ ֱ��Ϊ�� ����ľͲ������� 
//	i = a++ || ++b || d++;// || ������� �����Ľ����Ȼ�������Ժ����û��Ҫ��
//
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//
//	b = (a > 5 ? 3 : -3);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	max = (a > b ? a : b);//��Ŀ������
//	return 0;
//}

//���ű��ʽ
//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;
//	1 + 2;
//	return 0;
//}

//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//���ú�����ʱ���()���Ǻ������ò�����
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//ѧ��
//int float
//������һ���ṹ������-struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1,����ʼ��
//	struct Stu s1 = {"����", 20 ,"2019010305"};
//	struct Stu* ps = &s1;
//
//	printf("%s\n", ps->name);
//	printf("%s\n", ps->age);
//	//�ṹ��ָ�� - ��Ա��
//
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);*/
//
//	//printf("%s\n", s1.name);
//	//printf("%s\n", s1.age);
//	//printf("%s\n", s1.id);
//
//	return 0;
//}

//���ʽ��ֵ
//int main()
//{
//	char a = 3;
//	//000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//000000000000000000001111111
//	//01111111 - b
//	
//	//a��b������
//	//000000000000000000000000011
//	//000000000000000000001111111
//	//000000000000000000010000010
//	char c = a + b;
//
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0x6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}
// 
// 
//������������
//1.�����������ȼ�
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b + a * 3;//�˺ŵ����ȼ���,����˺�
//	return 0;
//}

//2.�������Ľ����
// a*b + c*d + e*f//������ı��ʽ
//3.��ֵ˳��

int main()
{
	int i = 1;
	int a = (++i) + (++i) + (++i);
	printf("a=%d\n", a);
	return 0;
}