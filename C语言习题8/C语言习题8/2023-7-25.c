#define _CRT_SECURE_NO_WARNINGS 1
//p66
//��дĳ��ҵ����������¼ϵͳ��������������������ʾ�������������������롱�����������������3�Σ�����ʾ�����˻��쳣��������24��Сʱ�������������ȷ������ʾ��������֤ͨ������
//#include <stdio.h>
//int main()
//{
//	int pw, i = 0;
//	while (i < 3)
//	{
//		printf("���������:");
//		scanf("%d", &pw);
//		if (pw != 123456)
//		{
//			printf("�����������������롣");
//			i++;
//		}
//		else
//		break;
//
//	}
//	if (i == 3)
//		printf("���˻��쳣��������24��Сʱ��");
//	else
//		printf("������֤ͨ����");
//	return 0;
//}

//����printf("*");����ѭ������д���򣬴�ӡ�����İ�;
//*
//**
//***
//****
//*****
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("*");
//			printf("\n");
//	}
//	return 0;
//}

//�Ӽ����������ɸ��ַ���ֱ����Enter��Ϊֹ���ֱ�Ŷͳ������Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
//#include <stdio.h>
//int main()
//{
//	char c = 0;
//	int letters = 0;
//	int space = 0;
//	int digit = 0;
//	int other = 0;
//	printf("������һ������:");
//	while (((c=getchar()))!= '\n')
//	{
//		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//			letters++;
//		else if (c == ' ')
//			space++;
//		else if (c >= '0' && c <= '9')
//			digit++;
//		else
//			other++;
//	}
//	printf("Ӣ����ĸ��%d��\n�ո���%d��\n������%d��\n�����ַ���%d��",letters,space,digit,other);
//	return 0;
//}

//��������ë��ӽ��б���������3���ˡ��׶�Ϊa,b,c,�Ҷ�Ϊx,y,z����һ������ͨ����ǩ����������������ǩ�����:a����x��,c����x,z�ȣ��������3��ѡ�ֵĶ���������
//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	for (a = 'x'; a <= 'z'; a++)
//	{
//		for (b = 'x'; b <= 'z'; b++)
//		{
//			if(a!=b)
//				for (c = 'x'; c <= 'z'; c++)
//				{
//					if (c != a && c != b)
//					{
//						if (a != 'x' && c != 'x' && c != 'z')
//							printf("a-%c b-%c c-%c", a, b, c);
//					}
//				}
//		}
//	}
//	return 0;
//}

//��֪abc+cba=1333������a,b,c��Ϊһλ��������������������a,b,c��������ϡ�
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= 9; b++)
//		{
//			for (c = 1; c <= 9; c++)
//			{
//				if ((a * 100 + b * 10 + c) + (c * 100 + b * 10 + a) == 1333)
//					printf("a=%d b=%d c=%d\n", a, b, c);
//			}
//		}
//	}
//	return 0;
//}

//�κ�һ����Ȼ��n������������д��n����������֮�͡�
//1^3=1
//2^3=3+5
//3^3=7+9+11
//4^3=13+15+17+19
//���ʵ�ִӼ�������һ����Ȼ��n�������n^3��n����������
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int m = 0;
//	printf("����һ����:\n");
//	scanf("%d", &n);
//	m = (n * n - n) / 2;
//	printf("%d������=", n);
//	for (i = 1; i < 2 * n - 1; i = i + 2)
//		printf("%d+", 2 * m + i);
//	printf("%d\n", 2 * m + i);
//	return 0;
//}

