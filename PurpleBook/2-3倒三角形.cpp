//输入正整数n≤20，输出一个n层的倒三角形。
//例如，n＝5时输出如下：
//######### 
// ####### 
//  ##### 
//   ###
//    #
#include<stdio.h>

//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	if (n > 20)
//	{
//		printf("It's hard to me\n");
//		return 0;
//	}
//	int m = n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		for (int p=2*m-1; p >0; p--)
//		{
//			printf("#");
//		}
//		m--;
//		printf("\n");
//	}
//
//	return 0;
//}