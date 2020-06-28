//循环小数
//输入整数a和b（0≤a≤3000，1≤b≤3000），输出a/b的循环小数表示以及循环节长度。
//例如a=5，b=43，小数表示为0.(116279069767441860465)，循环节长度为21。
//思路 余数相同即开始循环

#include<stdio.h>
#include<iostream>
#include<cstring>
#define _for(i,a,b) for(int i=(a);i<(b);i++)  //for循环的一种简单写法宏定义
#define maxn 3001
using namespace std;

//int main()
//{
//	//r记录余数
//	int a, b, r;
//	//d记录小数部分的每一位
//	int d[maxn];
//	//count记录循环节长度
//	int count = 0;
//	cin >> a >> b;
//	printf("%d/%d = %d.(", a, b, a / b);
//	//记录每一步的余数
//	char step_r[maxn];
//	memset(d, 0, sizeof(d));
//	memset(step_r, 0, sizeof(step_r));
//	if ((a/b)>0)
//		a -= b*(a/b);
//	r = a % b;
//	while (strchr(step_r, r) == NULL) //当前余数没有被记录过
//	{
//		step_r[count] = r; //记录余数
//		r *= 10;
//		d[count] = r / b; //记录小数
//		count++;
//		r = r % b; //更新余数
//	}
//	//输出结果
//	_for(i, 0, count)
//		cout << d[i];
//	cout << ")" << endl;
//	cout << count;
//
//	return 0;
//}