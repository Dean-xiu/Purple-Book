//����ʮ���Ƶ�AeB ��������Ƶ�MeE��M E
//˼·��ǰһ����һ���ģ�ֻ�Ǵ�������� 
//ʹ�ù�ʽm*2^e=A*10^B
//����1-2^(1/m+1))*2^(2^e-1)=A*10^B
//����ͬʱ����10Ϊ�׵Ķ����󣬹�ʽ��Ϊ
//lg(1-2^(1/M+1))+(2^E-1)*lg2=lgA+B
//���д�� ������vector���
#include<vector>
#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<sstream>
using namespace std;
# define _for(i,a,b) for(int i=(a);i<(b);i++)

//int main()
//{
//	const double lg_2 = log10(2.0), lit = 1e-6;
//	vector<double>epow = {0.0}, mpow = { 0.5 };//����õ�vector
//	_for(i, 0, 30) //����2^E-1
//		//push_back(X)��Ԫ��X���뵽���������һλ
//		//back()���������е����һ��ֵ
//		epow.push_back(2.0 * epow.back()+1.0);
//	_for(i, 0, 10) //����2^(1/M+1)
//		mpow.push_back(mpow.back() / 2.0);
//	//auto &i�������÷�������
//	for (auto& i : mpow)  //����lg(1-2^(1/M+1))
//	{
//	/*	cout << "֮ǰ��i" << i << endl;*/
//		i = log10(1.0 - i);
//		/*cout << "֮���i:" << i << endl;*/
//	}
//		
//	for (auto& i : epow) //����(2^E-1)*lg2
//		i *= lg_2;
//	double A;
//	int B, M, E;
//	char input[20];
//	while (cin>>input && strcmp(input,"0e0")!=0) //����
//	{ 
//		*strchr(input, 'e') = ' '; //���ַ��е��ַ�e�滻Ϊ�ո�
//		sscanf_s(input, "%lf%d", &A, &B);  //sscanf_s���Խ��ո�ǰ���ַ���ȡ��A�У��ո��Ķ�ȡ��B��
//		A = B * 1.0 + log10(A);  //ȡ����ʽ�Ҷ˵�ֵ
//		_for(E, 1, epow.size())  //�������Ҵ�
//			_for(M, 0, mpow.size())
//				if (fabs(mpow[M] + epow[E] - A) <= lit)
//				{
//					cout << M << " " << E << endl;
//					break;
//				}	
//
//	}
//	return 0;
//}