//�ҳ���������abc* de����λ��������λ��������ʽ��ʹ������������ʽ�У�
//�������ֶ�����һ���ض������ּ��ϡ��������ּ��ϣ���������֮��û�пո񣩣����������ʽ��
//ÿ����ʽǰӦ�б�ţ�֮��Ӧ��һ�����С����������������
//�������룺
//2357 
//��������� 
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
//	// s�洢���ּ���
//	scanf_s("%s", s,sizeof(s));
//	for (int abc = 111; abc <= 999; abc++)
//	{
//		for (int de = 11; de <= 99; de++)
//		{
//			int x = abc * (de % 10), y = abc * (de / 10), z = abc * de;
//			//sprint_f��abc,de,x,y,z����buf�� bufͨ�����һ��
//			sprintf_s(buf, "%d%d%d%d%d", abc, de, x, y, z);
//			int ok = 1;
//			//ʹ��strchr���ҵ����ַ��Ƿ���s��
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