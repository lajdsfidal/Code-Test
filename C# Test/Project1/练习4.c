#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//extern int TMD;//使用别的文本的全局变量时注意main函数的设置，在全局变量所在文本有main函数定义时，全局变量不能被其他文本引用
//int main()
//{
//	printf("%d\n", TMD);
//	return 0;
//}



//常量类型：
//1、字面常量 2、const修饰的常变量 3、#define定义的标识符常量 4、枚举常量
//#define MAX 10000
//int main()
//{
//	//字面常量：
//	3.14;
//	10;
//	'a';
//	"safdsf";
//
//	//const修饰的常变量
//	const int num = 10;//此时num不可以被修改为其他常量，num已被const指定，num是常变量
//	num = 20;
//	printf("num=%d\n", num);//此时程序报错
//
//
//
//	arr[10] = { 0 };//arr[]中只能为常量
//	const int n = 10;//此时n为常变量，并非常量，故n无法填在[]内
//	arr[n] = { 0 };
//
//	//#define定义的标识符常量
//	//int MAX = 20000;//MAX已被定义，故MAX不可更改，此次错误
//	int n = MAX;
//	printf("n=%d\n", n);
//
//	return 0;
//}

//枚举常量
//enum SEX
//{
//	//未来SEX的可能取值
//	MALE=3,//3为赋初值，若未赋初值则初始值从0开始
//	FELMALE,
//	SECRET
//};
//int main()
//{
//	enum SEX s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FELMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}


//字符串-用英文双括号括起来的一串字符
//int main()
//{
//	"abcdef";
//	"hello bit";
//	//字符串的结束标准是一个\0的转义字符。在计算字符串长度的时候\0是结束标准，不算做字符串内容。
//	return 0;
//}
// 
//#include <string.h>
//int main()
//{
//	//字符数组-是一串相同类型的元素
//	//char arr[] = "hello";//字符串在结束的地方隐藏了一个"\0"
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};//字符串{'a','b','c'}储存在一个内存空间中，此时这个字符串中没有结束符"\0"则继续打印后面的内存，而后面的内存未知
//	char arr3[] = { 'a','b','c','\0' };//在字符串{'a','b','c'}中加入 '\0'则打印结果与arr1[]相同
//	//打印字符串
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	//求一下字符串长度
//	int len=strlen("abc");//string length
//	printf("%d\n", len);//求出的字符串长度不包括"\0"
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//打印出来的35是随机值
//	printf("%d\n", strlen(arr3));
//
//	return 0;
//}
