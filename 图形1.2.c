/*
1-2. ��̣�����n�������������n=5����ʾ��ͼ�Σ�
                *****
                 *****
                  *****
                   *****
                    *****       
*/ 
#include <stdio.h>

void main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		    printf(" ");
		for(k=0;k<n;k++)
		    printf("*");
		printf("\n");
	}
	
	
	
 } 
 
