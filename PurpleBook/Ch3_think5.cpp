//不必要的存储量
//输入一些数，求它们的方差
//使用数组
#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

//int main()
//{
//	int num[100];
//	int n = 0;
//	double avg = 0.0, sum = 0.0, psum = 0.0;
//	//输入数据
//	while (cin >> num[n])
//	{
//		sum += num[n];
//		n++;
//	}
//	avg = sum / n;
//	//计算方差
//	for (int i = 0; i < n; i++)
//	{
//		psum += pow((num[i] - avg), 2);
//	}
//	psum /= n;
//	printf("sum=%.2f avg=%.2f variance:%.2f",sum,avg,psum);
//	return 0;
//}