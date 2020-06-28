//题目比较复杂 百度 纵横字谜的答案（Crossword Answers, ACM/ICPC World Finals 1994, UVa232）
//黑格使用*表示
//样例输入
//2 2
//AT
//* O
//6 7
//AIM * DEN
//* ME * ONE
//UPON * TO
//SO * ERIN
//* SA * OR *
//IES * DEA
//0
//样例输出
//puzzle #1:
//Across
//1.AT
//3.O
//Down
//1.A
//2.TO
//
//puzzle #2:
//Across
//1.AIM
//4.DEN
//7.ME
//8.ONE
//9.UPON
//11.TO
//12.SO
//13.ERIN
//15.SA
//17.OR
//18.IES
//19.DEA
//Down
//1.A
//2.IMPOSE
//3.MEO
//4.DO
//5.ENTIRE
//6.NEON
//9.US
//10.NE
//14.ROD
//16.AS
//18.I
//20.A
#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;

//int main()
//{
//	int r, c;
//	//输入横纵列
//	cin >> r >> c;
//	int count = 0;
//	char** s = new char* [r];  //记录格子中的字母和*
//	int** lable = new int* [r];  //标记起始格
//	//申请二维数组
//	for (int i = 0; i < r; i++)
//	{
//		s[i] = new char[c];
//		lable[i] = new int[c];
//	}
//	//输入
//	for (int i = 0; i < r; i++)
//	{
//		cin >> s[i];
//	}
//	//起始格标记
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			//一个白格的左边或上边没有白格
//			if (s[i][j] != '*' && (i == 0 || j == 0 || s[i - 1][j] == '*' || s[i][j - 1] == '*'))
//				lable[i][j] = (++count);
//			else
//			{
//				lable[i][j] = 0;
//			}
//		}
//	}
//	//横向输出
//	cout << "Across" << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			//横向单词条件 位置是起始格 是左边界或左边相邻位置是黑格
//			if (lable[i][j] > 0&&(j==0||s[i][j-1]=='*') )
//			{
//				printf("%d.%c", lable[i][j], s[i][j]);
//				for (int k = j + 1; k < c; k++)
//				{
//					//检测到右边的黑格就停止
//					if (s[i][k] == '*')
//						break;
//					else
//					{
//						cout << s[i][k];
//					}
//				}
//				cout << endl;	
//			}
//		}
//	}
//
//	//纵向输出
//	cout << "Down" << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			//纵向条件： 起始位置是起始格 为上边界或上边相邻位置为黑格
//			if (lable[i][j] > 0 &&(i==0||s[i-1][j]=='*'))
//			{
//				printf("%d.%c", lable[i][j], s[i][j]);
//				for (int k = i + 1; k < r; k++)
//				{
//					if (s[k][j] == '*')
//					{
//						break;
//					}
//					else
//					{
//						cout << s[k][j];
//					}
//				}
//				cout << endl;
//			}
//		}
//	}
//	return 0;
//}

