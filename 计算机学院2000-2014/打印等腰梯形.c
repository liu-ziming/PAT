/*
1- ������߶� h������һ����Ϊ h���ϵױ߳�Ϊ h �ĵ������Σ����� h=4��ͼ�����£� 
*/

#include <stdio.h>

int main()
{
	int h;
	int i,j,k;
	printf("����߶�h��");
	scanf("%d",&h);
	if(h<1)
	{
		printf("erro!!");
		return ; 
	}
	for(i=0;i<h;i++)//�����߶�h�� 
	{
	    for(j=0;j<h-1-i;j++)
    	    printf(" ");
		for(k=0;k<h+2*i;k++)
		    printf("*");
		printf("\n");	
	 } 
	
}
