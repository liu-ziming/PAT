/*1-21. ��̣�����nֵ�����������n=3����ʾ��ͼ�Σ�
                         *   *
                          * *
                           *
                          * *
                         *   *
 **/                        
#include<stdio.h>

void main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;++i)
	{
		for(j=0;j<i;++j)
		    printf(" ");
		if(i==n-1)
		    printf("*");
		else
		{
			printf("*");
	    	for(k=0;k<2*(n-i-2)+1;++k)
		        printf(" ");
	    	printf("*");
		}		
		printf("\n");
	}

	for(i=0;i<n-1;++i)
	{
		for(j=0;j<n-i-2;++j)
		    printf(" ");
		printf("*");
		for(k=0;k<2*i+1;++k)
		    printf(" ");
		printf("*");
		printf("\n");
	}
}
