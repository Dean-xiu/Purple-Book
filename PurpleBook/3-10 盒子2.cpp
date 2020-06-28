//较为简洁的代码
//思路 
//1、6个矩形需要构成3对完全相同的矩形
//2、6个矩形的12条边应该构成3组完全相同的边
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
//		//使用unorder_map存储每个长宽 并统计个数
//		unordered_map<int, int>m;
//		//使用map存储 pair<int,int>是作为一个值存在的 即mp的键是（w1,h1) 值是0
//		map<pair<int, int>, int>mp;
//		for (int i = 0; i < 6; i++)
//		{
//			int k1, k2;
//			cin >> k1 >> k2;
//			++m[k1];
//			++m[k2];
//			++mp[make_pair(max(k1, k2), min(k1, k2))];
//		}
		//auto根据初始化表达式自动推断变量类型
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
