/*
2-5. ��̣���ȫ��ˮ�ɻ�������νˮ�ɻ�����ָһ����λ�������λ���������ĺ͵��ڸ������磺153 = 1'3 + 5'3+ 3'3
*/ 
#include<stdio.h>
#include<math.h>
void main()
{
	int n;
	for(n=100;n<1000;++n)
	{
		int t=n;int sum=0;
		while(t)
		{
			sum+=pow(t%10,3);
			t/=10;
		}
		if(n==sum)
		    printf("%d ",n);
	}
 } 
