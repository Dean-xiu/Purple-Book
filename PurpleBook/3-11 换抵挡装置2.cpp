//ʹ��C++ STL���
//�����ⷨ ö�����н��
#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//int main()
//{
//	string down, up;
//	while (cin >> up >> down)
//	{
//		if (up.size() < down.size())
//			swap(up, down);
//		int result = INT_MAX;
//		int n = down.size();
//		for (int i = -n; i < (int)up.size(); ++i)  //ͨ��i�����ӣ����°������������
//		{
//			for (int j = 0; j < down.size(); ++j)
//			{
//				int m = i + j < 0 || i + j >= up.size() ? 0 : up[i + j] - '0';
//				if (m + down[j] - '0' > 3)
//					goto loop;
//			}
//			if (i < 0)
//				result = min(result, (int)(up.size() - i));
//			else if (i < up.size() - down.size())
//				result = min(result, (int)(up.size()));
//			else
//			{
//				result = min(result, (int)(i + down.size()));
//			}
//		loop:;
//		}
//		cout << result;
//	}
//	return 0;
//}