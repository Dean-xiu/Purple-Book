//输入m个长度均为n的DNA序列，求一个DNA序列，到所有序列的总Hamming距离尽量小。
//输入输入整数m和n（4≤m≤50, 4≤n≤1000） 以及m个长度为n的DNA序列（只包含字母 A，C，G，T）
//输出到m个序列的Hamming距离和最小的DNA序列和对应的距离 
//所输出的序列并非是输入的序列之一

//思路：每列出现最多的即距离最短
//本程序暂不能输出汉明距离 感觉不是很好的程序
#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	char** DNA = new char* [m];
//	//统计 A C G T数量
//	int a[4];
//	for (int i = 0; i < m; i++)
//	{
//		DNA[i] = new char[n];
//	}
//	for (int i = 0; i < m; i++)
//		cin >> DNA[i];
//	memset(a, 0, sizeof(a));
//	//计算每列中出现次数最多的字符
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
