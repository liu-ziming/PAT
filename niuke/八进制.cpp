
#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		int a[100];
		int i=0;
		while(n){
			a[i++]=n%8;
			n/=8;
		}
		i--;
		while(i>=0) printf("%d",a[i--]);
		printf("\n");
	}
	
	
	return 0;
 } 
