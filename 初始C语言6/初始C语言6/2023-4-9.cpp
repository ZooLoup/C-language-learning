#define _CRT_SECURE_NO_WARNINGS 1
//��֧��ѭ�����
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	;//�����-�����
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else(age > 90);
//		printf("�ϲ���\n");
	/*int age = 10;
	if (age < 18)
		printf("δ����,��ֹ����\n");
	else
		printf("����,���Է���\n");*/
	//return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//	//else�������������δƥ���ifƥ��
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//	//if (num = 5) // = ��ֵ == �ж����
//	//{
//	//	printf("�Ǻ�\n");
//	//}
//	return 0;
//}

//��ϰ
//1.�ж�һ�����Ƿ�Ϊ����
//2.���1-100֮�������
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d", i);
//		i++;
//		return 0;
//	}
//}

//int main()
//{
	/*int day = 0;
	scanf("%d", &day);
	if (day == 1)
		pritnf("����һ\n");
	else if (2 == day)
		printf("���ڶ�\n");
	else if (3 == day)
		printf("������\n");
	return 0;*/

	//switch case ���
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//}

//int main()
//{
//	//while(1)
//	int i = 1;
//	//printf("%d", i);
//	//i++;
//	while (i < 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

int main()
{
	int ch = 0;
	//CRTL + Z
	//EOF - end of file -> -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	//int ch = getchar();
	//putchar(ch);
	//printf("%c\n", ch);
	return 0;
}