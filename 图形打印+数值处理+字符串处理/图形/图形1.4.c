/*
1-4. ��̣�����nֵ�������������n=4����ʾ��ͼ�Σ�
                   *******
                    *****
                     ***
                      *             
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
		for(k=0;k<2*(n-i-1)+1;k++)    //�������ǵĴ��������for�����෴ 
		    printf("*");		
		printf("\n");
		
	}
}
