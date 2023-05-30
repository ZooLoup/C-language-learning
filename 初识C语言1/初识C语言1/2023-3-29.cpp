//包含一个叫stdio.h的文件
//std-标准standard i-input output 
#include <stdio.h>
//int是整形的意思
//main前面的int表示main函数调用后返回的一个整形值
//int main()//主函数—FN+F10
//{
	//这里完成任务
	//在屏幕上输出hello world
	//函数-printf function
	//库函数-c语言本身提供给我们使用的函数
	//printf("hehe\n");
	//return 0;//返回 0
//}

//void main()这种写法是过时的写法

//int main()
//{
//	char ch = 'A';//'A';//内存
//	printf("%c", ch);//%c -- 打印字符格式的数据
	//20;
	//short int - 短整形
	//int - 整形
	//int age = 20;
	//printf("%d", age);//%d -- 打印整形十进制数据
	//long 长整型
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	//年龄
//	//20
//	short age = 20;//向内存申请两个字节=18bit位
//	float weight = 95.6f;//向内存申请4个字节，存放小数
//
//	return 0;
//}


//int num2 = 20;//全局变量-定义代码块({})之外的变量
//int main()
//{
//	int num1 = 10;//局部变量-定义早代码块({})之内的变量
//
//	return 0;
//}


//int a = 100;
//int main()
//{
//	int a = 10;
//	//局部变量和全局变量的名字建议不要相同-容易误会
//	//当局部变量和全局变量的名字一样时，局部变量优先
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	//计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据-使用输入函数
//	scanf_s("%d%d", &num1, &num2);//取地址符号&
//	//C语言语法规定，变量要定义在当前代码块的最前面
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	//局部变量的作用域
//	//{
//		//int num = 0;
//	//}
//
//	int num = 0;
//	printf("num=%d\n", num);
//	return 0;
//}


//int global = 2020;
//void test()
//{
//	printf("test()-- % d\n" ,global);
//}
//int main()
//{
//	printf("%d\n", global);
//	return 0;
//}

//int main()
//{
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}


//生命周期
//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);
//	return 0;
//}
//进入开始，出去结束