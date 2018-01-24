/* 
设N是四位数 ，他的9倍恰好是其反序数
如 1234 的反序数 4321   
求N的值
*/

#include <stdio.h>

int main()
{
	int N,N2,N3;
	int t;
	for(N=1000;N<=9999;N++)
	{
		N3=0;
		N2=9*N;
		t=N;
	    while(t)
	    {
	    	N3=10*N3+t%10;
	    	t/=10;
	    }
	    if(N2==N3)  //t 是反序数 N2 是九倍 
	        printf("%d ",N); 
	   	
	}
	
	
 } 
