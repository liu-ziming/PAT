// 14- ������������>

#include <stdio.h>

int main()
{
	int h;
	scanf("%d",&h);
	int i,j,k;
	for(i=0;i<(2*h-1);i++) // first line
	    printf("*");
	printf("\n");
	if(h==0||h==1)
	{
		printf("cannot form it");
		return ;
	}
	for(i=0;i<h-1;i++)
	{
		for(j=0;j<i+1;j++)
		    printf(" ");
		printf("*");
		for(k=0;k<2*h-3-2*(i+1);k++)
		    printf(" ");
		if(i!=h-2)  printf("*");      //���һ��ֻ��һ�� *  
		printf("\n");
	}
	
 } 
