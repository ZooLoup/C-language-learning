#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//��ĳ�༶ÿλͬѧ��3�ſγ̵Ŀ��Գɼ������ö�ά������ʵ�ִӼ�������ÿ��ͬѧ�ĳɼ�����������ƽ���ɼ��������
//#define MAX 100
//int main()
//{
//	int n, i, j;
//	double grade[MAX][4];
//	printf("������ѧ������:");
//	scanf("%d",&n);
//	for (i = 0; i < n; i++)
//	{
//		printf("�������%dѧ�������Ƴɼ�:",i+1);
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%lf",&grade[i][j]);
//			grade[i][3] = (grade[i][0] + grade[i][1] + grade[i][2]) / 3;
//		}
//		for (i = 0; i < n; i++)
//		{
//			printf("���:%d\n �γ�1:%lf\n �γ�2:%lf\n �γ�3:%lf\n ƽ����:%lf\n",i+1,grade[i][0],grade[i][1],grade[i][2],grade[i][3]);
//		}
//	}
//	return 0;
//}

//���ʵ�ִӼ������������ַ������Ƚ����ߵĳ��ȣ�������ϳ����ַ�����Ҫ���ܵ��ÿ⺯��strlen().
//int main()
//{
//	char a[20], b[20], n1, n2,i;
//	printf("�������һ���ַ���:");
//	gets(a);
//	printf("������ڶ����ַ���:");
//	gets(b);
//	for (i = 0; a[i] != '\0'; i++)
//		n1 = i;
//	for (i = 0; b[i] != '\0'; i++)
//		n2 = i;
//	if (n1 > n2)
//		printf("�ϳ����ַ�����:%s\n",a);
//	else
//		printf("�ϳ����ַ�����:%s\n",b);
//	return 0;
//}

//���ʵ�ִӼ�������һ���ַ�����һ���ַ���ͳ�Ƹ��ַ�����ָ���ַ����ֵĴ�����
//int main()
//{
//	char a[50], b;
//	int i = 0, count = 0;
//	printf("������һ���ַ���:");
//	gets(a);
//	printf("������һ���ַ�:");
//	scanf("%c",&b);
//	while (a[i])
//	{
//		if (a[i] == b)
//			count++;
//		i++;
//	}
//	printf("%d\n",count);
//	return 0;
//}

//���ʵ�ִӼ�������һ���ַ�����ͳ�Ƹ��ַ�����"a"��"z"26��Сд��ĸ���ֵĴ�������������������У��������
//#define N 100
//int main()
//{
//	int i, j = 0, c[26] = {0};
//	char str[N];
//	printf("������һ���ַ���:");
//	gets(str);
//	for(i=0;i<strlen(str);i++)
//		for(j=0;j<26;j++)
//			if (str[i] == 'a' + j)
//			{
//				c[j]++;
//				break;
//			}
//	for (i = 0; i < 26; i++)
//		printf("%c-%d ",'a'+i,c[i]);
//	return 0;
//}