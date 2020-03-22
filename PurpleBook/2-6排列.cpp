//用1，2，3，…，9组成3个三位数abc，def和ghi，每个数字恰好使用一次，
//要求abc：def：ghi＝1：2：3。
//按照“abc def ghi”的格式输出所有解，每行一个解。提示：不必 太动脑筋。

#include<stdio.h>
#include<iostream>
using namespace std;

void set(int n, int m, int arr[])
{
	arr[n] = m / 100;
	arr[n + 1] = m % 100 / 10;
	arr[n + 2] = m % 10;
}
//int main()
//{
//	//解法1：九个数之和为45，之积为362880
//	int abc,def,ghi;
//	int arr[10];
//	memset(arr, 0, sizeof(arr));
//	for (int i = 123; i < 333; i++)
//	{
//		abc = i;
//		def = 2 * i;
//		ghi = 3 * i;
//		int sum = 0, mul = 1;
//		set(1, abc, arr);
//		set(4, def, arr);
//		set(7, ghi, arr);
//		for (int i = 1; i < 10; i++)
//		{
//			sum += arr[i];
//			mul *= arr[i];
//		}
//		if (sum == 45 && mul == 362880)
//			printf("%d %d %d\n", abc, def, ghi);
//	}
//	return 0;
//
//}