#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
//��ĳ��ÿλͬѧ��3�ſγ̵Ŀ��Գɼ������ö�ά������ʵ�ִӼ�������ÿ��ͬѧ�ĳɼ�����������ƽ���ɼ��������
#define MAX 100
int main()
{
	int i, j, n;
	double score[MAX][4];
	printf("������ѧ������:");
	scanf("%d",n);
	for (i = 1; i <= n; i++)
	{
		printf("�������%dѧ�������Ƴɼ�:",i);
		for (j = 1; j <= 3; j++)
		{
			scanf("%lf",&score[i][j]);
			score[i][4]=(score[i][])
		}
	}
	return 0;
}