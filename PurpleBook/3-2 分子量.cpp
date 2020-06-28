//给出一种物质的分子式（不带括号），求分子量。
//本题中的分子式只包含4种原子，分 别为C, H, O, N
//原子量分别为12.01, 1.008, 16.00, 14.01（单位：g/mol）。
//例如，C6H5OH的分子量为94.108g/mol。

//本程序可以计算字母后有n多数字的情况
#include<cstdio>
#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
//存储分子量
const double mass[] = { 0,0,12.01,0,0,0,0,1.008,0,0,0,0,0,14.01,16.00 };

//int main()
//{
//	char molar[50];
//	double sum = 0;
	//暂存字母
//	char temp = molar[0];
//	scanf_s("%s", molar, sizeof(molar));
//	for (int i = 0; i < strlen(molar); i++)
//	{
//		//判断是否字母
//		if (isalpha(molar[i]))
//		{
//			temp = molar[i];
//			sum += mass[temp - 'A'];
//		}
//		//判断是否数字
//		else
//		{
			//n用来存储个数
//			int n = molar[i] - '0';
//			//判断下一位是否数字，直到不是数字时退出
//			while(isdigit(molar[++i]))
//			{
//				n = n * 10 + (molar[i] - '0');
//			}
//			i--;
//			sum += mass[temp - 'A'] * (n - 1);
//		}
//	}
//	printf("molar mass=%.2f", sum);
//}


	
	
