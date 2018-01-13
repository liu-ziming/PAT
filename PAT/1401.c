
//输入n  1<=n<=9  ，输出高和上底均  n  的等腰梯形 ，如果 n =4 时
//输出图形 如下
//    ****
//   ******
//  ********
// ********** 

#include <stdio.h>

void main()
{
	int n;
	printf("scanf Your num :");
	scanf("%d",&n);
	while(n>9||n<1)
    {
    	printf("Please Try Again :");
    	scanf("%d",&n);
	}
	
	int i;int j,k;
	for(i=0;i<n;++i)
	{
		for(j=0;j<n-i-1;++j)
		    printf(" ");
		for(k=0;k<n+2*i;++k)
		    printf("*");
		printf("\n");
	}
 } 
