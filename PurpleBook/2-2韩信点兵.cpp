//相传韩信才智过人，从不直接清点自己军队的人数，
//只要让士兵先后以三人一排、五人 一排、七人一排地变换队形，
//而他每次只掠一眼队伍的排尾就知道总人数了。
//输入包含多组 数据，每组数据包含3个非负整数a，b，c，
//表示每种队形排尾的人数（a＜3，b＜5，c＜ 7），
//输出总人数的最小值（或报告无解）。
//已知总人数不小于10，不超过100。输入到文件 结束为止。

#define LOCAL
#include<stdio.h>

//int main()
//{
//#ifdef LOCAL
//	FILE* file;
//	freopen_s(&file, "hanxin.in", "r", stdin);
//	freopen_s(&file, "hanxin.out", "w", stdout);
//#endif
//	int a, b, c,kase=0,n;
//	while (scanf_s("%d%d%d", &a, &b, &c) == 3)
//	{
//		for (n = 10; n < 101; n++)
//		{
//			if (n % 3 == a && n % 5 == b && n % 7 == c)
//			{
//				if (kase)
//					printf("\n");
//				printf("Case%d:%d\n", ++kase, n);
//			}
//
//		}
//	}
//	if (n == 101)	
//		printf("No answer");
//	return 0;
//}