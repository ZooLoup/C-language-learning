#define _CRT_SECURE_NO_WARNINGS 1
//1.�Ӽ�������3������������a,b��c�У������3������С�����������ʹa�д����С����c�д���������Ȼ�������
//#include <stdio.h>
//int main()
//{
//	int a ;
//	int b ;
//	int c ;
//	int tmp ;
//	printf("������������:");
//	scanf("%d%d%d",&a,&b,&c);
//	if (a > b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a > c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b > c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d<=%d<=%d", a, b, c);
//}

//�Ӽ�������3������a,b,c��ֵ����һԪ���η���ax^2+bx+c=0(a/=0)�ĸ���������������λС����
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int o;
//	double x1;
//	double x2;
//	printf("����������������Ϊ���̵�����ϵ����");
//	scanf("%d%d%d",&a,&b,&c);
//	if (a == 0)
//		printf("����ĵ�һ��ϵ����Ч������������");
//	if (a != 0)
//	{
//		o = b * b - 4 * a * c;
//		if (o > 0)
//		{
//			x1 = -b + sqrt(b * b - 4 * a * c);
//			x2 = -b - sqrt(b * b - 4 * a * c);
//			printf("���̵Ľ�Ϊ:x1=%.2lf,x2=%2.lf", x1, x2);
//		}
//		else if (o == 0)
//		{
//			x1 = x2 = -b / 2 * a;
//			printf("���̵Ľ�Ϊ:x1=x2=%.2lf", x1);
//		}
//		else
//		{
//			printf("�����޽�");
//		}
//		return 0;
//	}
//}

//��֪����������ȡ��ͬ���޵���Ϣ�������£�0.215%������һ�꣩,0.230%(��������)��0.245%���������꣩,0.275%(��������)��0.320%(���ް���)����̴Ӽ���������ı���==��������ޣ����㵽��ʱ�����еõ��Ľ�������������λС����Ҫ��ֱ��÷�֧if����switch����д�����ҵ�����Ĵ�����޲�����������ʱ�ܸ���������Ϣ��
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	double money = 0;
//	double rate = 0;
//	double total = 0;
//	printf("��������ı��������:");
//	scanf("%lf%d", &money, &year);
//	if (year == 1)
//	{
//		rate = 0.00215;
//	}
//	else if (year == 2)
//	{
//		rate = 0.00230;
//	}
//	else if (year == 3)
//	{
//		rate = 0.0245;
//	}
//	else if (year == 5)
//	{
//		rate = 0.00275;
//	}
//	else if (year == 8)
//	{
//		rate = 0.00320;
//	}
//	else
//	{
//		printf("��������ȷ������");
//		return 0;
//	}
//	total = money * rate * year * 12;
//	printf("���=%.2lf", total);
//	return 0;
//}