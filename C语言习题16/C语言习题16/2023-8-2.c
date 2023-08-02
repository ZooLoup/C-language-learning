#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//从键盘输入一个字符串，分别用冒泡法和选择法对该字符串中的字符由小到大进行排序，并输出结果。
//冒泡排序
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

//选择排序
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