#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��̽���������10��20��30��40��50��60��70��80��90��100���浽�����У��ٴӼ�������һ���������������뵽�������У�ʹ֮��Ϊһ���������С�
//int main()
//{
//	int a[11] = { 10,20,30,40,50,60,70,80,90,100 }, b, i,p=10;
//	printf("������Ҫ�����Ԫ��:");
//	scanf("%d",&b);
//	for (i = 0; i < 10; i++)
//		if (b < a[i])
//		{
//			p = i;
//			break;
//		}
//	for (i = 9; i >= p; i--)
//		a[i + 1] = a[i];
//	a[p] = b;
//	for (i = 0; i <= 10; i++)
//		printf("%d ", a[i]);
//	return 0;
//}

//��̴Ӽ�������һ��M*N�Ķ�ά���飬�������������ȦԪ�ص�ƽ��ֵ������������
#define M 3
#define N 4
int main()
{
	int a[M][N];
	int i, j, k = 0;
	double sum = 0.0;
	printf("����������:\n");
	for (i = 0; i < m; i++)
		for (j = 0; j < N; j++)
		{
			scanf("%d",&a[i][j]);
			if (i == 0 || i == M - 1 || j == 0 || j == N - 1)
			{
				sum += a[i][j];
				k++;
			}
		}
	printf("��ΧԪ�ص�ƽ��ֵΪ:%lf\n",sum/k);
	return 0;
}