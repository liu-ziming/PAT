//12 - 零钱换整钱 

#include <stdio.h>

int main()
{
	int a,b,c;
	int i,j,k;
	for(i=0;i<100;i++)
	    for(j=0;j<100;j++)
	        for(k=0;k<100;k++)
	        {//注意 最后总金额肯定》=1角 
	        	if((i+5*j+10*k)%100==0&&(i+5*j+10*k)>=1&& (18*i==15*j) && (18*i==20*k))
	        	    printf("%d,%d,%d,%.2f\n",i,j,k,(i*0.1+j*0.5+k*1));
			}
	
	
}
