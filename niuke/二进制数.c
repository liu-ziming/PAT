//二进制数


#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		int a[10000];
		int i=0;
		while(n){
			a[i++]=n%2;
			n/=2;
		}
		i--;
		while(i>=0){
			printf("%d",a[i--]);
		}
		printf("\n"); 
		
	} 
	
	
	return 0;
 } 
