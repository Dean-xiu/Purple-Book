//��Ϊ���Ĵ���
//˼· 
//1��6��������Ҫ����3����ȫ��ͬ�ľ���
//2��6�����ε�12����Ӧ�ù���3����ȫ��ͬ�ı�
#include<cstdio>
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<unordered_map>
using namespace std;

//int main()
//{
//	while (true)
//	{
//		//ʹ��unorder_map�洢ÿ������ ��ͳ�Ƹ���
//		unordered_map<int, int>m;
//		//ʹ��map�洢 pair<int,int>����Ϊһ��ֵ���ڵ� ��mp�ļ��ǣ�w1,h1) ֵ��0
//		map<pair<int, int>, int>mp;
//		for (int i = 0; i < 6; i++)
//		{
//			int k1, k2;
//			cin >> k1 >> k2;
//			++m[k1];
//			++m[k2];
//			++mp[make_pair(max(k1, k2), min(k1, k2))];
//		}
		//auto���ݳ�ʼ�����ʽ�Զ��ƶϱ�������
//		for (auto& i : m)
//			if (i.second % 4 != 0)
//			{
//				cout << "impossible";
//				return 0;
//			}
//			
//		for (auto& i : mp)
//			if (i.second % 2 != 0)
//			{
//				cout << "Impossible";
//				return 0;
//			}
//				
//		cout << "Possible";
//	}
//	return 0;
//}
