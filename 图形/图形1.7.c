/*

1-7. 编程，输入n，输出如下例（n=3）所示的边长为n的菱形：
                        *
                       ***
                      *****
                       ***
                        *  
菱形就是分两步，先一个输入 n 的正三角形，再一个  n-1 的 多一个空格右移 的倒三角形 

*/     

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;++i)
	{
		for(j=0;j<n-i-1;++j)
		    printf(" ");
		for(k=0;k<2*i+1;++k)
		    printf("*");
		printf("\n");
		
	}
	for(i=0;i<n-1;++i)
	{
		for(j=0;j<i+1;++j)  //多一个空格哦 
		    printf(" ");
		for(k=0;k<2*(n-i-2)+1;++k)
		    printf("*"); 
		printf("\n");
	}
	
 } 
