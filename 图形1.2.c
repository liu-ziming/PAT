/*
1-2. 编程，输入n，输出如下例（n=5）所示的图形：
                *****
                 *****
                  *****
                   *****
                    *****       
*/ 
#include <stdio.h>

void main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		    printf(" ");
		for(k=0;k<n;k++)
		    printf("*");
		printf("\n");
	}
	
	
	
 } 
 
