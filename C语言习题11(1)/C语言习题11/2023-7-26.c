#define _CRT_SECURE_NO_WARNINGS 1
//�Ӽ�������10��������������ȥ�������������ĸ�������ƽ��ֵ���������ȷ������λ��
#include <stdio.h>
//int main()
//{
//	int a[10] = {0};
//	int i = 0;
//	int k = 0;
//	float sum = 0;
//	printf("������10������:");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] > 0)
//		{
//			sum += a[i];
//			k++;
//		}
//	}
//	printf("�����ĸ�����:%d\n ƽ��ֵ��:%.2f", k, sum / k);
//	return 0;
//}

//��̴Ӽ����������ɸ�ѧ���ĳɼ������븺��ʱ��ʾ������������ƽ���ɼ��͵���ƽ���ֵ�ѧ���ɼ�������ƽ��ֵ��ȷ��С�������λ��
int main()
{
	int a[100] = { 0 };
	int score = 0;
	int i = 0;
	int n = 0;
	float sum = 0;
	float ave = 0;
	printf("������ѧ���ĳɼ�:");
	while ((score = getchar()) >= 0)
	{
		sum += score;
		a[i] = score;
		i++;
	}
	n = i;
	ave = sum / n;
	printf("ƽ����Ϊ:%2.lf", ave);
	printf("����ƽ���ֵ�ѧ���ɼ�: \n");
	for (i = 0; i < n; i++)
	{
		if (a[i] < ave)
			printf("%d",a[i]);
	}
	return 0;
}