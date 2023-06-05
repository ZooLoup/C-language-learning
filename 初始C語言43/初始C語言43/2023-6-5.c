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
//	//枚舉的可能取值
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

//聯合-聯合體-共同體

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
	//返回1，表示小端
	//返回0，表示大端
	return *(char*)&a;
}
int main()
{
	int a = 1;
	int ret = check_sys();
	if (1 == *(char*)&a)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	//int a = 0x11223344;
	//低地址----------->高地址
	//....[][][][][11][22][33][44];......大端字節序存儲模式
	//....[][][][][44][33][22][11];......小端字節序存儲模式
	//討論一個數據，放在内存中的存放的内存數據
	//大小端字節序問題
	//

	return 0;
}