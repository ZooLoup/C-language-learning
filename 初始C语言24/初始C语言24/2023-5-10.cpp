#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 9;
	//00000000000000000000000000001001 - ����
	//(-1)^0 * 0.00000000000000000000000000001001 * 2^-126
	float* pFloat = (float*)&n;
	printf("n��ֵΪ:%f\n", *pFloat);

	*pFloat = 9.0;
	//1001.0
	//1.001*2^3
	//(-1)^0*1.001 * 2^3
	//0 10000010 00100000000000000000000

	printf("num��ֵΪ:%d\n", n);
	printf("pFloat��ֵΪ:%f\n", *pFloat);
	return 0;
}