#define _CRT_SECURE_NO_WARNINGS 1
//从键盘输入一个正整数，判断他是否为3和5的倍数，如果是，则输入yes，否则输出no
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

//编写程序，输入三角形的3条边长，求其面积。注意：三角形的任意两边之和必须大于第三边，对于不合理的变长输入，要求给出错误提示。
#include <stdio.h>
int main()
{
	float x, y, z, p, S = 0;
	printf("请输入第一个边长:\n");
	scanf("%f", &x);
	printf("请输入第二个边长:\n");
	scanf("%f", &y);
	printf("请输入第三个边长:\n");
	scanf("%f", &z);
	if (x + y > z && x + z > y && y + z > x)
	{
		p = (x + y + z) / 2;
		S = sqrt(p * (p - x) * (p - y) * (p - z));
		printf("三角形的面积是:%2f\n", S);
	}
	else
		printf("x,y,z不能组成三角形\n");
	return 0;
}