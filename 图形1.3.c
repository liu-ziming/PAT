/*
1-3. 编程，输入n值，输出如下例（n=4）所示的图形：
                      *
                     ***
                    *****
                   *******           
*/ 
#include <stdio.h>

void main()
{
	int n;
	scanf("%d",&n); 
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)   //可通用， 凡是  反斜杠形状  /  ，循环0~ n-i-1  
		    printf(" ");
		for(k=0;k<2*i+1;k++)  
		    printf("*");		
		printf("\n");
		
	}
	
 } 
 
