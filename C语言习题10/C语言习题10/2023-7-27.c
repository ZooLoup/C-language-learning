#define _CRT_SECURE_NO_WARNINGS 1
//����һ�������������㲢�������������ĸ�λ����֮�͡�
//#include <stdio.h>
//int main()
//{
//	int number = 0;
//	int sum = 0;
//	printf("������һ��������:");
//	scanf("%d", &number);
//	while (number > 0)
//	{
//		sum = sum + number % 10;
//		number = number / 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//����һ��������5λ������������1.���Ǽ�λ����2.�ϳ���������������������磺���ԭ����123�������321.
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int num = 0;
//	int reverse = 0;
//	int count = 0;
//	printf("������һ��������5λ��������: ");
//	scanf("%d", &num);
//	while (num!=0)
//	{
//		i = num % 10;
//		reverse = reverse * 10 + i;
//		num = num / 10;
//		count++;
//	}
//	printf("����%dλ��\n������Ϊ:%d", count, reverse);
//	return 0;
//}

//�Ӽ������������ַ���ֱ����EnterΪֹ,�ֱ�ͳ������+,-,*,/,%,�ո�������ַ��ĸ�����
//#include <stdio.h>
//int main()
//{
//	 int add=0, sub=0, mul=0, div=0, mod=0, space=0, other=0;
//	 char i = 0;
//	printf("������һ���ַ�:");
//	while ((i = getchar()) != '\n')
//	{
//		switch (i)
//		{
//		case '+':
//			add++;
//			break;
//		case '-':
//			sub++;
//			break;
//		case '*':
//			mul++;
//			break;
//		case '/':
//			div++;
//			break;
//		case '%':
//			mod++;
//			break;
//		case ' ':
//			space++;
//			break;
//		default:
//			other++;
//		}
//	}
//	printf("�Ӻ�:%d ����:%d �˺�:%d ����:%d �ٷֺ�:%d ����:%d", add, sub, mul, div, mod, space, other);
//	return 0;
//}

//�Ӽ��������������������㲢������������������Լ����
#include <stdio.h>
int main()
{
	int m, n, r, t;
	printf("��������������:");
	scanf("%d%d", &m, &n);
	if (m < n)
	{
		t = m;
		m = n;
		n = t;
	}
	r = m % n;
	while (r != 0)
	{
		m = n;
		n = r;
		r = m % n;
	}
	printf("���Լ����:%d\n", n);
	return 0;
}