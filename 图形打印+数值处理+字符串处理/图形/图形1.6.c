/*
1-6. ��̣�����nֵ�������������n=4����ʾ�ĸߺ��µ׾�Ϊn�ĵ������Σ�
                   **********
                    ********
                     ******
                      ****            
*/	
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;++i)
	{
		for(j=0;j<i;++j)
		    printf(" ");
		for(k=0;k<2*(n-i-1)+n;++k)
		    printf("*");
		printf("\n");
		
	}
	
}
