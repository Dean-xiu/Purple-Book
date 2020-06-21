//输入一个错位后敲出的字符串（大写），输出打字员原本想输出的句子
//本题是错位1位的例子
//样例输入：
//O S, GOMR YPFSU /
//样例输出： 
//I AM FINE TODAY.

//解法：利用的是数组的存储
#include<stdio.h>
char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
//int main()
//{
//	int i, c;
//	while ((c = getchar()) != EOF)
//	{
//		//找到c在s中的位置
//		for (i = 1; s[i] && s[i] != c; i++);
//		//输出c的前一个字符，进行错位解析
//		if (s[i])
//			putchar(s[i - 1]);
//		else
//			putchar(c);
//	}
//	return 0;
//}