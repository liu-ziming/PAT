/*
2-2. �����һ����λ�������ģ���ǡ�����䷴���������磺123�ķ�������321������̣�����������������ģΡ�
*/ 
#include<stdio.h>

void main()
{
	int n,n9;
	for(n=1000;n<10000;++n)
	{ 
	  int t=n;int nn=0;
	while(t)
	{
		nn=nn*10+t%10;
		t/=10;
	}
	if(nn==9*n)
	    printf("%d ",n);
    }
	
}
