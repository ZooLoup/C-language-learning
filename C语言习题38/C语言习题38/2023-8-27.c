#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//��д����ltrinm()������ɾ���ַ����е�ǰ���ո��м��β���Ŀո�ɾ�������磬�ַ���Ϊ"   A BC DEF",ɾ����Ľ����"A BC DEF".Ҫ�����ββ���ָ�������
//int main()
//{
//	void ltrim(char* a);
//	char s[100];
//	printf("������һ��ǰ����ո���ַ���:");
//	gets(s);
//	ltrim(s);
//	printf("ɾ��ǰ���ո��Ľ��:");
//	puts(s);
//	return 0;
//}
//void ltrim(char* a)
//{
//	char* p;
//	int i = 0;
//	p = a;
//	while (*p == ' ')
//		p++;
//	while (*p)
//	{
//		a[i] = *p;
//		p++;
//		i++;
//	}
//	a[i] = '\0';
//}

//��֪ѧ���ļ�¼��ѧ�źͷ������ɣ��Ӽ�������������ѧ�������ݣ������Զ��庯��fun()���ҳ�������ߵ�ѧ����Ҫ����ýṹ������������ѧ���ļ�¼��ͨ���β�ָ�뽫�ҵ��Ľ��������������������������������
//#define N 3
//struct stu
//{
//	char num[10];
//	int score;
//};
//int main()
//{
//	struct stu a[N], m;
//	int i;
//	void fun(struct stu a[], struct stu* p);
//	printf("������%d��ѧ������Ϣ:\n",N);
//	for (i = 0; i < N; i++)
//		scanf("%s%d",a[i].num,&a[i].score);
//	fun(a, &m);
//	printf("��߷ֵ�ѧ����ϢΪ:%s,%d\n",m.num,m.score);
//	return 0;
//}
//void fun(struct stu a[], struct stu* p)
//{
//	int i, j=0;
//	int max = a[0].score;
//	for (i = 1; i < N; i++)
//	{
//		if (max < a[i].score)
//		{
//			j = i;
//			max = a[i].score;
//		}
//		*p = a[j];
//	}
//}

//��д�������������һ������ת��Ϊ��֮������ַ�����������1234��ת�����ַ���4321������-1234ת�����ַ���-4321.
//void main()
//{
//	int x, n;
//	char s[20], * p;
//	char m[30] = "-";
//	void divide(char* s, int xx);
//	void reverse(char* s);
//	printf("������һ��������");
//	scanf("%d",&x);
//	n = abs(x);
//	divide(s, n);
//	reverse(s);
//	if (x < 0)
//		p = strcat(m, s);
//	else
//		p = s;
//	printf("����%dת������ַ�����:%s\n",x,p);
//}
//void divide(char* s, int xx)
//{
//	char* p;
//	int single;
//	p = s;
//	while (xx > 0)
//	{
//		single = xx % 10;
//		*p = single + '0';
//		p++;
//		xx = xx / 10;
//	}
//	*p = '\0';
//}
//void reverse(char* s)
//{
//	char t, * p, * q;
//	for (p = s, q = s + strlen(s) - 1; p < q; p++, q--)
//	{
//		t = *p;
//		*p = *q;
//		*q = t;
//
//	}
//}

//����ָ��ָ���ָ���ð�ݷ���M*N������д���ʹÿ��Ԫ�ذ��մ�С�����˳�����С�
//˼·���������M��N�еĶ�ά����洢������һ��ָ�����飬������ÿ��Ԫ�طֱ�ָ�����ÿ�е���Ԫ�أ�ָ��ָ���ָ��p��ָ��ָ�����顣
#define M 3
#define N 4
int main()
{
	int a[M][N];
	int i;
	int j;
	int k;
	int t;
	int** p, * pa[M];
	printf("���������Ԫ��:\n");
	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
			scanf("%d",&a[i][j]);
	for (i = 0; i < M; i++)
		pa[i] = a[i];
	p = pa;
	for(k=0;k<M;k++,p++)
		for(i=1;i<=N-1;i++)
			for(j=0;i<N-1;j++)
				if (*(*p + j) > *(*p + j + 1))
				{
					t = *(*p + j);
					*(*p = j) = *(*p + j + 1);
					*(*p + j + 1) = t;
				}
	printf("�����ľ���:\n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	return 0;
}