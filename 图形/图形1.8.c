/*
1-8. 编程，输入n值，输出如下例（n=4）所示的边长均为n的正六边形：
                      ****
                     ******
                    ********
                   **********
                    ********
                     ******
                      ****            当 n=4 时
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
    	for(k=0;k<2*i+n;++k)
    	    printf("*");
    	printf("\n");
    
	}
	//在一个n-1 右移动 一空各的倒梯形
	for(i=0;i<n-1;++i) 
    {
    	for(j=0;j<i+1;++j)
    	    printf(" ");
    	for(k=0;k<2*(n-i-2)+n;++k)
    	    printf("*");
    	printf("\n");
    
	} 
	
	
}
