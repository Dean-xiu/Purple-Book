//�����������ȷֱ�Ϊn1��n2��n1��n2��100����ÿ�и߶�ֻΪ1��2�ĳ�����
//��Ҫ�����Ƿ���һ���߶�Ϊ3�����������ܹ��������ǵ�����������ȡ�
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
#define max 100

//int main()
//{
//	int n1[max], n2[max];
//	int n = 0;
//	string s1, s2;
//	while (cin >> s1)
//	{
//		cin >> s2;
//		int i, j, ans, ans1, ans2;
//		memset(n1, 0, sizeof(n1));
//		memset(n2, 0, sizeof(n2));
//		int l1 = s1.length();
//		int l2 = s2.length();
//		for (int i = 0; i < l1; i++)
//			n1[i] = s1[i] - '0';
//		for (int i = 0; i < l2; i++)
//			n2[i] = s2[i] - '0';
//		//�ƶ�����ĵ��ַ���
//		for (i = 0; i < l2; i++)
//		{
//			for (j = 0; j < 11; j++)
//				if (n2[i + j] + n1[j] > 3)
//					break;
//			if (j == l1)
//				break;
//		}
//		ans1 = (l1 + i > l2) ? l1 + i : l2;
//		//�ƶ�������ַ���
//		for (i = 0; i < l1; i++)
//		{
//			for (j = 0; j < l2; j++)
//				if (n1[i + j] + n2[j] > 3)
//					break;
//			if (j == l2)
//				break;
//		}
//		ans2 = (l2 + i > l1) ? l2 + i : l1;
//		ans = (ans1 < ans2) ? ans1 : ans2;
//		cout << ans << endl;
//	}
//	return 0;
//}