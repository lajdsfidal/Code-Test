#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//stdio(standard input/output)��׼����/���
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

//C�����к꣨macro����һ��Ԥ����ָ������ڱ���ǰ�������еķ����滻Ϊָ�����ı�


//��ʮ������ƽ��ֵ
//����main����
//int main()
//{
//	//��������arr����
//	int arr[10] = { 0 };
//	int i = 0;//��Ҫ©��i�Ķ���
//	//forѭ����arr����������10������&��1.ȡ��ַ����Unary Operator��;2.��λ���������Bitwise AND Operator����,�˴�&ӦΪȡ��ַ��
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//����sum������forѭ����10����������ӵõ�10������sum
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	//ȡƽ��ֵavg,����ӡavg
//	int avg = sum / 10;
//	printf("avg=%d\n", avg);
//	return 0;
//}