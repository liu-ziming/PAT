/*
 1-19. ��̣�����nֵ�����������n=5����ʾ�ĸ�Ϊn��ͼ��:
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
