//输入两个字符串s和t
//判断是否可以从t中删除0个或多个字符（其他字符顺序不变），得到字符串s。
//例如，abcde可以得到bce，但无法得到dc。
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

//int main()
//{
//	char s[100];
//	char t[100];
//	bool flag = true;
//	int j = 0;
//	cin >> s >> t;
//	//如果s的长度大于t，则一定不行
//	if (strlen(t) < strlen(s))
//	{
//		cout << "no";
//		return 0;
//	}
//	//遍历t 比对s 成功匹配的长度加一
//	for (int i = 0; t[i]; i++)
//		if (s[j] == t[i])
//			j++;
//	//成功匹配的长度等于s的总长度 则可以
//	if (j == strlen(s))
//		cout << "yes";
//	else
//	{
//		cout << "no";
//	}
//	return 0;
//	
//}