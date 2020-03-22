//解法一太慢且容易溢出，修改为每步取余
#include<stdio.h>
#include<time.h>

//int main()
//{
//	const int MOD = 1000000;
//	int n, S = 0;
//	scanf_s("%d", &n);
//	//25！末尾有6个零，后面所有项都不会影响末尾的6个数字
//	if (n > 25)
//		n = 25; 
//	for (int i = 1; i <= n; i++)
//	{
//		int term = 1;
//		for (int j = 1; j <= i; j++)
//			term = (term * j % MOD);
//		S = (S + term) % MOD;
//	}
//	printf("%d\n", S);
//	printf("Time used=%.2f\n", (double)clock() / CLOCKS_PER_SEC);
//
//	return 0;
//}