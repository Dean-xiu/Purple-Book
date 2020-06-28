//给定6个矩形的长和宽wi和hi（1≤wi，hi≤1000），判断它们能否构成长方体的6个面
//思路 有完全相等的3组长方形
//自己写的代码感觉不是最佳解决方法 代码过于累赘了且使用了较大的二维数组很浪费空间
#include<cstdio>
#include<iostream>
using namespace std;
#define max 10000
int s[max][max];

//int main()
//{
//	int T = 6;
//	int a, b;
//	int count = 0;
//	memset(s, 0, sizeof(s));
//	while (T--)
//	{
//		cin >> a >> b;
//		//保证a>b
//		if (a < b)
//		{
//			int temp = a;
//			a = b;
//			b = temp;
//		}
//		//计算每个长宽一致的长方形出现的次数
//		s[a][b]++;
//		//计算出现相等长方形的组数
//		if (s[a][b] == 2)
//			count++;
//	}
//	//如果是3组相等的长方形 则可能形成长方体
//	if (count == 3)
//		cout << "Possible";
//	else
//	{
//		cout << "Impossible";
//	}
//	return 0;
//}