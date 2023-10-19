#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h >
#include <stdlib.h>
//从键盘输入一个学生的姓名和年龄，将其写入磁盘文件中，程序运行结束后用记事本查看文件的内容。
//int main()
//{
//	FILE* fp;
//	char name[20], fname[50];
//	int age;
//	printf("请输入姓名和年龄:");
//	scanf("%s%d",name,&age);
//	printf("%s",fname);
//	if ((fp = fopen(fname, "w")) == NULL)
//	{
//		printf("不打开文件！\n");
//		exit(0);
//	}
//	fprintf(fp,"%s %d",name,age);
//	fclose(fp);
//	return 0;
//}

//编程将第一题保存在磁盘文件中的数据读出，并显示在屏幕上。
int main()
{
	FILE* fp;
	char name[20], fname[50];
	int age;
	printf("请输入文件名:");
	scanf("%s",fname);
	if ((fp = fopen(fname, "r")) == NULL)
	{
		printf("不打开文件！\n");
		exit(0);
	}
	fscant(fp, "%s%d", name, &age);
	printf("%s %d\n",name,age);
	fclose(fp);
	return 0;
}