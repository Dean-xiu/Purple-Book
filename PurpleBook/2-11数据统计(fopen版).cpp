//如果比赛要求用文件输入输出，但禁止用重定向的方式
#include<stdio.h>
#define INF 10000000

//int main()
//{
//	FILE* fin, * fout;
//	//fopen_s(&fin,"data.in", "rb");
//	//fopen_s(&fout,"data2.out", "wb");
//	int x, n = 0, min = INF, max = -INF, s = 0;
//	if (fin)  //使用fscanf_s，fclose需要对文件判空
//	{
//		while (fscanf_s(fin, "%d", &x) == 1)
//		{
//			s += x;
//			if (x < min)
//				min = x;
//			if (x > max)
//				max = x;
//			n++;
//		}
//	}
//	if (fout && fin)
//	{
//		fprintf_s(fout, "%d %d %.3f\n", min, max, (double)s / n);
//	//	fclose(fin);
//	//	fclose(fout);
//	}
//	return 0;
//}