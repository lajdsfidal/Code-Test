#define _CRT_SECURE_NO_WARNINGS
//���ڴ���ĵ�һ��
//scanf_s����ΪVS2022�����ṩ�ģ�����C���Ա�׼�涨
//scanfΪC���Թ涨���ԣ�ͨ����ǿ


//1.д��������(mian����)
//100-500����
//C�����Ǵ��������ĵ�һ�п�ʼִ�еġ���main���������
//��ӡ������
//printfΪ�⺯����ʹ��ǰ������ͷ�ļ� stdio.h

//#include <stdio.h>
//int main()
//{
//	printf("����");

//	return 0;



//����+����+���д���
//��ݼ� ctrl+f5; fn+ctrl+f5


//��������
//���������-д����-��������е�����
//char �ַ���������
//short ������
//int ����
//long ������
//long long ����������
//float �����ȸ�����
//double ˫���ȸ�����
//
////'a'-�ַ�a
//int main()
//{
//	char ch = 'a';//char ����һ���ռ�ch���ڴ洢'a'
//	return 0;
//}
//

///�о�����������ռ�ռ�
//#include  <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	printf("����\n");
//	printf("%d\n", 100);//��ӡһ������
//	//sizeof-�ؼ���-������-�������ͻ������ռ�ռ�Ĵ�С��sizeof ��λ���ֽ�byte��
//	printf("%d\n", sizeof(char));// 1
//	printf("%d\n", sizeof(short));// 2
//	printf("%d\n", sizeof(int));// 4
//	printf("%d\n", sizeof(long));// 4--C���Ա�׼��sizeof(long)>=sizeof(int)����
//	printf("%d\n", sizeof(long long));// 8
//	printf("%d\n", sizeof(float));// 4
//	printf("%d\n", sizeof(double));// 8
//	return 0;
//}

//������еĵ�λ��
//bit-����
//byte-�ֽ�=8 bit
//kb = 1024 byte
//mb = 1024 kb
//gb = 1024 mb
//tb = 1024 gb
//pb = 1024 tb
//�������ʶ������ƣ�1��1 bit��; 0��1 bit��
//�˽��ƣ�0-7   ʮ���ƣ�0-9  ʮ�����ƣ�0-9+A-F

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


//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ��������ȼ�����ȫ�ֱ���
//�������ȫ�ֱ����;ֲ�����������д��һ��
//#include <stdio.h>
//int a = 100;//ȫ�ֱ����������ⲿ����
//int main()
//{
//	int a = 12;//�ֲ������������ڲ�����
//	printf("%d\n", a);
//	return 0;
//}


//scanf���������뺯��
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