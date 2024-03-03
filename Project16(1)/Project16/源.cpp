#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    printf("输入要打印的符号:");
//    char ch = getchar();
//    int line = 0;
//    printf("输入行:>");
//    scanf("%d", &line);
//    for (i = 0; i < line; i++)
//    {
//        int j = 0;
//        for (j = 0; j < line - 1 - i; j++)
//            printf(" ");
//        for (j = 0; j < i * 2 + 1; j++)
//        {
//            printf("%c", ch);
//        }
//        printf("\n");
//    }
//    for (i = 0; i < line; i++)
//    {
//        int j = 0;
//        for (j = 0; j <= i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < 2 * (line - i - 1) - 1; j++)
//        {
//            printf("%c", ch);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <iostream>
//#include <stdio.h>
//int main()
//{
//    double i;
//    scanf("%f", &i);
//    printf("%.0f", i);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int t = 0;
//    scanf("%d,%d", &a, &b);
//    t = a;
//    a = b;
//    b = t;
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 5;
//	int j = 0;
//	j = (i++) + (i++) + (i++);
//	j = (++i) + (++i) + (++i);
//	printf("%d",j);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int h, r;
//    scanf("%d %d", &h, &r);
//    if (10000 % h * r * r * 3.14 == 0)
//    {
//        printf("%d", (10 / h * r * r * 3.14/1000));
//    }
//    else
//    {
//        printf("%d", (10 / h * r * r * 3.14/1000) + 1);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int hours;
//    int minutes;
//    int k;
//    scanf("%d:%d %d", &hours, &minutes, &k);
//    if (minutes + k >= 60)
//    {
//        hours += k / 60;
//        minutes += k % 60;
//    }
//    else
//    {
//        hours = hours;
//        minutes += k;
//    }
//    printf("%d:%d", hours, minutes);
//    return 0;
//}

//#include <stdio.h>
//int Add(int m, int n)
//{
//    int s = 0;
//    int k = 0;
//    s = m + n;
//    if (s > 100)
//    {
//        k = s % 100;
//    }
//    return k;
//}
//int main()
//{
//    int a, b, sum;
//    scanf("%d %d", &a, &b);
//    int Add(int a, int b);
//    sum = Add(a, b);
//    printf("%d", Add(a, b));
//}

//#include <stdio.h>
//int Add(int m, int n)
//{
//    int s;
//    s = m + n;
//    if (m+n>=100)
//    {
//        s = s % 100;
//    }
//    return s;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d %d", &a, &b);
//    int Add(int a, int b);
//    c = Add(a, b);
//    printf("%d", c);
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    float a = 0;
//    float b = 0;
//    float c = 0;
//    float x1 = 0;
//    float x2 = 0;
//    if (a != 0)
//    {
//        if ((b * b - 4 * a * c) == 0)
//        {
//            x1 = x2 = -b / 2 * a;
//        }
//        else if (b * b - 4 * a * c > 0)
//        {
//            x1 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
//            x2 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
//        }
//        else {
//            x1 = -b / (2 * a) - sqrt(-(sqrt(b * b - 4 * a * c)) / 2 * a);
//            x2 = -b / (2 * a) + sqrt(-(sqrt(b * b - 4 * a * c)) / 2 * a);
//        }
//        printf("x1=%.2f;x2=%.2f", x1, x2);
//    }
//    else {
//        printf("Not quadratic equation");
//    }
//    return 0;
//}

//int main()
//{
//	int *a;
//	printf("%d",&a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int arr[5][5] = {0};
//    int x = 0;
//    int y = 0;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//        }
//    }
//    scanf("%d %d", &x, &y);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if ((x == i) && (y == j))
//                printf("%d", arr[i][j]);
//        }
//    }
//    return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n",*p);
//
//	return 0;
//}


//int main() {
//    char* ptr;
//    char arr[] = "12345678";
//    ptr = arr;
//    ptr += 5;
//    printf("%s", ptr);
//    return 0;
//}


//int main() {
//    //int x, y = 6, z = 5;
//    //x = y == z;
//    //printf("%d\n", x);
//    short i = 65537;
//    printf("%d",i);
//    return 0;
//}

//int main(void) {
//    printf("%d", 'B' < 'A');
//    return 0;
//}
//#include <string.h>
//int main()
//{
//	char ch[7] = { 's',  't', 'u', 'd', 'e', 'n', 't' };
//	printf("%s",ch);
//	return 0;
//}



//#include <stdio.h>
//double MAX(int a, int b, int c)
//{
//    int max = a;
//    if (max < b)
//    {
//        max = b;
//    }
//    if (max < c)
//    {
//        max = c;
//    }
//    return max;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    double m = 0;
//    m = MAX(a + b, b, c) / (MAX(a, b + c, c) + MAX(a, b, b + c));
//    printf("%2.lf", m);
//    return 0;
//}


//int main() {
//    int a = 1, b = 2, m = 0, n = 0, k;
//    k = (n = b < a) && (m = a);
//    printf("%d,%d\n", k, m);
//    return 0;
//}

//#include <stdio.h>
//#/*include <string.h>
////int main() {
////    char p1[15] = "abcd";
////    const char* p2 = "ABCD";
////    char str[50] = "xyz";
////    strcpy(str + 2, strcat(p1 + 2, p2 + 1));
////    printf("%s", str);
////    return 0;
////}*/

//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 32;
//	printf("%d,%d",a<<b,1<<32);
//	return 0;
//}
//int main()
//{
//	char ch = 'a'; int k = 12;
//	printf("%x,%o,", ch, ch, k);
//	printf("k=%%d\n", k);
//	return 0;
//}
//int getDays(int x, int y)
//{
//	if ((x % 400 == 0) || (x % 4 == 0 && x % 100 != 0))
//	{
//		
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int year, month;
//	scanf("%d %d",&year,&month);
//	printf("%d",getDays(year, month));
//#include <stdio.h>
//int main()
//{
//	char a[] = { A,B,C,D,E,F };
//	char b[] = {1,2,3,4,5};
//	char c[] = {"1,2,3,4,5"};
//	char d[] = "ABCDEF";
//	return 0;
//}
// 
// 
// 
// 

//void fun(int a[],int n)
//{
//	int* q = a;
//	int* b = a + n - 1,t;
//	while (a < b) 
//	{
//
//
//
//		t = *a++;
//		*--b = *a;
//	}
//}
//
//#include <stdio.h>
//void main()
//{
//	int aa[10] = { 1,2,3,4,5,6,7,8,9,10 }, i;
//	fun(aa, 5);
//	for (i = 0; i < 6; i++)
//		printf("%d",aa[i]);
//	printf("\n");
//}

//#include <stdio.h>
//#include <string.h>
//void fun(char* str)
//{
//	char temp;
//	int n, i;
//	n = strlen(str);
//	temp = str[n - 1];
//	for (i = n - 1; i > 0; i--)
//		str[i] = str[i - 1];
//	str[0] = temp;
//}
//void main()
//{
//	char ch[] = { "bad" }, i;
//	fun(ch);
//	puts(ch);
//}
//
//#include <stdio.h>
//int main()
//{
//	char c1 = 'a';
//	char c2 = 'b';
//	//printf("%c %c",c1,c2);
//	getchar(c2);
//	putchar(c2);
//	putchar(c1);
//	return 0;
//}

//#include <stdio.h>
//#define PT 3.5;
//#define S(x) PT*x*x;
//void main()
//{
//	int a = 1;
//	int b = 2;
//	printf("%4.1f\n",S(a+b));
//}
//#include <stdio.h>
//int main()
//{
//	/*char a[] = "x+y=55";
//	char a[10] = '5';*/
//	int i, j, n;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n - i; j++)
//			printf(" ");
//		for (j = 1; j <= i; j++)
//			printf("%d",j);
//		for (j = i-1; j >=1; j--)
//			printf("%d",j);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d",&i);
//	while (i)
//	{
//		i /= 10;
//		n++;
//	}
//	printf("%d",n);
//	return 0;
//}

//int main()
//{
//	int i, j, n= 0;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = i; j < n; j++)
//			printf(" ");
//		for (j = 1; j <= i; j++)
//			printf("%d",j);
//		for (j = i - 1; j >= 1; j--)
//	        printf("%d",j);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 2; i <= n - 1; i++)
//	{
//		for (j = 3; j < n - 1; j++)
//		{
//			if (i * j == n)
//				printf("%d %d ",i,j);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int m;
//	int k = 0;
//	int s = 0;
//	for (m = 1; m <= 4; m++)
//	{
//		switch (m % 4)
//		{
//		case 0:
//		case 1:
//			s += m;
//			break;
//		case 2:
//		case 3:
//			s -= m;
//			break;
//		}
//		k += s;
//	}
//	printf("%d\n",k);
//	return 0;
//}

//#include <math.h>
//int main()
//{
//	long int i = 1;
//	long int x, y, z;
//	while (1)
//	{
//		x = sqrt(i + 100);
//		y = sqrt(i + 168);
//		if (pow(x,2) == i + 100 && y * y = i + 168)
//		{
//			printf("\n%ld\n", i);
//			break;
//		}
//		else i++;
//	}
//
//}

//int main()
//{
//	int* s, k;
//	char* p, c;
//	s = &k;
//	p = &c;
//	s = p;
//	*s = 1;
//}
//int main()
//{
//	int n = 0;
//	int num = 0;
//	int temp = 0;
//	scanf("%d",&n);
//	while (n)
//	{
//		printf("%d",n%10);
//		n = n / 10;
//		num++;
//	}
//	printf("%d",num);
//}

//int main()
//{
	/*int sum = 0;
	int i, j;
	int a = 0;
	int n = 0;
	int item = 1;
	scanf("%d",&n);
	scanf("%d",&a);
	for(i=1;i<=n;i++)
		for (j = 1; j <= i; j++)
		{
			item = item * a;
			sum += item;
		}
	printf("%d",sum);
	return 0;*/
	/*k = -3;
	if (k <= 0) printf("####")
	else printf("&&&&");*/
//	int arr[20] = { 1,1 };
//	printf("%d",arr[3]);
//}

//int main()
//{
//	int n = 0;
//	int i,j;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if ((n % i == 0) && (i % j != 0))
//				printf("%d",i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int* p = NULL;
//	printf("%d",*p);
//	return 0;
//}


//#include <string.h>
//void fun(char* w, int n)
//{
//	char t, * s1, * s2;
//	s1 = w;
//	s2 = w + n - 1;
//	while (s1 < s2) { t = *s1++; *s1 = *s2--; *s2 = t; }
//}
//int main()
//{
//	char* p;
//	char a[] = "1234567";
//	p = a;
//	fun(p, strlen(p));
//	puts(p);
//	return 0;
//}

//int main()
//{
//	int i=0, x = 0, s = 0;
//	for (;;)
//	{
//		if (i == 3 || i == 5)
//			continue;
//		if (i == 6)
//			break;
//		i++;
//		s += i;
//	}
//	printf("%d\n",s);
//}

//int main()
//{
//	int temp ;
//	int n ;
//	scanf("%d",&n);
//	while (n)
//	{
//		temp = n % 10;
//		switch (temp)
//		{
//		case 0:
//			printf("Zero ");
//			break;
//		case 1:
//			printf("One ");
//			break;
//		case 2:
//			printf("Two ");
//			break;
//		case 3:
//			printf("Three ");
//			break;
//		case 4:
//			printf("Four");
//			break;
//		case 5:
//			printf("Five");
//			break;
//		case 6:
//			printf("Six");
//			break;
//		case 7:
//			printf("Seven");
//			break;
//		case 8:
//			printf("Eight");
//			break;
//		case 9:
//			printf("Nine");
//			break;
//		default:
//			break;
//		}
//		n = n / 10;
//	}
//	return 0;
//}


//int sushu(int x)
//{
//	int i = 0;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i)
//			return 1;
//		else
//			return 0;
//	}
//}
//int main()
//{
//	int sum = 0;
//	int m, n;
//	scanf("%d %d", &m, &n);
//	for (int i = m; i <= n; i++)
//	{
//		if (sushu(i))
//			sum += i;
//	}
//	printf("%d", sum);
//}

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int j = 1;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ",j,i,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int arr(int a)
//{
//    int temp = 0;
//    int sum = 0;
//    while (a)
//    {
//        temp = a % 10;
//        sum += temp;
//        a = a / 10;
//    }
//    if (sum % 5 == 0)
//        return 1;
//}
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int i = 0;
//    int count = 0;
//    scanf("%d %d", &m, &n);
//    for (i = m; i <= n; i++)
//    {
//        if (arr(i))
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-3d",j,i,i*j);
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double sum = 0, item;
//	int a=2, b=1, i, count=1;
//	for (i = 1; i <= 20; i++)
//	{
//		item = a / b;
//		b = a;
//		a += count;
//		count++;
//		sum += item;
//	}
//	printf("%0.2f",sum);
//	return 0;
//}