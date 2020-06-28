//如果一个字符串可以由某个长度为k的字符串重复多次得到，则称该串以k为周期。
//例如，abcabcabcabc以3为周期（注意，它也以6和12为周期）。 
//输入一个长度不超过80的字符串，输出其最小周期。

#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

//int main()
//{
//	char peri[100];
//	scanf_s("%s", peri, sizeof(peri));
//	int t=10000;
//	bool is_peri = false;
//	//周期最小是1 最大是串长的一半
//	for (int i = 1; i <= strlen(peri) / 2; i++)
//	{
//		for (int j = 0; j < strlen(peri)/2; j++)
//		{
//			if (peri[j] == peri[i + j])
//			{
//				t = i;
//			}
//			else
//				break;	
//		}
//		if (t == i)
//		{
//			is_peri = true;
//			break;
//		}	
//	}
//	if(is_peri)
//		cout << "最小周期是：" << t;
//	else
//	{
//		cout << "不是周期串";
//	}
//	return 0;
//}