// 不必要的存储量3
//输入一些数 那两个数最接近
//使用了数组
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int num[1000];

//int main()
//{
//	int n = 0;
//	while (cin>>num[n])  //cin使用enter+ctrl+z的结束效果 比scanf_s好
//		n++;
//	int a = num[0], b = num[1];
//	int dis = abs(num[0] - num[1]);
//	//轮询 
//	for (int i = 0; i < n - 1; i++)
//	{
//		for(int j = i + 1; j < n; j++)
//			if (abs(num[i] - num[j]) < dis)
//			{
//				dis = abs(num[i] - num[j]);
//				a = num[i];
//				b = num[j];
//			}
//	}
//	printf("n1=%d n2=%d dis=%d\n", a, b, dis);
//	return 0;
//}