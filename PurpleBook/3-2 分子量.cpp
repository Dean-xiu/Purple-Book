//����һ�����ʵķ���ʽ���������ţ������������
//�����еķ���ʽֻ����4��ԭ�ӣ��� ��ΪC, H, O, N
//ԭ�����ֱ�Ϊ12.01, 1.008, 16.00, 14.01����λ��g/mol����
//���磬C6H5OH�ķ�����Ϊ94.108g/mol��

//��������Լ�����ĸ����n�����ֵ����
#include<cstdio>
#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
//�洢������
const double mass[] = { 0,0,12.01,0,0,0,0,1.008,0,0,0,0,0,14.01,16.00 };

//int main()
//{
//	char molar[50];
//	double sum = 0;
	//�ݴ���ĸ
//	char temp = molar[0];
//	scanf_s("%s", molar, sizeof(molar));
//	for (int i = 0; i < strlen(molar); i++)
//	{
//		//�ж��Ƿ���ĸ
//		if (isalpha(molar[i]))
//		{
//			temp = molar[i];
//			sum += mass[temp - 'A'];
//		}
//		//�ж��Ƿ�����
//		else
//		{
			//n�����洢����
//			int n = molar[i] - '0';
//			//�ж���һλ�Ƿ����֣�ֱ����������ʱ�˳�
//			while(isdigit(molar[++i]))
//			{
//				n = n * 10 + (molar[i] - '0');
//			}
//			i--;
//			sum += mass[temp - 'A'] * (n - 1);
//		}
//	}
//	printf("molar mass=%.2f", sum);
//}


	
	
