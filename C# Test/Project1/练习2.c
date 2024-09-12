#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//stdio(standard input/output)标准输入/输出
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1 ; i < 10 ; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	for (i = 0; i < 10 ; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("max=%d\n", max);
//		
//	return 0;
//}

//C语言中宏（macro）是一种预处理指令，用于在编译前将代码中的符号替换为指定的文本


//求十个数的平均值
//创建main函数
//int main()
//{
//	//创建数组arr函数
//	int arr[10] = { 0 };
//	int i = 0;//不要漏掉i的定义
//	//for循环向arr数组中输入10个数，&【1.取地址符（Unary Operator）;2.按位与运算符（Bitwise AND Operator）】,此次&应为取地址符
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//定义sum，利用for循环将10个数依次相加得到10个数的sum
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	//取平均值avg,并打印avg
//	int avg = sum / 10;
//	printf("avg=%d\n", avg);
//	return 0;
//}