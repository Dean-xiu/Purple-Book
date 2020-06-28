// 有一个5*5的网格，其中恰好有一个格子是空的，其他格子各有一个字母。
//一共有4种指 令：A, B, L, R，分别表示把空格上、下、左、右的相邻字母移到空格中。
//输入初始网格和指令序列（以数字0结束），输出指令执行完毕后的网格。
//如果有非法指令，应输出“This puzzle has no final configuration.”

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;


//int main()
//{
//	char puzzle[5][5];
//	int x, y;
//	char guide[100];
//	for (int i = 0; i < 5; i++)
//		for (int j = 0; j < 5; j++)
//		{
//			puzzle[i][j] = getchar();
//			//使用 作为空格 找到空格的位置
//			if (puzzle[i][j] == ' ')
//			{
//				x = i;
//				y = j;
//			}
//		}
//	cout << "输入指令" << endl;
//	scanf_s("%s", guide, sizeof(guide));
//	for(int i=0;guide[i];i++)
//	{
//		switch (guide[i])
//		{
//		//向上
//		case 'A':  
//			puzzle[x][y] = puzzle[x - 1][y];
//			puzzle[x - 1][y] = ' ';
//			x = x - 1;
//			break;
//		//向下
//		case 'B':
//			puzzle[x][y] = puzzle[x + 1][y];
//			puzzle[x + 1][y] = ' ';
//			x = x + 1;
//			break;
//		//向左
//		case 'L':
//			puzzle[x][y] = puzzle[x][y - 1];
//			puzzle[x][y - 1] = ' ';
//			y = y - 1;
//			break;
//		//向右
//		case 'R':
//			puzzle[x][y] = puzzle[x][y + 1];
//			puzzle[x][y + 1] = ' ';
//			y = y + 1;
//			break;
//		default:
//			cout << "This puzzle has no final configuration"<<endl;
//			return 0;
//		}
//	}
//	cout << "解谜后" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//			printf("%5c", puzzle[i][j]);
//		cout << endl;
//	}
//		
//	return 0;
//}