/*
1-29. ��̣�����nֵ�������������n=5����ʾ�ĸ߶�Ϊn�����ֽ�������
            1       
           121      
          12321     
         1234321    
        123454321          
*/
#include<stdio.h>
int main()
{
	int n ;
	scanf("%d",&n);
	int i,j,k;
	for(i=1;i<=n;++i)
	{
		for(j=0;j<n-i;++j)
		    printf(" ");
		for(k=1;k<=i;++k)
		    printf("%d",k);
		for(k=i-1;k>=1;--k)
		    printf("%d",k);
		printf("\n");
	}
}
