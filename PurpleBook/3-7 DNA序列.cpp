//����m�����Ⱦ�Ϊn��DNA���У���һ��DNA���У����������е���Hamming���뾡��С��
//������������m��n��4��m��50, 4��n��1000�� �Լ�m������Ϊn��DNA���У�ֻ������ĸ A��C��G��T��
//�����m�����е�Hamming�������С��DNA���кͶ�Ӧ�ľ��� 
//����������в��������������֮һ

//˼·��ÿ�г������ļ��������
//�������ݲ�������������� �о����Ǻܺõĳ���
#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	char** DNA = new char* [m];
//	//ͳ�� A C G T����
//	int a[4];
//	for (int i = 0; i < m; i++)
//	{
//		DNA[i] = new char[n];
//	}
//	for (int i = 0; i < m; i++)
//		cin >> DNA[i];
//	memset(a, 0, sizeof(a));
//	//����ÿ���г��ִ��������ַ�
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (DNA[i][j] == 'A')
//				a[0]++;
//			if (DNA[i][j] == 'C')
//				a[1]++;
//			if (DNA[i][j] == 'G')
//				a[2]++;
//			if (DNA[i][j] == 'T')
//				a[3]++;
//		}
//		if (a[0] > a[1] && a[0] > a[2] && a[0] > a[3])
//			cout << 'A';
//		else if (a[1] > a[0] && a[1] > a[2] && a[1] > a[3])
//			cout << 'C';
//		else if (a[2] > a[0] && a[2] > a[1] && a[2] > a[3])
//			cout << 'G';
//		else
//			cout << 'T';
//		memset(a, 0, sizeof(a));
//	}
//	return 0;
//}
