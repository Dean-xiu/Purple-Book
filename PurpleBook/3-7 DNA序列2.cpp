//����m�����Ⱦ�Ϊn��DNA���У���һ��DNA���У����������е���Hamming���뾡��С��
//���hamming������С������ ��������������е���hamming����
//��ʾ  ��Ҫ����Ŀǣ�ű����� ֻҪ�ܽ������Ϳ���
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

const char a[] = "ACGT";
//int main()
//{
//    int m, n;
//    cin >> m >> n;
//    //������һ�������洢�����DNA���кʹ� 
//    char **s=new char*[m + 1];
//    for (int i = 0; i < m + 2; i++)
//        s[i] = new char[n];
//    //�������ÿ����ACGT���ֵĴ��� 
//    int count[4];
//    //����DNA���� 
//    for (int i = 0; i < m; i++)
//    {
//        cin >> s[i];
//    }
//    //�洢���� 
//    int sum = 0;
//    //���б��� 
//    for (int j = 0; j < n; j++) 
//    {
//        //��ÿ���ж���Ҫ����count����Ϊ0 
//        memset(count, 0, sizeof(count));
//        //ͳ��ÿ���е�ACGT�ĸ��� 
//        for (int i = 0; i < m; i++) 
//        {
//            int k = 0;
//            for (; k < 4; k++)
//            {
//                if (s[i][j] == a[k])
//                {
//                    break;
//                }
//            }
//            count[k]++;
//        }
//        //�ҳ�ÿ����ACGT�������� ͬʱʹ��sum�洢ÿһ�е���hamming����
//        int max = 0;
//        for (int l = 0; l < 4; l++) 
//        {
//            if (count[max] < count[l]) 
//            {
//                max = l;
//            }
//            sum += count[l];
//        }
//        //�ѳ���Ƶ�����Ĵ���� 
//        s[m + 1][j] = a[max];
//        sum -= count[max];  //��ȥ�������Ĵ�������hamming����
//    }
//    //��ӡ���� 
//    for (int j = 0; j < n; j++)
//        printf("%2c", s[m + 1][j]);
//    cout << endl << "hamming_sum=" << sum << endl;
//    return 0;
//}