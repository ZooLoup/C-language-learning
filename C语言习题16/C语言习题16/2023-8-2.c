#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�Ӽ�������һ���ַ������ֱ���ð�ݷ���ѡ�񷨶Ը��ַ����е��ַ���С����������򣬲���������
//ð������
//int main()
//{
//	int i, j, n;
//	char t, s[100];
//	gets(s);
//	n = strlen(s);
//	for(i=1;i<=n-1;i++)
//		for(j=0;j<n-1;j++)
//			if (s[j] > s[j + 1])
//			{
//				t = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = t;
//			}
//	puts(s);
//	return 0;
//}

//ѡ������
int main()
{
	int i, j, n, min;
	char t, s[100];
	gets(s);
	n = strlen(s);
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
			if (s[j] < s[min])
				min = j;
		if (i != min)
		{
			t = s[i];
			s[i] = s[min];
			s[min] = t;
		}
	}
	puts(s);
	return 0;
}