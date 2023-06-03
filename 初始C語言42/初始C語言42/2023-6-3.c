#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S tmp)
//{
//	tmp.a = 100;
//	tmp.c = 'w';
//	tmp.d = 3.14;
//}
//
//void Print2(struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = {0};
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	/*s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;*/
//	printf("%d\n", s.a);
//	return 0;
//}

struct S
{
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};

int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
	return 0;
}