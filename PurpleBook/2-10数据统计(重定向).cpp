//手动输入很麻烦，使用文件输入输出重定向
#define LOCAL
#include<stdio.h>
#define INF 10000000

//int main()
//{
//#ifdef LOCAL
//	FILE* file;
//	freopen_s(&file, "data.in", "r", stdin);  
//	//data.in是自己创建的
//	freopen_s(&file,"data.out", "w", stdout);
//	//data.out是程序运行结束后自动生成的
//#endif
//
//	int x, n = 0, min = INF, max = -INF, s = 0;
//	while (scanf_s("%d", &x) == 1)
//	{
//		s += x;
//		if (x < min)
//			min = x;
//		if (x > max)
//			max = x;
//		n++;
//	}
//	printf("%d %d %.3f\n", min, max, (double)s / n);
//	
//	return 0;
//}