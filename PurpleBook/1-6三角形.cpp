//输入三角形3条边的长度值（均为正整数），判断是否能为直角三角形的3个边长。
//如果可以，则输出yes，如果不能，则输出no。
//如果根本无法构成三角形，则输出not a triangle。

#include<stdio.h>

//int main()
//{
//	int a, b, c;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a + b > c&& a + c > b&& b + c > a)
//	{
//		if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
//			printf("yes\n");
//		else
//			printf("no\n");
//	}
//	else
//	{
//		printf("not a triangle");
//	}
//
//	return 0;
//}