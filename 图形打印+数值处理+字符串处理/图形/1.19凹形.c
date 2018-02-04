/*
 1-19. 编程，输入n值，输出下例（n=5）所示的高为n的图形:
                     *       *
                     **     **
                     ***   ***
                     **** ****
                     *********      
*/
 
#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;++i)
	{
		if(i==n-1)
		    for(j=0;j<2*(n-1)+1;++j)
		        printf("*");
		else
		{
			for(j=0;j<i+1;++j)
		       printf("*");
		    for(k=0;k<2*(n-i-2)+1;++k)
		        printf(" ");		
	    	for(j=0;j<i+1;++j)
		        printf("*");
		}
		printf("\n");
	}
	
	
 } 
