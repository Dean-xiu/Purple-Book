//������������β��
//˼· ����ʽ ��Ϊm*2^e=a*10^b ���� lg(m)+elg(2)=lg(a)+b
//���  �����е�ֵ���������� ͨ���û������ٴӱ����ҵ���Ӧ��ֵ
#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<sstream>
using namespace std;

//int main()
//{
//	double A[20][40];  //�洢10���Ƶ�β��
//	int B[22][40];  //�洢10���Ƶĵ�ָ��
//	int b;
//	//tail��β�� index������
//	double tail, index, a, temp;
//	for(int m=0;m<10;m++)
//		for (int e = 1; e < 31; e++)
//		{
//			tail = 1 - pow(2, -1 - m);
//			index = pow(2, e) - 1;
//			temp = log10(tail) + index * log10(2);
//			B[m][e] = temp;  //tempת��Ϊint��ʱ��С�����ֻᱻ����
//			//temp-B[m][e]=lg(m)+e*lg(2)-b=lg(a)  10^lg(a)=a
//			A[m][e] = pow(10, temp - B[m][e]);  
//		}
//	string s;
//	while (cin >> s && s != "0e0")
//	{
//		s.replace(s.find('e'), 1, " "); //��s�еĵ�һ��e�滻Ϊ�ո�
//		stringstream ss(s);
//		ss >> a >> b; //��Ϊ�ո��Ե�� eǰ��ֵ���洢����a,e���ֵ�洢����b
//		for (int m = 0; m < 10; m++)
//			for (int e = 1; e < 31; e++)
//				//fabs()��abs�������� fabs�����ڸ�����
//				if (b == B[m][e] && fabs(a - A[m][e]) < 1e-5)
//					cout << m << " " << e << endl;
//	}
//	return 0;
//}