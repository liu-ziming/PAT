/*1-18. 编程，输入n值，输出下例（n=4）所示的边长为n的正六边形：
                      ****
                    *      *
                  *          *
                *              *
                  *          *
                    *      *
                      ****         
*/
#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;++i)
	{
		for(j=0;j<(n-i-1);++j)
		    printf(" ");
		if(i==0)
		    for(k=0;k<n;++k)
		        printf("*");
		else
		{
			printf("*");
			for(k=0;k<2*i+n-2;++k)
			    printf(" ");
			printf("*");
			
		}
		printf("\n");
	}
	for(i=0;i<n-1;++i)
	{
		for(j=0;j<i+1;++j)
		    printf(" ");
		if(i==n-2)
		    for(k=0;k<n;++k)
		        printf("*");
		else
		{
			printf("*");
			for(k=0;k<2*(n-i-2)+n-2;++k)
			    printf(" ");
			printf("*");
			
		}
		printf("\n");
	}
	
	
}
