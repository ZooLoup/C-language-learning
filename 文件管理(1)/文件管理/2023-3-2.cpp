#include <stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	int ge
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int mian()
//{
//	//从键盘读取一组函数
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);//从标准输入读取
//	fputs(buf, stdout);
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100, 3.14f ,"bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf); 
//	pf = NULL;
//	return 0;
//
//}


//牢记：在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束。
//文本文件读取是否结束的时候，判断是读取失败结束，还是遇到文件尾结束。
//1.文本文件读取是否结束，判断返回值是否位EOF（fegtc）
int main()
{
	//strerror - 把错误对应的错误信息的字符串地址返回
	//printf("%s\n", strerror(errno));
	//perror
	FILE* pf = fopen("test2.txt", "r");
	if (pf == NULL)
	{
		perror("hehe");
		return 0;
	}

	fclose(pf);
	pf = NULL;
	return 0;
}