/*
1- 请输入高度 h，输入一个高为 h，上底边长为 h 的等腰梯形（例如 h=4，图形如下） 
*/

#include <stdio.h>

int main()
{
	int h;
	int i,j,k;
	printf("输入高度h：");
	scanf("%d",&h);
	if(h<1)
	{
		printf("erro!!");
		return ; 
	}
	for(i=0;i<h;i++)//决定高度h行 
	{
	    for(j=0;j<h-1-i;j++)
    	    printf(" ");
		for(k=0;k<h+2*i;k++)
		    printf("*");
		printf("\n");	
	 } 
	
}
