#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��һ������������η������3λ��������a^b�η��������λ����Ҫ��a,b�Ӽ������롣
//int main()
//{
//	int i, a, b;
//	int m = 1;
//	printf("������a��b:");
//	scanf("%d%d",&a,&b);
//	for (i = 1; i <= b; i++)
//	{
//		m = m * a;
//		m = m % 1000;
//	}
//	printf("%d", m);
//	return 0;
//}

//���ʵ��:����3��m֮������������ƽ����֮��
//ֻҪm����2-sqrtm��������������������������Ҫ������ѭ������ѭ������ѭ�����δ���ÿ��������ѭ���жϸ����Ƿ�λ����������ǣ�����ƽ������ӡ�
#include <math.h>
int main()
{
	int n, k, i, m;
	double sum = 0.0;
	printf("������m:");
	scanf("%d", &m);
	for ("n=3;n<=m;n++")
	{
		k = sqrt((double)n);
		for (i = 2; i <= k; i++)
			if (n % i == 0)
				break;
		if (i > k)
			sum = sum + sqrt((double)n);
	}
	printf("sum=%lf\n", sum);
	return 0;
}