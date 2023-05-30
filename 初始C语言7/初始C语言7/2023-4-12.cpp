#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	//EOF - end of file 文件结束标志
//	/*while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:\n");
//	scanf("%s", password);//输入密码，并存放在password数组
//	//缓冲区还剩余一个
//	//读取一个'\n'
//	while ((ch = getchar()) != 'n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();//Y/N
//	if (ret = 'Y')
//	{
//		printf("确认成功\n");
//
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//
//	printf("%d\n", '\n');
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//for循环
//int main()
//{
//	int i = 0;//初始化
//	while (i < 10)//判断
//	{
//		i++;//调整
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//   初始化  判断    调整
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//		break;终止循环
//			//      continue;跳出当前循环，开始下一次循环
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//10次循环
//	//10次打印
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//1.for循环的初始化，调整，判断 都可以省略
//但是:
//for循环的判断部分 如果被忽略,那判断条件就是 ：恒位正
//如果不是非常熟练，就不要省略代码

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//}
