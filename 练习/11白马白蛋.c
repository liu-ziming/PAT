// 11- °ÙÂí°Ùµ£

#include <stdio.h>


int main()
{
	int a,b,c;
	int i,j,k;
	for(i=0;i<=100;++i)
	    for(j=1;j<=100-i;++j)
	    {
	    	k=100-i-j;
	    	if((3*i+2*j+(k/2.0)*1)==100)
	    	    printf("%d,%d,%d\n",i,j,k);
		}	
 } 
