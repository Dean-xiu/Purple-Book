//输入正整数a，b，c，输出a/b的小数形式，精确到小数点后c位。
//a，b≤106，c≤100。
//输 入包含多组数据，结束标记为a＝b＝c＝0。 
//样例输入：
//1 6 4 
//0 0 0 
//样例输出：
//Case 1: 0.1667

#include<stdio.h>

//int main()
//{
//	int a, b, c,kase=0;
//	while (scanf_s("%d%d%d", &a, &b, &c) == 3 && (a || b || c))
//	{
//		if (kase)
//			printf("\n");
//		printf("Case%d:%.*lf", ++kase, c, a * 1.0 / b);
//	}
//}