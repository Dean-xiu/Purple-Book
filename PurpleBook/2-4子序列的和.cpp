//��������������n��m��10^6�����1/n^2+1/(n+1)^2+����+1/m^2 ������5λС����
//��������������ݣ� �������Ϊn��m��0����ʾ������������(�������������)�� 
//�������룺 
//2 4 
//65536 655360 
//0 0 
//��������� 
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
//				//����������
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