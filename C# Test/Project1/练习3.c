#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	printf("15与17的和是\n%d", 15 + 17);//"\n"是换行符
//	return 0;
//}

//int main()
//{
//	printf("Hello!\a\a\a\nNice to met you!");//"\a"是响铃
//	return 0;
//
//}

//int main()
//{
//
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//		if (arr[i] > max)
//			max = arr[i];
//	printf("max=%d", max);
//	return 0;
//}

//int main()
//{
	//int a = 3.14;
	//int b = 5.7;
	//long c = 3.56;
	//short d = 2.695;
	//long long e = 2.954;
	//int f = 0.6954;
	//float g = 2.54687;
	//double h = 4.89866;
	//char ch = 5.1566;
	//printf("%d\n%d\n%d\n%d\n%d\n", a,b,c,d,e);//int 只能存储整数值
	//printf("%d\n", f);
    //printf("%f\n", g);
	//printf("%lf\n", h);
	//printf("%d\n", ch);
//	return 0;
//}

//int main()
//{
//	float m = 2.56484561658;
//	float u = 0.1259878455;
//	printf("%f\n%f\n", m, u);//%f和%g的区别？
//	printf("%g\n%g\n", m, u);
//	return 0;
//}

//int main()
//{
//	int no;
//	printf("果名可不可爱？如果可爱请输入m，如果不可爱请输入n。\n");//有疑问的代码！！！！！！！！！
//	scanf("%d\n", &no);
//
//	printf("您的观点是%d。\n", no);
//	return 0;
//
//}


//作用域和生命周期
//全局变量的作用域：整个工程
//局部变量的作用域：就是变量所在的局部位置
//int TMD = 96226;//全局变量即使在main函数外也可以被打印；printf函数等执行性代码必须写到main函数内
////全局变量不只限于本文件可用而是整个工程（project1）,在其他文件中使用时需声明（extern）,以练习3和练习4为例
//int main()
//{
//	int a = 2022;
//
//	int m = 2022;
//	printf("1:%d\n", a);
//	{
//		int b = 2021;//b局部变量不能在其作用域外打印
//		printf("2:%d\n",b);
//		printf("3:%d\n", a);//a的作用域包含b的作用域，a的作用域范围更加广泛
//	}
//	printf("4:%d", TMD);
//	return 0;
//}

//生命周期：变量创建和销毁之间的时间段
//全局变量的生命周期：程序的生命周期。
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束。