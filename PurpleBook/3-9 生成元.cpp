//���x����x�ĸ�������֮�͵õ�y����˵x��y������Ԫ��
//����n��1��n��100000��������С����Ԫ���޽����0
//���磬n = 216��121��2005ʱ�Ľ�ֱ�Ϊ198��0��1979��
#include<stdio.h>
#include<string.h>
#define maxn 100005
int ans[maxn];

//int main()
//{
//	int T, n;
//	memset(ans, 0, sizeof(ans));
//	//�洢1-10004����������Ԫ
//	for (int m = 1; m < maxn; m++)
//	{
//		int x = m, y = m;
//		while (x > 0)
//		{
//			y += x % 10;
//			x /= 10;
//		}
//		if (ans[y] == 0 || m < ans[y])
//			ans[y] = m;
//	}
//	//T�洢��������ֵ
//	scanf_s("%d", &T);
//	while (T--)
//	{
//		scanf_s("%d", &n);
//		printf("%d\n", ans[n]);
//	}
//	return 0;
//}