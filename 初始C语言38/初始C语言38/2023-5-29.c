#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//strtok
//	char arr[] = "zpw@bited.tech";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//�и�buf�е��ַ���
//	strtok(buf, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strotk(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strerror�����ش���������Ӧ�Ĵ�����Ϣ
//#include <errno.h>
//int main()
//{
//	//0 - No error
//	//1 - Operation not permitted
//	//2 - No such file or directory
//	//...
//	//errno��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����з����˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��error
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