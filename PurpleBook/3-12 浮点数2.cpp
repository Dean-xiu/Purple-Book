//输入十进制的AeB 输出二进制的MeE的M E
//思路与前一个是一样的，只是代码更精简 
//使用公式m*2^e=A*10^B
//即（1-2^(1/m+1))*2^(2^e-1)=A*10^B
//两边同时求以10为底的对数后，公式化为
//lg(1-2^(1/M+1))+(2^E-1)*lg2=lgA+B
//进行打表 用容器vector打表
#include<vector>
#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<sstream>
using namespace std;
# define _for(i,a,b) for(int i=(a);i<(b);i++)

//int main()
//{
//	const double lg_2 = log10(2.0), lit = 1e-6;
//	vector<double>epow = {0.0}, mpow = { 0.5 };//打表用的vector
//	_for(i, 0, 30) //计算2^E-1
//		//push_back(X)将元素X加入到容器的最后一位
//		//back()返回容器中的最后一个值
//		epow.push_back(2.0 * epow.back()+1.0);
//	_for(i, 0, 10) //计算2^(1/M+1)
//		mpow.push_back(mpow.back() / 2.0);
//	//auto &i是以引用访问容器
//	for (auto& i : mpow)  //计算lg(1-2^(1/M+1))
//	{
//	/*	cout << "之前的i" << i << endl;*/
//		i = log10(1.0 - i);
//		/*cout << "之后的i:" << i << endl;*/
//	}
//		
//	for (auto& i : epow) //计算(2^E-1)*lg2
//		i *= lg_2;
//	double A;
//	int B, M, E;
//	char input[20];
//	while (cin>>input && strcmp(input,"0e0")!=0) //输入
//	{ 
//		*strchr(input, 'e') = ' '; //将字符中的字符e替换为空格
//		sscanf_s(input, "%lf%d", &A, &B);  //sscanf_s可以将空格前的字符读取到A中，空格后的读取到B中
//		A = B * 1.0 + log10(A);  //取出等式右端的值
//		_for(E, 1, epow.size())  //遍历查找答案
//			_for(M, 0, mpow.size())
//				if (fabs(mpow[M] + epow[E] - A) <= lit)
//				{
//					cout << M << " " << E << endl;
//					break;
//				}	
//
//	}
//	return 0;
//}