#define _CRT_SECURE_NO_WARNINGS 1
//�ṹ��
#include <stdio.h>
//����һ��ѧ��
//����
//����
//�绰
//�Ա�

//struct �ṹ��ؼ��� stu - �ṹ���ǩ  struct Stu - �ṹ������
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];//
//	short age;//
//	//����һ���ṹ������
//	char tele[12];//
//	char sex[5];//
//}Stu; //s1, s2, s3;//������ȫ�ֵĽṹ�����
//int main()
//{
//	Stu s1 = {"����",20,"11111111111","��"};//�ֲ�����
//	struct Stu s2 = {"����",20,"333333333","����"};
//	              //�����ṹ�����
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100, 'w', "hello wrold", 3.14}, arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf",t.s.d);//3.14
//	printf("%s\n", t.pc);//hello bit
//	return 0;
//}

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];//
//	short age;//
//	//����һ���ṹ������
//	char tele[12];//
//	char sex[5];//
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "����", 40, "15598886688","��" };
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
//�ṹ�崫��Ҫ���ṹ��ĵ�ַ

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	return 0;
//}

//���ݽṹ
//�������ݽṹ - ˳��� ���� ջ  ����
//�������ݽṹ - ������
//ͼ��

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//����


//Debug ---- ���԰汾 -- ����Աʹ�õ�
//release ---- �����汾 -- �û�ʹ�õ�

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}
// 
// 
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		printf("%d\n", i);
//	}
//	for (i = 0; i <= 100; i++)
//	{
//		printf("%d", 10 - i);
//	}
//	return 0;
//}
//F5 - ��������-��F9���ʹ�õ�
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

	return 0;
}