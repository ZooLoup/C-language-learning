#define _CRT_SECURE_NO_WARNINGS 1
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

#include <stdio.h>
int Add(int m, int n)
{
    int s;
    s = m + n;
    if (m+n>=100)
    {
        s = s % 100;
    }
    return s;
}
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    int Add(int a, int b);
    c = Add(a, b);
    printf("%d", c);
}