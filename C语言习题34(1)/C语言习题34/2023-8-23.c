#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//3.����һ���ַ��������в���'k'�����ҵ��������"���ҵ�"!�������û�ҵ�.
//int main()
//{
//	char str[100];
//	char* p;
//	int flag = 0;
//	puts("������һ���ַ���: ");
//	gets(str);
//	p = str;
//	while (*p != '\0')
//	{
//		if (*p == 'k')
//		{
//			flag = 1;
//			break;
//		}
//		p++;
//	}
//	if (flag == 1)
//		printf("���ҵ�!\n");
//	else
//		printf("û�ҵ�!\n");
//	return 0;
//}

//����ָ�������Ϊ�βΣ���дһ��ʵ�����ַ������ĺ�������������������һ�ַ����������ַ��������������е��ַ�����С�����˳������������
//˼·:����˳���ȽϷ����򡣵�һ�˽���һ���ַ�������ÿ���ַ����бȽϣ�����С���ַ��ŵ���2��λ�á���ֱ��������
#include <stdio.h>
int main()
{
	char str[80], i, j;
	void swap(char* pa, char* pb);
	printf("�����������ַ���:");
	gets(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = i + 1; str[j] != '\0'; j++)
		{
			if (str[i] > str[j])
				swap(&str[i], &str[j]);

		}
		printf("�������ַ���:%s\n",str);
	}
	return 0;
}
void swap(char* pa, char* pb)
{
	char t;
	t = *pa;
	*pa = *pb;
	pb = t;
}