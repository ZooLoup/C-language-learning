#define _CRT_SECURE_NO_WARNINGS 1
//�Ӽ�������һ�����������ж����Ƿ�Ϊ3��5�ı���������ǣ�������yes���������no
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x % 3 == 0 && x % 5 == 0)
//	
//		printf("yes\n");
//	
//	else
//	
//		printf("no\n");
//	
//	return 0;
//}

//��д�������������ε�3���߳������������ע�⣺�����ε���������֮�ͱ�����ڵ����ߣ����ڲ�����ı䳤���룬Ҫ�����������ʾ��
#include <stdio.h>
int main()
{
	float x, y, z, p, S = 0;
	printf("�������һ���߳�:\n");
	scanf("%f", &x);
	printf("������ڶ����߳�:\n");
	scanf("%f", &y);
	printf("������������߳�:\n");
	scanf("%f", &z);
	if (x + y > z && x + z > y && y + z > x)
	{
		p = (x + y + z) / 2;
		S = sqrt(p * (p - x) * (p - y) * (p - z));
		printf("�����ε������:%2f\n", S);
	}
	else
		printf("x,y,z�������������\n");
	return 0;
}