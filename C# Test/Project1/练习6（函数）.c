#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//常用C语言库函数
//IO函数-->printf scanf getchar putchar
//字符串操作函数-->strcmp(比较) strlen(求字符串长度)
// 字符操作符-->toupper(小写转大写)
//内存操作函数-->memcpy memcmp memset
//时间/日期函数-->time
//数学函数-->sqrt(开平方)
//其他库函数
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//memory - 记忆 - 内存
//memset - 内存设置
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//strcpy
//int main()
//{
//	char arr1[] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	
//	return 0;
//}

//char*strcpy(char*strDestination, const char*strSource);
//char*-->函数返回类型
// strcpy-->函数名
//()内为函数的参数

//自定义函数：
//ret_type fun_name(para, *)
//{
//	statement;//语句项
//}
//ret_type 返回类型
//fun_name 函数名
//para1 函数参数

//写一个函数可以找出两个函数的最大值
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d\n", &a, &b);
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//写一个函数可以调换两个输入的值
//void Swap1(int* pa, int* pb)
//{
//	int z = 0;
//	z=*pa;
//	*pa = *pb;
//	*pb = z;
//}
//void Swap2(int a, int b)
//{
//	int z = 0;
//	z = a;
//	a = b;
//	b = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap2(a, b);//传值调用
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap1(&a, &b);//传址调用
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

//实际参数（实参）：真实传递给函数的参数叫实参。实参可以是：常量、变量、表达式、函数等。无论是何种类型的实参，在进行函数调用的时候，它们都要有确定的值，以便把这些值传给形参。
//形式参数（形参）：形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化（分配内存单元，所以叫形式参数。形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有效.

//函数的调用
//1.传值调用
//2.传址调用

//法一：
//判断1000-2000年之间的闰年
//int is_leap_year(int n)
//{
//	//判断是否为闰年
//	if (n % 4 == 0 && n % 100 != 0)
//	{
//		return 1;
//	}
//	else if (n % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	printf("1000-2000年间的闰年为：\n");
//	//生成1000-2000之间的年份
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断是否为闰年
//		if (is_leap_year(y) == 1)
//		{
//			//计算闰年数量并打印闰年
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//法二：
//int is_leap_year(int n)
//{
//	//判断是否为闰年
//	return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	printf("1000-2000年间的闰年为：\n");
//	//生成1000-2000之间的年份
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断是否为闰年
//		if (is_leap_year(y) == 1)
//		{
//			//计算闰年数量并打印闰年
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}