//ѭ��С��
//��������a��b��0��a��3000��1��b��3000�������a/b��ѭ��С����ʾ�Լ�ѭ���ڳ��ȡ�
//����a=5��b=43��С����ʾΪ0.(116279069767441860465)��ѭ���ڳ���Ϊ21��
//˼· ������ͬ����ʼѭ��

#include<stdio.h>
#include<iostream>
#include<cstring>
#define _for(i,a,b) for(int i=(a);i<(b);i++)  //forѭ����һ�ּ�д���궨��
#define maxn 3001
using namespace std;

//int main()
//{
//	//r��¼����
//	int a, b, r;
//	//d��¼С�����ֵ�ÿһλ
//	int d[maxn];
//	//count��¼ѭ���ڳ���
//	int count = 0;
//	cin >> a >> b;
//	printf("%d/%d = %d.(", a, b, a / b);
//	//��¼ÿһ��������
//	char step_r[maxn];
//	memset(d, 0, sizeof(d));
//	memset(step_r, 0, sizeof(step_r));
//	if ((a/b)>0)
//		a -= b*(a/b);
//	r = a % b;
//	while (strchr(step_r, r) == NULL) //��ǰ����û�б���¼��
//	{
//		step_r[count] = r; //��¼����
//		r *= 10;
//		d[count] = r / b; //��¼С��
//		count++;
//		r = r % b; //��������
//	}
//	//������
//	_for(i, 0, count)
//		cout << d[i];
//	cout << ")" << endl;
//	cout << count;
//
//	return 0;
//}