#define _CRT_SECURE_NO_WARNINGS 1
//����һ��������������ͼ���ص��ӡ��ͼ
#include <stdio.h>
//int main()
//{
//	int i, j, n;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n - i; j++)
//			printf(" ");
//		for (j = 1; j <= i * 2 - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//���������ַ�����ch1�У�ϣ����ch1���ַ����ӵ�nλ��ʼ���� ����xλ��ch�У������ch2���ַ�������ȫ����
//int main()
//{
//	char ch1[100], ch2[100];
//	char* q = 0;
//	char* p = 0;
//	int n, x;
//	scanf("%s",ch1);
//	scanf("%d%d",&n,&x);
//	p = p + n - 1;
//	while (x--)
//		*q++ = *p++;
//	*q = '\0';
//	puts(ch2);
//	return 0;
//}

//N�˲μ����ɲٱ�����6�����н��д�֣���ֵ��С��������ֺ�ȥ��һ����ͷֺ���߷֣�����4���ɼ�֮��Ϊ���������յ÷֡������Ϻ��������ÿ�����������ݡ���ȫ����
//���������ʽ������ �ɼ� 1 2 3 4 5 6���ո�ָ
//���������ʽ�������ܷ֣�xx.x

#define N 10
typedef struct
{
	char name[10];
	float result;
}Diver;
void main()
{
	Diver ds[10];
	float max, min, sum, score[6];
	int i, j;
	for (i = 0; i < N; i++)
	{
		scanf("%s", ds[i].name);
		for (j = 0; j < 6; j++)
		{
			scanf("%f", &score[j]);
			sum += score[j];
		}

		for (j = 0; j < 6; j++)
		{
			max = score[0];
			if (score[j] > max)
				max = score[j];
			min = score[0];
			if (score[j] < min)
				min = score[j];
		}
		ds[i].result = (sum - max - min) / 4;
	}
	for (i = 0; i < N; i++)
	{
		printf("%s�ܷ�:%1.f",ds[i].name,ds[i].result);
	}
	return 0;
}