#define CRT_SECURE_NOT_WARNINGS
#include <stdio.h>
#include "add.h"
#include "sub.h"
int main()
{
	int a = 53;
	int b = 68;
	int c = Add(a, b);
	int d = Sub(a, b);
	printf("%d\n", c);
	printf("%d\n", d);
	return 0;
}