
#include <stdio.h>

int main()
{
	int N;
	int M;
	scanf("%d",&N);
	M=N*N;
	while(N&&M){
		int a=N%10;
		int b=M%10;
		if(a!=b){
			printf("No!\n");return 0;
		}
		N/=10;
		M/=10;
	}
	printf("Yes\n"); 
	
	return 0;
}
