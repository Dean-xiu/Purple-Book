//����Ϊn�Ļ�״����n�ֱ�ʾ�����ֱ�Ϊ��ĳ��λ�ÿ�ʼ˳ʱ��õ���
//����һ������Ϊn��n��100���Ļ�״DNA����ֻ����A��C��G��T��4���ַ�����һ�ֱ�ʾ��
//����û�״������С��ʾ
#include<stdio.h>
#include<string.h>
#define maxn 105

//��״��s�ı�ʾ��p�Ƿ�ȱ�ʾ��q���ֵ���С
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
//		//��ԭ���п�ʼ�ȶ�
//		for (int i = 1; i < n; i++)
//			if (less(s, i, ans))
//				ans = i;
//		//���
//		for (int i = 0; i < n; i++)
//			putchar(s[(i + ans) % n]);
//		putchar('\n');	
//	}
//	return 0;
//}