#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//����C���Կ⺯��
//IO����-->printf scanf getchar putchar
//�ַ�����������-->strcmp(�Ƚ�) strlen(���ַ�������)
// �ַ�������-->toupper(Сдת��д)
//�ڴ��������-->memcpy memcmp memset
//ʱ��/���ں���-->time
//��ѧ����-->sqrt(��ƽ��)
//�����⺯��
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//memory - ���� - �ڴ�
//memset - �ڴ�����
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
//char*-->������������
// strcpy-->������
//()��Ϊ�����Ĳ���

//�Զ��庯����
//ret_type fun_name(para, *)
//{
//	statement;//�����
//}
//ret_type ��������
//fun_name ������
//para1 ��������

//дһ�����������ҳ��������������ֵ
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

//дһ���������Ե������������ֵ
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
//	Swap2(a, b);//��ֵ����
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap1(&a, &b);//��ַ����
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}

//ʵ�ʲ�����ʵ�Σ�����ʵ���ݸ������Ĳ�����ʵ�Ρ�ʵ�ο����ǣ����������������ʽ�������ȡ������Ǻ������͵�ʵ�Σ��ڽ��к������õ�ʱ�����Ƕ�Ҫ��ȷ����ֵ���Ա����Щֵ�����βΡ�
//��ʽ�������βΣ�����ʽ������ָ�������������еı�������Ϊ��ʽ����ֻ���ں��������õĹ����в�ʵ�����������ڴ浥Ԫ�����Խ���ʽ��������ʽ�����������������֮����Զ������ˡ������ʽ����ֻ�ں�������Ч.

//�����ĵ���
//1.��ֵ����
//2.��ַ����

//��һ��
//�ж�1000-2000��֮�������
//int is_leap_year(int n)
//{
//	//�ж��Ƿ�Ϊ����
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
//	printf("1000-2000��������Ϊ��\n");
//	//����1000-2000֮������
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж��Ƿ�Ϊ����
//		if (is_leap_year(y) == 1)
//		{
//			//����������������ӡ����
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//������
//int is_leap_year(int n)
//{
//	//�ж��Ƿ�Ϊ����
//	return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	printf("1000-2000��������Ϊ��\n");
//	//����1000-2000֮������
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж��Ƿ�Ϊ����
//		if (is_leap_year(y) == 1)
//		{
//			//����������������ӡ����
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}