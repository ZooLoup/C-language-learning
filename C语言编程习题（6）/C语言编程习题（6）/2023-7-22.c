#define _CRT_SECURE_NO_WARNINGS 1
//���ʵ�ִӼ�������k����1^2+2^2+3^2+����+k^2
#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	scanf("%d",&k);
//	for (i = 1; i <= k; i++)
//	{
//		sum = sum + i * i;
//		printf("sum=%d\n", sum);
//	}
//	return 0;
//}

//�������k��ֵ��k��������ͳ��������������͸����ĸ�����
//int main()
//{
//	int k, a=0, b=0, c=0, i, z;
//	printf("������k��ֵ:");
//	scanf("%d", &k);
//	for (i = 1; i <= k; i++)
//	{
//		printf("�������%d����:",i);
//		scanf("%d", &z);
//		if (k > 0)
//			a++;
//		else if (k = 0)
//			b++;
//		else
//			c++;
//	}
//	printf("������%d��\n������%d��\n����%d��\n",a,c,b);
//	return 0;
//}

//������1-200�����ܱ��������Ҹ�λ��Ϊ6��������
//int main()
//{
//	int x = 0,i;
//	for (i = 1; i <= 200; i++)
//	{
//		if (i % 3 == 0 && i % 10 == 6)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//�����1-1/2+1/3-1/4+����+1/99-1/100
//int main()
//{
//	int i = 0;
//	int sign = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + sign * 1 / i;
//		sign = -sign;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//�����e=1+1/1!+1/2!+����+1/n!
//int main()
//{
//	int i = 0;
//	double j = 1.0;
//	double sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		j = j * i;
//		sum = sum + 1 / j;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	double m = 1.0;
//	double e = 1.0;
//	while (1 / m >= 1e-5)
//	{
//		m = m * i;
//		e = e + 1 / m;
//		i++;
//	}
//	printf("e=%lf", e);
//	return 0;
//}

//��������������m��n�����������С������.
//˼·����С�������϶���m��n�����������������k=m,��k���ܹ���m��n����ʱ���ͽ�k��1��ֱ���ܹ���m��n����Ϊֹ����ʱ��k��Ϊ��С������.
//int main()
//{
//	int m, n, k;
//	printf("��������������m��n:");
//	scanf("%d%d", &m, &n);
//	k = m;
//	while (k % n != 0 || k % m != 0)
//	{
//		k++;
//	}
//	printf("%d\n",k);
//	return 0;
//}

//˼·2����С�������϶�ʱm��n������������ʹm>n,�������k=m,�ٽ�kÿ������m����k�ܹ���n����ʱ��k��Ϊ��С���������÷���ѭ��ִ�еĴ������٣������Ч����ߡ�
//int main()
//{
//	int m, n, k,t;
//	printf("��������������m��n:");
//	scanf("%d%d", &m, &n);
//	if (m < n)
//	{
//		t = m;
//		m = n;
//		n = t;
//	}
//	k = m;
//	while (k % n != 0)
//	{
//		k += m;
//	}
//	printf("k=%d\n", k);
//	return 0;
//}

//�Ӽ����������ɸ�ѧ���ĳɼ���ѧ������δ֪�������븺��ʱ��ʾ������������������ѧ������߷֡�
int main()
{
	int i = 0;
	int score = 0;
	int max = 0;
	while (score >= 0)
	{
		printf("������ѧ���ɼ�:",i+1);
		scanf("%d", &score);
		if (score > max)
		{
			score = max;
			i++;
		}
		printf("%d\n", score);
	}
	return 0;
}