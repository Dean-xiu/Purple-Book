//�����������aabb��4λ��ȫƽ��������ǰ��λ������ȣ�����λ����Ҳ��ȣ�

#include<stdio.h>
#include<math.h>

//int main()
//{
//	//����1���о�aabb�����жϿ�ƽ�����ڽ���ƽ���ܷ����
//	for(int a=1;a<=9;a++)
//		for (int b = 0; b <= 9; b++)
//		{
//			int n = a * 1100 + b * 11;
//			int m = floor(sqrt(n) + 0.5);
//			if (m * m == n)
//				printf_s("%d\n", n);
//		}
//
//	//��2: ö��ƽ�����Ƿ���aabb��
//	for (int x = 30;x<100 ; x++)
//	{
//		int n = x * x;
//		if (n < 1000)
//			continue;
//		if (n > 9999)
//			break;
//		int hi = n / 100;
//		int lo = n % 100;
//		if (hi / 10 == hi % 10 && lo / 10 == lo % 10)
//			printf_s("%d\n", n);
//	}
//
//	return 0;
//}