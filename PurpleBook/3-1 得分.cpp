//给出一个由O和X组成的串（长度为1～80），统计得分。
//每个O的得分为目前连续出现 的O的个数，X的得分为0。
//例如，OOXXOXXOOO的得分为1+2+0+0+1+0+0+1+2+3。
//思路 ：不要去想后面有几个O,使用累加让程序自己去看后面有几个O
#include<cstdio>
#include<iostream>
using namespace std;

//int main()
//{
//	int temp = 0, sum = 0;
//	char c;
//	while (cin >> c)
//	{
//		//如果是O就累加
//		if (c == 'O')
//		{
//			temp++;
//			sum += temp;
//		}
//		//如果是x就初始化temp
//		if (c == 'X')
//		{
//			temp = 0;
//		}
//	}
//	cout << sum;
//}