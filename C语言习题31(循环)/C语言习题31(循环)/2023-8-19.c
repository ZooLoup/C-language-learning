#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��д��һ���ݹ麯�������¶���ʽ��ֵ��Ҫ����������������x��n��ֵ������������p132
//float p(int n, int x)
//{
//	float f;
//	if (n == 0)
//		f = 1.0;
//	else if (n == 1)
//		f = x;
//	else
//		f = ((2 * n - 1) * x * p((n - 1), x) - (n - 1) * p((n - 2), x)) / n;
//	return f;
//}
//int main()
//{
//	int n, x;
//	printf("������n��x��ֵ");
//	scanf("%d%d",&n,&x);
//	printf("���Ϊ:%6.2f\n",p(n,x));
//	return 0;
//}
//
//һά�����б�����1����С����������������У���д�����������۰���ҷ���������m�������е�λ�á����ҵ����򷵻����±�ֵ����ֳ������ʾû�ҵ���
//�۰���ҷ��Ļ���˼��ʱ:ÿ�β���ǰ��ȷ�������д���Ԫ�ص��±귶Χlow-high(low<high)��Ȼ���m���м�λ��(mid=(low+high)/2)Ԫ�ص�ֵ���бȽϡ����m��ֵ�����м�λ��Ԫ�ص�ֵ������һ�εĲ��ҷ�Χ����mid+1-high֮�䣬��֮����һ�εĲ��ҷ�Χ����low-mid-1֮�䣬ֱ��low>high,���ҽ�����
#define N 10
int fun(int a[], int m)
{
	int low = 0, high = N - 1, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (m < a[mid])
			high = mid - 1;
		else if (m > a[mid])
			low = mid + 1;
		else
			return (mid);

	}
	return (-1);
}
int main()
{
	int i, a[N], k, m;
	printf("������%d����:",N);
	for (i = 0; i < N; i++)
		scanf("%d",&a[i]);
	printf("������Ҫ���ҵ���:");
	scanf("%d",&m);
	k = fun(a, m);
	if (k >= 0)
	{
		printf("%d���±����Ϊ:%d\n", m, k);
	}
	else
	{
		printf("û�ҵ�!\n");
	}
}