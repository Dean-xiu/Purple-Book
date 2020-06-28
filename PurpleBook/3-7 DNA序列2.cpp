//输入m个长度均为n的DNA序列，求一个DNA序列，到所有序列的总Hamming距离尽量小。
//输出hamming距离最小的序列 并输出到所有序列的总hamming距离
//启示  不要被题目牵着鼻子走 只要能解决问题就可以
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

const char a[] = "ACGT";
//int main()
//{
//    int m, n;
//    cin >> m >> n;
//    //多申请一行用来存储输入的DNA序列和答案 
//    char **s=new char*[m + 1];
//    for (int i = 0; i < m + 2; i++)
//        s[i] = new char[n];
//    //用来标记每列中ACGT出现的次数 
//    int count[4];
//    //输入DNA序列 
//    for (int i = 0; i < m; i++)
//    {
//        cin >> s[i];
//    }
//    //存储距离 
//    int sum = 0;
//    //按列遍历 
//    for (int j = 0; j < n; j++) 
//    {
//        //对每个列都需要重置count数组为0 
//        memset(count, 0, sizeof(count));
//        //统计每列中的ACGT的个数 
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
//        //找出每列中ACGT出现最多的 同时使用sum存储每一列的总hamming距离
//        int max = 0;
//        for (int l = 0; l < 4; l++) 
//        {
//            if (count[max] < count[l]) 
//            {
//                max = l;
//            }
//            sum += count[l];
//        }
//        //把出现频率最多的存入答案 
//        s[m + 1][j] = a[max];
//        sum -= count[max];  //减去出现最多的次数即总hamming距离
//    }
//    //打印出答案 
//    for (int j = 0; j < n; j++)
//        printf("%2c", s[m + 1][j]);
//    cout << endl << "hamming_sum=" << sum << endl;
//    return 0;
//}