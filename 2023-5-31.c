#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//char short int long float double 
//�������-C�Z���Լ������



//�Y���w
//��һ���Y���w���
//��һ���W����ͣ�����ͨ�^�W����́�����P�I�W��׃��������
//�����W��������-����+�Ԓ+�Ԅe+���g
//struct Stu  //stu �˺�
//{
//	char name[20];//����
//	char tele[12];//�Ԓ      //�ɆT׃��
//	char sex[10];//�Ԅe
//	int age;
//}s4,s5,s6;
//
//struct Stu s3;//ȫ��׃��
//int main()
//{
//	//�����ĽY���w׃��
//
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//�������
//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//};
//
//int main()
//{
//	return 0;
//}

//�Y���w��������
//struct Node
//{
//	int data;
//	struct Node n;
//};
//
//int main()
//{
//	return 0;
//}

//typedef struct Node
//{
//	int data;//4
//	struct Node* next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//struct T
//{
//	double wegith;
//	short age;
//};
//struct S
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	//struct S s = { 'c',100,3.14,"hello bit" };
//	struct S s = { 'c',{55.6, 30},100,3.14,"hello bit"};
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	return 0;
//}

//�Y���w�ڴ挦�R

struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};

int main()
{
	struct S1 s1 = {0};
	printf("%d\n", sizeof(s1));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));

	return 0;
}