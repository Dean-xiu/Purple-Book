//计算 pi/4=1-1/3+1/5-1/7+...，直到最后一项小于10^-6
#include<stdio.h>

//int main()
//{
//	double sum = 0;
//	for (int i = 0; ; i++)
//	{
//		double term = 1.0 / (i * 2 + 1);
//		if (i % 2 == 0)
//			sum += term;
//		else
//		{
//			sum -= term;
//		}
//		if (term < 1e-6)
//			break;
//	}
//	printf_s("%.6f\n", sum);
//
//	return 0;
//}