#include <stdio.h>

void main()
{
	int n ;
	int count=0;
	scanf("%d",&n);
	while(n>1000||n<0)
	    scanf("%d",&n);
	while(n!=1)
	{
		if(n%2==0)
		    n = n/2;
		else if(n%2==1)
		    n=(3*n+1)/2;
	    count++;
	}
	printf("%d",count);
 } 
