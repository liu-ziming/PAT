
#include<stdio.h>

void main()
{
	int i,j,n,k;
	while(scanf("%d",&n)!=EOF){
		for(i=n-1;i>=0;i--){
			for(j=0;j<n-i-1;j++)
				printf(" ");
			for(j=1;j<=i+1;j++)
				printf("%d",j);
			for(k=j-2;k>0;k--)
				printf("%d",k);
			printf("\n");
		}
	}
} 
