/*
8.����void  fun(long  s,long  *t)�Ĺ����ǣ�
�ӵ�λ��ʼȡ������s������λ�ϵ�����
���ι���һ���µ����������t�С�
���磬sΪ7654321ʱ��t�е���Ϊ��7531��
�����޸���������������������ֱ���ں���fun��{}���������ݡ�

��ȡ����λ����
*/

#include <stdio.h>
#include <math.h>

int func(int n)
{
	long t=0,m=0;
	int i=0;
	while(n)
	{
		m=n%10;
		n/=100;    //****
		t+=m*pow(10,i);
		i++; 
	}
	printf("%ld",t);
}

int main()
{
	long n;
	scanf("%ld",&n);
	func(n);
	
	
	
 } 
