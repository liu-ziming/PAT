

#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	while(n<1||n>9){
		printf("³¬³ö·¶Î§\n");
		scanf("%d",&n);
	}
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++) printf(" ");
		for(j=0;j<2*i+n;j++){
			printf("*");
		}	
		printf("\n");
	} 
	
	
	return 0;
 } 
 
