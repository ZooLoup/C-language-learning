#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	double d= 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	//int a = 10; //���ڴ�������4���ֽڵĿռ�
//	////printf("%p\n", &a);
//	//int *p = &a;//p��һ������ - ָ�����
//	////printf("%p\n", p);
//	//*p = 20;//* - �����ò�����/��ӷ��ʲ�����
//	//printf("a = %d\n", a);
//
//	return 0;
//}


//�ṹ��
//char int double...
//��  ��  - ���Ӷ���
//���Ӷ��� -- �ṹ�� - �����Լ����������һ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};

int main()
{
	struct Book b1 = { "C���Գ������", 55 };
	strcpy(b1.name, "C++");//�ַ�������
	printf("%s\n", b1.name);
	return 0;
}
//
//int main()
//{
	//���ýṹ������-����һ�������͵Ľṹ�����
	/*struct Book b1 = {"C���Գ������", 55};
	struct Book* pb = &b1;*/
	//����pb��ӡ���ҵ������ͼ۸�
	//.  �ṹ�����.��Ա
	//-> �ṹ��ָ��->��Ա
	/*printf("%s\n", pb->name);
	printf("%d\n", pb->price);*/
	/*printf("%s\n", (*pb).name);
	printf("%s\n", (*pb).price);*/
	/*printf("����:%s\n", b1.name);
	printf("�۸�:%d\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�:%d\n", b1.price);*/
	//return 0;
//}