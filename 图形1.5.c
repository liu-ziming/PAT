/*

1-5. ��̣�����nֵ�������������n=4����ʾ�ĸߺ��ϵ׾�Ϊn�ĵ������Σ�
                      ****
                     ******
                    ********
                   **********        
*/ 
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;++i)
	{
		for(j=0;j<n-i-1;++j)
		    printf(" ");
		for(k=0;k<2*i+n;++k)
		    printf("*");
		printf("\n");
		
		
	}
	
 } 
