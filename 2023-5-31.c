#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//char short int long float double 
//内置類型-C語言自己的類型



//結構體
//聲明一個結構體類型
//聲明一個學生類型，是想通過學生類型來出啊關鍵學生變量（對象）
//描述學習：屬性-名字+電話+性別+年齡
//struct Stu  //stu 標簽
//{
//	char name[20];//名字
//	char tele[12];//電話      //成員變量
//	char sex[10];//性別
//	int age;
//}s4,s5,s6;
//
//struct Stu s3;//全局變量
//int main()
//{
//	//創建的結構體變量
//
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//特殊的聲明
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

//結構體的自引用
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

//結構體内存對齊

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