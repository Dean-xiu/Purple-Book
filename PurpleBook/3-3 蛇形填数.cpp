// 蛇形填数
//在n×n方阵里填入1，2，…，n×n，要求填成蛇形。
//例如，n＝4时方阵为： 
//10 11 12 1 
//9  16 13 2 
//8  15 14 3 
//7  6  5  4

//插播数组的复制
//int a[maxn],b[maxn]
//memcpy(b,a,sizeof(int)*k） 
//从a复制k个元素到数组b
#include<stdio.h>
#include<string.h>
#define maxn 20
//int a[maxn][maxn];
//int main()
//{
//	int n, x, y, tot = 0;
//	scanf_s("%d", &n);
//	memset(a, 0, sizeof(a));
//	tot = a[x = 0][y = n - 1] = 1;
//	//整个赋值的思想是 先检查是否越界 然后进行赋值
//	while (tot < n * n)
//	{
//		//向下
//		while (x + 1 < n && !a[x + 1][y])
//			a[++x][y] = ++tot;
//		//向左
//		while (y - 1 >= 0 && !a[x][y - 1])
//			a[x][--y] = ++tot;
//		//向上
//		while (x - 1 >= 0 && !a[x - 1][y])
//			a[--x][y] = ++tot;
//		//向右
//		while (y + 1 < n && !a[x][y + 1])
//			a[x][++y] = ++tot;
//	}
//	//循环输出
//	for (x = 0; x < n; x++)
//	{
//		for (y = 0; y < n; y++)
//			printf("%3d", a[x][y]);
//		printf("\n");
//	}
//	return 0;
//}