/*
1-3. ��̣�����nֵ�������������n=4����ʾ��ͼ�Σ�
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
		for(j=0;j<n-i-1;j++)   //��ͨ�ã� ����  ��б����״  /  ��ѭ��0~ n-i-1  
		    printf(" ");
		for(k=0;k<2*i+1;k++)  
		    printf("*");		
		printf("\n");
		
	}
	
 } 
 
