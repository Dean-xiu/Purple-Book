//��Ŀ�Ƚϸ��� �ٶ� �ݺ����յĴ𰸣�Crossword Answers, ACM/ICPC World Finals 1994, UVa232��
//�ڸ�ʹ��*��ʾ
//��������
//2 2
//AT
//* O
//6 7
//AIM * DEN
//* ME * ONE
//UPON * TO
//SO * ERIN
//* SA * OR *
//IES * DEA
//0
//�������
//puzzle #1:
//Across
//1.AT
//3.O
//Down
//1.A
//2.TO
//
//puzzle #2:
//Across
//1.AIM
//4.DEN
//7.ME
//8.ONE
//9.UPON
//11.TO
//12.SO
//13.ERIN
//15.SA
//17.OR
//18.IES
//19.DEA
//Down
//1.A
//2.IMPOSE
//3.MEO
//4.DO
//5.ENTIRE
//6.NEON
//9.US
//10.NE
//14.ROD
//16.AS
//18.I
//20.A
#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;

//int main()
//{
//	int r, c;
//	//���������
//	cin >> r >> c;
//	int count = 0;
//	char** s = new char* [r];  //��¼�����е���ĸ��*
//	int** lable = new int* [r];  //�����ʼ��
//	//�����ά����
//	for (int i = 0; i < r; i++)
//	{
//		s[i] = new char[c];
//		lable[i] = new int[c];
//	}
//	//����
//	for (int i = 0; i < r; i++)
//	{
//		cin >> s[i];
//	}
//	//��ʼ����
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			//һ���׸����߻��ϱ�û�а׸�
//			if (s[i][j] != '*' && (i == 0 || j == 0 || s[i - 1][j] == '*' || s[i][j - 1] == '*'))
//				lable[i][j] = (++count);
//			else
//			{
//				lable[i][j] = 0;
//			}
//		}
//	}
//	//�������
//	cout << "Across" << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			//���򵥴����� λ������ʼ�� ����߽���������λ���Ǻڸ�
//			if (lable[i][j] > 0&&(j==0||s[i][j-1]=='*') )
//			{
//				printf("%d.%c", lable[i][j], s[i][j]);
//				for (int k = j + 1; k < c; k++)
//				{
//					//��⵽�ұߵĺڸ��ֹͣ
//					if (s[i][k] == '*')
//						break;
//					else
//					{
//						cout << s[i][k];
//					}
//				}
//				cout << endl;	
//			}
//		}
//	}
//
//	//�������
//	cout << "Down" << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			//���������� ��ʼλ������ʼ�� Ϊ�ϱ߽���ϱ�����λ��Ϊ�ڸ�
//			if (lable[i][j] > 0 &&(i==0||s[i-1][j]=='*'))
//			{
//				printf("%d.%c", lable[i][j], s[i][j]);
//				for (int k = i + 1; k < r; k++)
//				{
//					if (s[k][j] == '*')
//					{
//						break;
//					}
//					else
//					{
//						cout << s[k][j];
//					}
//				}
//				cout << endl;
//			}
//		}
//	}
//	return 0;
//}

