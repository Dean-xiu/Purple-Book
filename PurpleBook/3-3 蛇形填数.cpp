// ��������
//��n��n����������1��2������n��n��Ҫ��������Ρ�
//���磬n��4ʱ����Ϊ�� 
//10 11 12 1 
//9  16 13 2 
//8  15 14 3 
//7  6  5  4

//�岥����ĸ���
//int a[maxn],b[maxn]
//memcpy(b,a,sizeof(int)*k�� 
//��a����k��Ԫ�ص�����b
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
//	//������ֵ��˼���� �ȼ���Ƿ�Խ�� Ȼ����и�ֵ
//	while (tot < n * n)
//	{
//		//����
//		while (x + 1 < n && !a[x + 1][y])
//			a[++x][y] = ++tot;
//		//����
//		while (y - 1 >= 0 && !a[x][y - 1])
//			a[x][--y] = ++tot;
//		//����
//		while (x - 1 >= 0 && !a[x - 1][y])
//			a[--x][y] = ++tot;
//		//����
//		while (y + 1 < n && !a[x][y + 1])
//			a[x][++y] = ++tot;
//	}
//	//ѭ�����
//	for (x = 0; x < n; x++)
//	{
//		for (y = 0; y < n; y++)
//			printf("%3d", a[x][y]);
//		printf("\n");
//	}
//	return 0;
//}