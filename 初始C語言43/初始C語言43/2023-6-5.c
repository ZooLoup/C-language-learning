#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//struct S
//{
//	int a : 2;
//	int b : 2;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//enum Sex
//{
//	//ö�e�Ŀ���ȡֵ
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
//	/*enum Sex s = MALE;
//	enum Color c = BlUE;*/
//
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}

//��-���w-��ͬ�w

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	return 0;
//}

int check_sys()
{
	int a = 1;
	//����1����ʾС��
	//����0����ʾ���
	return *(char*)&a;
}
int main()
{
	int a = 1;
	int ret = check_sys();
	if (1 == *(char*)&a)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	//int a = 0x11223344;
	//�͵�ַ----------->�ߵ�ַ
	//....[][][][][11][22][33][44];......����ֹ���惦ģʽ
	//....[][][][][44][33][22][11];......С���ֹ���惦ģʽ
	//ӑՓһ�������������ڴ��еĴ�ŵ��ڴ攵��
	//��С���ֹ����}
	//

	return 0;
}