/*
1-29. 编程，输入n值，输出如下例（n=5）所示的高度为n的数字金字塔：
            1       
           121      
          12321     
         1234321    
        123454321          
*/
#include<stdio.h>
int main()
{
	int n ;
	scanf("%d",&n);
	int i,j,k;
	for(i=1;i<=n;++i)
	{
		for(j=0;j<n-i;++j)
		    printf(" ");
		for(k=1;k<=i;++k)
		    printf("%d",k);
		for(k=i-1;k>=1;--k)
		    printf("%d",k);
		printf("\n");
	}
}
