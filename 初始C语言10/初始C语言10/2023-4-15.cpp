#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//�ж�
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//		printf("count = %d\n", count);
//	}
//	return 0;
//}

//�������
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//���ֵ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//��ӡ�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��������Ϸ
//#include <time.h>
//void menu()
//{
//	printf("*************************************\n");
//	printf("****   1 . play        0 .  exit ****\n");
//	printf("*************************************\n");
//}
//void game()
//{
//	//1.���������
//	int ret = 0;
//	int guess = 0;
//	//��ʱ����������������������ʼ��
//	//time_t time()
//	//srand(2);
//	//ʱ���
//	//��ǰ�������ʱ�� - ���������ʼʱ��
//	ret = rand()%100+1;//����1=100֮��������
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while(input);
//	return 0;
//}
//goto�����ò�Ҫ��
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//���� system() - ִ��ϵͳ����
//	system("shutdown -s -t 60");
//again;
//	printf("��ע��,��ĵ�����1�����ڹػ�,�������:��������ȡ���ػ�\n ������>:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1���Ӻ�ػ�,�������:������,��ȡ���ػ�\n ������>:");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0);
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}




//����
#include <stdio.h>

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
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

#include <string.h>
//int main()
//{
//	//strcpy - string copy - �ַ�������
//	//strlen - string lenth - �ַ��������йص�
//	char arr1[] = "bit";
//	char arr2[20] = "############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	//***** world
//	return 0;
//}

//���庯��
int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max = %d\n", max);
	return 0;
}