#define _CRT_SECURE_NO_WARNINGS 1
//p23
//����һ�·ֶκ�����д��������һ��x��ֵ�������Ӧ��yֵ��
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("������һ��x��ֵ:\n");
//	scanf("%d", &x);
//	if (x > -5 && x < 0)
//		y = x - 1;
//	else if (x == 0)
//		y = x;
//	else if (x > 0 && x < 8)
//		y = x + 1;
//	else
//		y = 10;
//	printf("%d\n", y);
//	return 0;
//}

//�Ӽ�������һ���ַ��������Сд��ĸ������ת���ɴ�д��ĸ���������Ǵ�д��ĸ������ת����Сд��ĸ���������������ַ�����ԭ�������
//#include <stdio.h>
//int main()
//{
//	char c = 0;
//	printf("������һ���ַ�:");
//	scanf("%c", &c);
//	if (c >= 'A' && c <= 'Z')
//		printf("%c", c + 32);
//	else if (c >= 'a' && c <= 'z')
//		printf("%c", c - 32);
//	else
//		printf("%c", c);
//	return 0;
//}

//����һ��3λ�������ж����Ƿ�λˮ�ɻ��������������ݲ���ȷʱ��Ҫ�����������ʾ��˵����ˮ�ɻ�����һ��3λ�������λ��������֮�͵��ڸ���������153=1^3+5^3+3^3
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int x = 0;
	printf("������һ����λ��:");
	scanf("%d", &x);
	if (x >= 100 && x < 1000)
	{
		a = x / 100;
		b = x % 100 / 10;
		c = x % 10;
		if (a * a * a + b * b * b + c * c * c == x)
			printf("�������ˮ�ɻ���");
		else
			printf("���������ˮ�ɻ���");
	}
	else
		printf("��������ݲ�����Ҫ��");
	return 0;
}