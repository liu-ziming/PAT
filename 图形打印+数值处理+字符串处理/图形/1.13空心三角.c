/*1-13. ��̣�����nֵ�������������n=4����ʾ��ͼ�Σ�
                      *
                     * *
                    *   *
                   *******         
*/
#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;++i)
	{
		for(j=0;j<(n-1-i);++j)
		    printf(" ");
		if(i==0)
		    printf("*");
		else if(i==n-1)
		   for(k=0;k<2*i+1;++k)
		        printf("*");
		else
		{
			printf("*");
			for(k=0;k<2*i-1;++k)
			    printf(" ");
			printf("*");
		}
		printf("\n");
		 
	}
	
}
