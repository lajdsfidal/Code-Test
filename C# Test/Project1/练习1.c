#define _CRT_SECURE_NO_WARNINGS
//放在代码的第一行
//scanf_s函数为VS2022编译提供的，并非C语言标准规定
//scanf为C语言规定语言，通用性强


//1.写出主函数(mian函数)
//100-500代码
//C语言是从主函数的第一行开始执行的——main函数是入口
//打印“比特
//printf为库函数，使用前需引用头文件 stdio.h

//#include <stdio.h>
//int main()
//{
//	printf("比特");

//	return 0;



//编译+链接+运行代码
//快捷键 ctrl+f5; fn+ctrl+f5


//数据类型
//计算机语言-写程序-解决生活中的问题
//char 字符数据类型
//short 短整型
//int 整型
//long 长整形
//long long 更长的整形
//float 单精度浮点数
//double 双精度浮点数
//
////'a'-字符a
//int main()
//{
//	char ch = 'a';//char 创建一个空间ch用于存储'a'
//	return 0;
//}
//

///研究数据类型所占空间
//#include  <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	printf("比特\n");
//	printf("%d\n", 100);//打印一个整数
//	//sizeof-关键字-操作符-计算类型或变量所占空间的大小【sizeof 单位是字节byte】
//	printf("%d\n", sizeof(char));// 1
//	printf("%d\n", sizeof(short));// 2
//	printf("%d\n", sizeof(int));// 4
//	printf("%d\n", sizeof(long));// 4--C语言标准：sizeof(long)>=sizeof(int)即可
//	printf("%d\n", sizeof(long long));// 8
//	printf("%d\n", sizeof(float));// 4
//	printf("%d\n", sizeof(double));// 8
//	return 0;
//}

//计算机中的单位：
//bit-比特
//byte-字节=8 bit
//kb = 1024 byte
//mb = 1024 kb
//gb = 1024 mb
//tb = 1024 gb
//pb = 1024 tb
//计算机中识别二进制：1【1 bit】; 0【1 bit】
//八进制：0-7   十进制：0-9  十六进制；0-9+A-F

//#include <stdio.h>
//int main()
//{
//	int age = 19;
//	double weight = 63;
//	age = age + 1;
//	weight = weight - 2;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//
//		
//	return 0;
//}


//当局部变量和全局变量名字冲突的情况下，局部变量优先级大于全局变量
//不建议把全局变量和局部变量的名字写成一样
//#include <stdio.h>
//int a = 100;//全局变量——》外部定义
//int main()
//{
//	int a = 12;//局部变量——》内部定义
//	printf("%d\n", a);
//	return 0;
//}


//scanf函数是输入函数
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//}