
#include <stdio.h>

int fun(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main()
{
	int n;
	
	while(scanf("%d",&n)!=EOF){
		
		while(n>=10){
			n=fun(n);
		}
		printf("%d\n",n);
	}
	
	
	
	return 0;
 } 
