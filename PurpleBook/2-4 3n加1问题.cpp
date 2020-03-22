//对于任意大于1的自然数n，若n为奇数，则将n变为3n＋1，否则变为n的一半。 经过若干次这样的变换，一定会使n变为1。
//例如，3→10→5→16→8→4→2→1
//输入n，输出变换的次数。n≤10^9。

#include<stdio.h>

//int main()
//{
//	int n, count = 0;
//	scanf_s("%d", &n);
//	while (n > 1)
//	{
//		if (n % 2 == 1)
//		{
//			n = 3 * n + 1;
//			count++;
//		}
//		else
//		{
//			n /= 2;
//			count++;
//		}
//	}
//	printf_s("%d\n", count);
//
//	return 0;
//
//}