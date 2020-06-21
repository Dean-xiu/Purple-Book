//长度为n的环状串有n种表示法，分别为从某个位置开始顺时针得到。
//输入一个长度为n（n≤100）的环状DNA串（只包含A、C、G、T这4种字符）的一种表示法
//输出该环状串的最小表示
#include<stdio.h>
#include<string.h>
#define maxn 105

//环状串s的表示法p是否比表示法q的字典序小
//int less(const char* s, int p, int q)
//{
//	int n = strlen(s);
//	for (int i = 0; i < n; i++)
//		if (s[(p + i) % n] != s[(q + i) % n])
//			return s[(p + i) % n] < s[(q + i) % n];
//	return 0;
//}
//
//int main()
//{
//	int T;
//	char s[maxn];
//	scanf_s("%d", &T);
//	while (T--)
//	{
//		scanf_s("%s", s, sizeof(s));
//		int ans = 0;
//		int n = strlen(s);
//		//从原序列开始比对
//		for (int i = 1; i < n; i++)
//			if (less(s, i, ans))
//				ans = i;
//		//输出
//		for (int i = 0; i < n; i++)
//			putchar(s[(i + ans) % n]);
//		putchar('\n');	
//	}
//	return 0;
//}