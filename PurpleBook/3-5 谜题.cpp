// ��һ��5*5����������ǡ����һ�������ǿյģ��������Ӹ���һ����ĸ��
//һ����4��ָ �A, B, L, R���ֱ��ʾ�ѿո��ϡ��¡����ҵ�������ĸ�Ƶ��ո��С�
//�����ʼ�����ָ�����У�������0�����������ָ��ִ����Ϻ������
//����зǷ�ָ�Ӧ�����This puzzle has no final configuration.��

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
//			//ʹ�� ��Ϊ�ո� �ҵ��ո��λ��
//			if (puzzle[i][j] == ' ')
//			{
//				x = i;
//				y = j;
//			}
//		}
//	cout << "����ָ��" << endl;
//	scanf_s("%s", guide, sizeof(guide));
//	for(int i=0;guide[i];i++)
//	{
//		switch (guide[i])
//		{
//		//����
//		case 'A':  
//			puzzle[x][y] = puzzle[x - 1][y];
//			puzzle[x - 1][y] = ' ';
//			x = x - 1;
//			break;
//		//����
//		case 'B':
//			puzzle[x][y] = puzzle[x + 1][y];
//			puzzle[x + 1][y] = ' ';
//			x = x + 1;
//			break;
//		//����
//		case 'L':
//			puzzle[x][y] = puzzle[x][y - 1];
//			puzzle[x][y - 1] = ' ';
//			y = y - 1;
//			break;
//		//����
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
//	cout << "���պ�" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//			printf("%5c", puzzle[i][j]);
//		cout << endl;
//	}
//		
//	return 0;
//}