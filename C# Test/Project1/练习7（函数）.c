#define  CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//写一个函数，使得每调用一次这个函数，使得num加1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}

//函数的嵌套调用和链式访问
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	/*strcpy(arr1, arr2);
//	printf("%s\n", arr1);*/
//
//	/*printf("%s\n", strcpy(arr1, arr2)); */
//
//	printf("%d", printf("%d", printf("%d", 43)));//结果为“4321”，因为printf()返回的是打印的字符个数
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明一下，不然编译器从前往后扫描，Add函数定义在main函数后会报错
//	int Add(int x, int y); 
//	
//	int  c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
//Add(int x, int y)
//{
//	return x + y;
//}

//#include "sub.h"
//int main()
//{
//	int a = 59;
//	int b = 98l;
//	int c = Sub(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//函数的递归
//递归：程序调用自身的编程技巧称为递归。
//一个过程或函数在其定义或说明中有直接或间接调用自身的一种方法，它通常把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题来求解，递归策略只需少量的程序就可描述出解题过程所需要的多次重复计算，大大减少了程序的代码量。
//递归思想：把大事化小
//递归的两个必要条件：
//1.存在限制条件，当满足这个限制条件的时候，递归便不再继续。
//2.每次递归调用之后越来越接近这个限制条件。
//int main()
//{
//	printf("hehe\n");
//	main();//最简单的递归，正常不这样写。
//	//会导致栈溢出。
//	return 0;
//}

//练习1：接受一个整型值（无符号），按顺序打印它的每一位。例如：输入：1234，输出 1 2 3 4.
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%u", &num);
//	//递归
//	print(num);//print函数可以打印参数部分数字的每一位
//	return 0;
//}

//写递归代码注意事项：
//1.不能死递归，都有跳出条件，每次递归逼近跳出条件。
//2.递归层次不能太深。