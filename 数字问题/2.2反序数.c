/*
2-2. 设Ｎ是一个四位数，它的９倍恰好是其反序数（例如：123的反序数是321），编程，输出所有满足条件的Ｎ。
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
