
/*
 ��ӡͼ�Σ�
1-1. ��̣�����n�������������n=5����ʾ��ͼ�Σ�
                      *****
                     *****
                    *****
                   *****
                  *****        

*/

#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		    printf(" ");
		for(k=0;k<n;k++)
		    printf("*");
		printf("\n");
	}
	
 } 
