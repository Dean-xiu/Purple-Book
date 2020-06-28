//浮点数求阶码和尾数
//思路 ：公式 因为m*2^e=a*10^b 所以 lg(m)+elg(2)=lg(a)+b
//打表  把所有的值都存入数组 通过用户输入再从表中找到对应的值
#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<sstream>
using namespace std;

//int main()
//{
//	double A[20][40];  //存储10进制的尾数
//	int B[22][40];  //存储10进制的的指数
//	int b;
//	//tail是尾数 index做阶码
//	double tail, index, a, temp;
//	for(int m=0;m<10;m++)
//		for (int e = 1; e < 31; e++)
//		{
//			tail = 1 - pow(2, -1 - m);
//			index = pow(2, e) - 1;
//			temp = log10(tail) + index * log10(2);
//			B[m][e] = temp;  //temp转换为int型时，小数部分会被舍弃
//			//temp-B[m][e]=lg(m)+e*lg(2)-b=lg(a)  10^lg(a)=a
//			A[m][e] = pow(10, temp - B[m][e]);  
//		}
//	string s;
//	while (cin >> s && s != "0e0")
//	{
//		s.replace(s.find('e'), 1, " "); //将s中的第一个e替换为空格
//		stringstream ss(s);
//		ss >> a >> b; //因为空格的缘故 e前的值被存储进入a,e后的值存储进入b
//		for (int m = 0; m < 10; m++)
//			for (int e = 1; e < 31; e++)
//				//fabs()与abs的区别是 fabs适用于浮点数
//				if (b == B[m][e] && fabs(a - A[m][e]) < 1e-5)
//					cout << m << " " << e << endl;
//	}
//	return 0;
//}