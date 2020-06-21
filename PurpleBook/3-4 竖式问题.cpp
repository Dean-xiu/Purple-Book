//找出所有形如abc* de（三位数乘以两位数）的算式，使得在完整的竖式中，
//所有数字都属于一个特定的数字集合。输入数字集合（相邻数字之间没有空格），输出所有竖式。
//每个竖式前应有编号，之后应有一个空行。最后输出解的总数。
//样例输入：
//2357 
//样例输出： 
//<1>   ..775
//      X..33 
//      ----- 
//       .2325 
//       2325. 
//       ----- 
//       25575
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int count = 0;
//	char s[20], buf[99];
//	// s存储数字集合
//	scanf_s("%s", s,sizeof(s));
//	for (int abc = 111; abc <= 999; abc++)
//	{
//		for (int de = 11; de <= 99; de++)
//		{
//			int x = abc * (de % 10), y = abc * (de / 10), z = abc * de;
//			//sprint_f将abc,de,x,y,z存入buf中 buf通常会大一点
//			sprintf_s(buf, "%d%d%d%d%d", abc, de, x, y, z);
//			int ok = 1;
//			//使用strchr查找单个字符是否在s中
//			for (int i = 0; i < strlen(buf); i++)
//				if (strchr(s, buf[i]) == NULL)
//					ok = 0;
//			if (ok)
//			{
//				printf("<%d>\n", ++count);
//				printf("%5d\nX%4d\n-----\n%5d\n%4d\n----\n%5d\n\n", abc, de, x, y, z);
//			}
//		}
//	}
//	printf("The number of solutions=%d\n", count);
//	return 0;	
//}