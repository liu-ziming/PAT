/*1-10. 编程，输入n值，输出如下例（n=4）所示的图形：
                       ****
                        *
                         *
                       ****
*/
#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(j=0;j<n;++j)
		    printf("*");
	printf("\n");
	for(i=0;i<n-2;++i)    //夹心饼干  心只剩n-2   / 型 
	{
		for(j=0;j<i+1;++j)
		    printf(" ");
		printf("*"); 
		printf("\n");
	}
	for(j=0;j<n;++j)
		    printf("*");
    printf("\n");	
	
}
