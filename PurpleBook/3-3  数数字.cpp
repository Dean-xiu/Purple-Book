//把前n（n≤10000）个整数顺次写在一起：123456789101112…
//数一数0～9各出现多少次（输出10个整数，分别是0，1，…，9出现的次数）。
//思路 使用字符获取输入 使用数组下标完成统计
#include<cstdio>
#include<string.h>
#include<iostream>
using namespace std;

//int main()
//{
//	int num[10];
//	char sets[1000];
//	//初始化所有整数次数为0 
//	memset(num, 0, sizeof(num));
//	scanf_s("%s", sets,sizeof(sets));
//	//进行统计
//	for (int i = 0; sets[i]; i++)
//	{
//		num[sets[i] - '0']++;
//	}
//	for (int i = 0; i < 10; i++)
//		cout << num[i] << "   ";
//
//	return 0;
//}