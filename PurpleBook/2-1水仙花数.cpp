//输出100～999中的所有水仙花数。若3位数ABC满足ABC＝A^3＋B^3＋C^3，则称其为水仙花 数。
//例如153＝1^3＋5^3＋3^3，所以153是水仙花数。

#include<stdio.h>
#include<math.h>

//int main()
//{
//	for (int i = 100; i < 1000; i++)
//	{
//		int x = i / 100;
//		int y = i % 100 / 10;
//		int z = i % 10;
//		if (i == pow(x, 3) + pow(y, 3) + pow(z, 3))
//			printf("%d\n", i);
//	}
//
//	return 0;
//}