//将数字转换为字符
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

//int main()
//{
//	int n,i,j;
//	char a[10];
//	for (int n = 191; n < 333; n++)
//	{
//		sprintf_s(a, "%d", n * 1000000 + n * 2 * 1000 + n * 3);
//		//将abcdefghi存入字符串a中
//		for (j = 0, i = '1'; i <= '9'; memchr(a, i++, 9) && j++);	
//		//memchr从a所指内存区域的前9个字节查找字符i
//		if (j==9)
//			printf("%d %d %d\n", n, 2 * n, 3 * n);
//	}
//
//	return 0;
//}