/*
1-12.  ��̣�����nֵ�������������n=5����ʾ��ͼ�Σ� 
                *****
                 *   *
                  *   *
                   *   *
                    *****         

*/

#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;++i)
	{
		for(j=0;j<i;++j)
		    printf(" ");
		if(i==0||i==n-1)
		    for(k=0;k<n;++k)
		        printf("*");
		else
		{
			printf("*");
			for(k=0;k<n-2;++k)
			    printf(" ");
			printf("*");
		}
		printf("\n");
	}
	
}
