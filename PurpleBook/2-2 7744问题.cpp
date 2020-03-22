//输出所有形如aabb的4位完全平方数（即前两位数字相等，后两位数字也相等）

#include<stdio.h>
#include<math.h>

//int main()
//{
//	//方法1，列举aabb数，判断开平方后在进行平方能否相等
//	for(int a=1;a<=9;a++)
//		for (int b = 0; b <= 9; b++)
//		{
//			int n = a * 1100 + b * 11;
//			int m = floor(sqrt(n) + 0.5);
//			if (m * m == n)
//				printf_s("%d\n", n);
//		}
//
//	//法2: 枚举平方根是否是aabb数
//	for (int x = 30;x<100 ; x++)
//	{
//		int n = x * x;
//		if (n < 1000)
//			continue;
//		if (n > 9999)
//			break;
//		int hi = n / 100;
//		int lo = n % 100;
//		if (hi / 10 == hi % 10 && lo / 10 == lo % 10)
//			printf_s("%d\n", n);
//	}
//
//	return 0;
//}