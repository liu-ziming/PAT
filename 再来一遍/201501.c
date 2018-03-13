
#include <stdio.h>

int main()
{
	int n;
	int i,j;
	while(scanf("%d",&n)!=EOF){
		if(n%2==0||n<1||n>9) return 0;
		for(j=0;j<2*n+1;j++) printf("*");
		printf("\n");
		for(i=1;i<=n;i++){
			for(j=0;j<n-i+1;j++) printf("*");
			for(j=0;j<2*(i-1)+1;j++) printf(" ");
			for(j=0;j<n-i+1;j++) printf("*");
			printf("\n");
		}
		for(i=0;i<n-1;i++){
			for(j=0;j<i+2;j++) printf("*");
			for(j=0;j<2*(n-i-2)+1;j++) printf(" ");
			for(j=0;j<i+2;j++) printf("*");
			printf("\n");
		}
		for(j=0;j<2*n+1;j++) printf("*");
		printf("\n");
		
		
	} 
	
	
	
	return 0;
 } 
