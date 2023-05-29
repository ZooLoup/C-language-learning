#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//strtok
//	char arr[] = "zpw@bited.tech";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切割buf中的字符串
//	strtok(buf, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strotk(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strerror；返回错误码所对应的错误信息
//#include <errno.h>
//int main()
//{
//	//0 - No error
//	//1 - Operation not permitted
//	//2 - No such file or directory
//	//...
//	//errno是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中发生了错误，就会把对应的错误码，赋值到error
//	char* str = strerror(0);
//	printf("%s\n", str);//No error
//	return 0;
//}

#include <ctype.h>
int main()
{
	/*char ch = 'w';
	int ret = islower(ch);
	printf("%d\n", ret);*/
	char arr[] = "I Am A Student";
	int i = 0;
	while (arr[i])
	{
		if(isupper(arr))
	}
	return 0;
}