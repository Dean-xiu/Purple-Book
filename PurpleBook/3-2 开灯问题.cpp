//有n盏灯，编号为1～n。第1个人把所有灯打开，第2个人按下所有编号为2的倍数的开关（这些灯将被关掉）
//第3个人按下所有编号为3的倍数的开关（其中关掉的灯将被打开，开着的灯将被关闭）
//依此类推。一共有k个人，问最后有哪些灯开着？
//输 入n和k，输出开着的灯的编号。k≤n≤1000。
//样例输入：
// 7 3 
//样例输出：
// 1 5 6 7
#include<stdio.h>
#include<string.h>  //memset函数包含在该头文件中
# define maxn 1010
//int a[maxn];
//int main()
//{
//	int n, k, first = 1;
//	//初始化数组
//	memset(a, 0, sizeof(a));  
//	scanf_s("%d%d", &n, &k);
//	for (int i = 1; i <= k; i++)  //按人循环
//	{
//		for (int j = 1; j <= n; j++) //轮询灯
//		{
//			if (j % i == 0)  //判断灯的编号是否人的编号的倍数
//				a[j] = !a[j];
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i])
//		{
//			if (first) //如果是第一个不输出空格
//				first = 0;
//			else
//				printf(" ");
//			printf("%d", i);
//		}
//	}
//
//}