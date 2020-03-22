//输入一些整数，求出它们的最小值、最大值和平均值（保留3位小数）。
//输入保证这些 数都是不超过1000的整数。
//样例输入： 2 8 3 5 1 7 3 6 
//样例输出： 1 8 4.375
#include<stdio.h>

//int main()
//{
//	const int INF = 10000000;
//	int x, n = 0, min=INF, max=-INF, s = 0;
//	//按Enter ,Ctrl+Z Enter才能结束输入
//	while (scanf_s("%d", &x) == 1)
//	{
//		s += x;
//		if (x < min)
//			min = x;
//		if (x > max)
//			max = x;
//		n++;
//	}
//	printf("%d %d %.3f\n", min, max, (double)s / n);
//
//	return 0;
//}