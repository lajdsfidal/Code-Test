#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//extern int TMD;//ʹ�ñ���ı���ȫ�ֱ���ʱע��main���������ã���ȫ�ֱ��������ı���main��������ʱ��ȫ�ֱ������ܱ������ı�����
//int main()
//{
//	printf("%d\n", TMD);
//	return 0;
//}



//�������ͣ�
//1�����泣�� 2��const���εĳ����� 3��#define����ı�ʶ������ 4��ö�ٳ���
//#define MAX 10000
//int main()
//{
//	//���泣����
//	3.14;
//	10;
//	'a';
//	"safdsf";
//
//	//const���εĳ�����
//	const int num = 10;//��ʱnum�����Ա��޸�Ϊ����������num�ѱ�constָ����num�ǳ�����
//	num = 20;
//	printf("num=%d\n", num);//��ʱ���򱨴�
//
//
//
//	arr[10] = { 0 };//arr[]��ֻ��Ϊ����
//	const int n = 10;//��ʱnΪ�����������ǳ�������n�޷�����[]��
//	arr[n] = { 0 };
//
//	//#define����ı�ʶ������
//	//int MAX = 20000;//MAX�ѱ����壬��MAX���ɸ��ģ��˴δ���
//	int n = MAX;
//	printf("n=%d\n", n);
//
//	return 0;
//}

//ö�ٳ���
//enum SEX
//{
//	//δ��SEX�Ŀ���ȡֵ
//	MALE=3,//3Ϊ����ֵ����δ����ֵ���ʼֵ��0��ʼ
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


//�ַ���-��Ӣ��˫������������һ���ַ�
//int main()
//{
//	"abcdef";
//	"hello bit";
//	//�ַ����Ľ�����׼��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����׼���������ַ������ݡ�
//	return 0;
//}
// 
//#include <string.h>
//int main()
//{
//	//�ַ�����-��һ����ͬ���͵�Ԫ��
//	//char arr[] = "hello";//�ַ����ڽ����ĵط�������һ��"\0"
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};//�ַ���{'a','b','c'}������һ���ڴ�ռ��У���ʱ����ַ�����û�н�����"\0"�������ӡ������ڴ棬��������ڴ�δ֪
//	char arr3[] = { 'a','b','c','\0' };//���ַ���{'a','b','c'}�м��� '\0'���ӡ�����arr1[]��ͬ
//	//��ӡ�ַ���
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	//��һ���ַ�������
//	int len=strlen("abc");//string length
//	printf("%d\n", len);//������ַ������Ȳ�����"\0"
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//��ӡ������35�����ֵ
//	printf("%d\n", strlen(arr3));
//
//	return 0;
//}
