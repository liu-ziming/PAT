//  15- 空心字符棱形 (字母组成）
#include <stdio.h>
int main()
{
	int h;char c; 
	scanf("%c%d",&c,&h);
	int i,j,k;
	for(i=0;i<h;i++)
	{
		for(j=0;j<h-i-1;j++)
		    printf(" ");
		printf("%c",c+i);
		for(k=0;k<2*i-1;k++)
		    printf(" ");
		if(i!=0) printf("%c",c+i);
		printf("\n");
	}
	
	for(i=h-2;i>=0;i--)    //只需外层从大到小,循环内 和上半部分一样 
	{
		for(j=0;j<h-i-1;j++)
		    printf(" ");
		printf("%c",c+i);
		for(k=0;k<2*i-1;k++)
		    printf(" ");
		if(i!=0) printf("%c",c+i);
		printf("\n");
	}
	
	
	
 } 
