//输入一个字符串，判断它是否为回文串以及镜像串。
//输入字符串保证不含数字0
//样例输入： 
//NOTAPALINDROME 
//ISAPALINILAPASI 
//2A3MEAS 
//ATOYOTA 
//样例输出： 
//NOTAPALINDROME -- is not a palindrome.
//ISAPALINILAPASI -- is a regular palindrome. 
//2A3MEAS -- is a mirrored string.
//ATOYOTA -- is a mirrored palindrome.
#include<stdio.h>
#include<string.h>
#include<ctype.h>  //isdigit isalpha等包含在该头文件中
//存储镜像的对应值
const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
//存储返回信息
const char* msg[] = { "not a palindrome","a regular palindrome","a mirrored string"," a mirrored palindrome" };

// 返回ch对应的镜像值
char r(char ch)
{
	if (isalpha(ch))
		return rev[ch - 'A'];
	return rev[ch - '0' + 25];
}

//int main()
//{
//	char s[30];
//	while (scanf_s("%s", s, sizeof(s)) == 1)
//	{
//		int len = strlen(s);
//		int p = 1, m = 1;
//		//将字符串从中间分开 进行遍历
//		for (int i = 0; i < (len + 1) / 2; i++)
//		{
//			//不是回文串
//			if (s[i] != s[len - 1 - i])
//				p = 0;
//			//不是镜像串
//			if (r(s[i]) != s[len - 1 - i])
//				m = 0;
//		}
//		printf("%s -- is %s.\n\n", s, msg[m * 2 + p]);
//	}
//	return 0;
//}
