//输入两个正整数n＜m＜10^6，输出1/n^2+1/(n+1)^2+……+1/m^2 ，保留5位小数。
//输入包含多组数据， 结束标记为n＝m＝0。提示：本题有陷阱(陷阱是数据溢出)。 
//样例输入： 
//2 4 
//65536 655360 
//0 0 
//样例输出： 
//Case 1: 0.42361 
//Case 2: 0.00001
#include<stdio.h>

//int main()
//{
//	FILE* fin, * fout;
//	fopen_s(&fin, "sum.in", "rb");
//	fopen_s(&fout, "sum.out", "wb");
//
//	int n, m, kase = 0;
//	double sum = 0;
//	if (fin)
//	{
//		while (fscanf_s(fin, "%d%d", &n, &m) == 2 && (n || m))
//		{
//			for (int i = n; i <= m; i++)
//			{
//				sum += 1.0 / i / i;
//				//解决溢出陷阱
//			}
//			if (fout)
//			{
//				if (kase)
//					fprintf_s(fout, "\n");
//				fprintf_s(fout, "Case%d:%.5f\n", ++kase, sum);
//			}	
//		}
//	}
//	if (fin && fout)
//	{
//		fclose(fin);
//		fclose(fout);
//	}
//	
//	return 0;
//}