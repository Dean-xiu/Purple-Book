//��1��2��3������9���3����λ��abc��def��ghi��ÿ������ǡ��ʹ��һ�Σ�
//Ҫ��abc��def��ghi��1��2��3��
//���ա�abc def ghi���ĸ�ʽ������н⣬ÿ��һ���⡣��ʾ������ ̫���Խ

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
//	//�ⷨ1���Ÿ���֮��Ϊ45��֮��Ϊ362880
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