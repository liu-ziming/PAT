/*
1-16. ��̣�����nֵ�������������n=4����ʾ�ĸߺ��µ׾�Ϊn�ĵ������Σ�
                   **********
                    *      *
                     *    *
                      ****            
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
		{
			for(k=0;k<2*(n-1-i)+4;++k)
			    printf("*");
		}
		else
		{
			printf("*");
			for(k=0;k<2*(n-2-i)+4;++k)  //���� 
			    printf(" ");
			printf("*");
		}
		printf("\n");
	 } 
} 

 


