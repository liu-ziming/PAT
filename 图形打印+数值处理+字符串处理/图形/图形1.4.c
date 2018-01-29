/*
1-4. 编程，输入n值，输出如下例（n=4）所示的图形：
                   *******
                    *****
                     ***
                      *             
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
		for(k=0;k<2*(n-i-1)+1;k++)    //与正三角的代码的两个for正好相反 
		    printf("*");		
		printf("\n");
		
	}
}
