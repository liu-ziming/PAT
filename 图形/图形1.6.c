/*
1-6. 编程，输入n值，输出如下例（n=4）所示的高和下底均为n的等腰梯形：
                   **********
                    ********
                     ******
                      ****            
*/	
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;++i)
	{
		for(j=0;j<i;++j)
		    printf(" ");
		for(k=0;k<2*(n-i-1)+n;++k)
		    printf("*");
		printf("\n");
		
	}
	
}
