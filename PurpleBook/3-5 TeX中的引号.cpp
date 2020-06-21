//在TeX中，左双引号是“``”，右双引号是“''”。
//输入一篇包含双引号的文章，将它转换成TeX的格式。
//样例输入：
//"To be or not to be," quoth the Bard, "that is the question".
//样例输出： 
//``To be or not to be, '' quoth the Bard, ``that is the question''
#include<stdio.h>
//int main()
//{
//	int c, q = 1;
//	while ((c = getchar()) != EOF)
//	{
//		//判断是双引号 利用q做左右引号的控制
//		if (c == '"')
//		{
//			printf("%s", q ? "``" : "''");
//			q = !q;
//		}
//		//不是双引号就输出字符
//		else
//		{
//			printf("%c", c);
//		}
//	}
//	return 0;
//}