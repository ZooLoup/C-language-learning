#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���һ����ǡ�õ��ڳ������������������֮�ͣ���������ͳ�Ϊ���������磬6��������1��2��3����6=1+2+3������6������������1000�������е������������
//int main()
//{
//	int n = 10000;
//	int i = 0;
//	int j = 0;
//	int r = 0;
//
//	for (i = 1; i <= 10000; i++)
//	{
//		r = 0;
//		for (j = 1; j < i; j++) //������֮��
//			if (i % j == 0)
//				r += j;
//		if (r == i)
//			printf("%d\n", r);
//	}
//	return 0;
//}

//�����1+(1+2)+(1+2+3)+����+(1+2+3+����+n)
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int i, j;
//	int k;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		k = 0;
//		for (j = 1; j <= i; j++)
//			k = k + j;
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}

//2.
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	scanf("%d", &n);
//	for (i = 0; i <= n; i++)
//	{
//		k = k + i;
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		printf("\n");
//		for (j = 1; j <= i; j++)
//		{
//			sum = i * j;
//			printf("%d*%d=%-3d", i, j, sum);
//		}
//	}
//	return 0;
//}

//��36��ש����36���˰᣻����һ�ΰ�4�飬Ů��һ�ΰ�3�飬����С��̧һ�飬Ҫ��һ�θպ�ȫ�����ꡣ�����ˣ�Ů�ˣ�С�������٣�
//int main()
//{
//	int women,men,children;
//	for (men = 0; men < 9; men++)
//	{
//		for (women = 0; women < 12; women++)
//		{
//			children = 36 - women - men;
//			if (4 * men + 3 * women + 1 / 2 * children == 36 && children % 2 == 0)
//			{
//				printf("����:%d\n", men);
//				printf("Ů��:%d\n", women);
//				printf("С��:%d\n", children);
//			}
//		}
//	}
//	return 0;
//}

//���ӵ�һ��ժ�����ɸ����ӣ���������һ��룬���ò�����ֶ����һ�����Ժ�ÿ�춼�Ե�ǰһ��ʣ���ӵ�һ���һ��������ʮ��ʱ����ֻʣ��һ�������ˣ����һ�칲ժ�˶������ӣ�
//int main()
//{
//	int i;
//	int n = 1;
//	for (i = 9; i >= 1; i--)
//		n = (n + 1) * 2;
//		printf("%d", n);
//	return 0;
//}

//int main()
//{
//	int i, x = 1;
//	for (i = 9; i > 0; i--)
//		x = (x + 1) * 2;
//		printf("��һ��һ��ժ��%d������", x);
//	return 0;
//}

//��һ����������2/1,3/2,5/3,8/5,����,�ӵڶ��ʼ��ÿһ��ķ���Ϊǰһ��ķ������ĸ֮�ͣ�ÿһ��ķ�ĸΪǰһ��ķ��ӣ������������е�ǰn��֮�͡�
int main()
{
	int a = 2;
	int b = 1;
	int t = 0;
	int i = 0;
	int n = 0;
	double sum = 0;
	printf("������n��ֵ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + 1 * a / b;
		t = a;
		a = a + b;
		b = t;
	}
	printf("sum=%f\n", sum);
}