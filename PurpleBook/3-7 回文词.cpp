//����һ���ַ������ж����Ƿ�Ϊ���Ĵ��Լ����񴮡�
//�����ַ�����֤��������0
//�������룺 
//NOTAPALINDROME 
//ISAPALINILAPASI 
//2A3MEAS 
//ATOYOTA 
//��������� 
//NOTAPALINDROME -- is not a palindrome.
//ISAPALINILAPASI -- is a regular palindrome. 
//2A3MEAS -- is a mirrored string.
//ATOYOTA -- is a mirrored palindrome.
#include<stdio.h>
#include<string.h>
#include<ctype.h>  //isdigit isalpha�Ȱ����ڸ�ͷ�ļ���
//�洢����Ķ�Ӧֵ
const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
//�洢������Ϣ
const char* msg[] = { "not a palindrome","a regular palindrome","a mirrored string"," a mirrored palindrome" };

// ����ch��Ӧ�ľ���ֵ
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
//		//���ַ������м�ֿ� ���б���
//		for (int i = 0; i < (len + 1) / 2; i++)
//		{
//			//���ǻ��Ĵ�
//			if (s[i] != s[len - 1 - i])
//				p = 0;
//			//���Ǿ���
//			if (r(s[i]) != s[len - 1 - i])
//				m = 0;
//		}
//		printf("%s -- is %s.\n\n", s, msg[m * 2 + p]);
//	}
//	return 0;
//}
