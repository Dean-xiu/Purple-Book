//�������Ҫ�����ļ��������������ֹ���ض���ķ�ʽ
#include<stdio.h>
#define INF 10000000

//int main()
//{
//	FILE* fin, * fout;
//	//fopen_s(&fin,"data.in", "rb");
//	//fopen_s(&fout,"data2.out", "wb");
//	int x, n = 0, min = INF, max = -INF, s = 0;
//	if (fin)  //ʹ��fscanf_s��fclose��Ҫ���ļ��п�
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