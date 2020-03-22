//输入n，计算S＝1！＋2！＋3！＋…＋n！的末6位（不含前导0）。
//n≤10^6，n！表示 前n个正整数之积。
#include<stdio.h>

//int main()
//{
//	int n, S = 0, term = 1;
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		term *= i;
//		S += term;
//	}
//	printf_s("%d\n", S%1000000);
//
//	return 0;
//}