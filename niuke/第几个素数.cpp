
#include <stdio.h>
int prime[10000];
int primesize=0;
int mark[10000];
int main()
{
	int i;
	for(i=0;i<10000;i++){
		mark[i]= 0;
	}
	for(i=0;i<10000;i++){
		if(mark[i]==0) prime[primesize++] = i;
		else continue;
		int j;
		for(j=i*i;j<10000;j+=i){
			mark[i]=1;
		} 
	}
	int n;
	while(scanf("%d",&n)!=EOF)
		printf("%d\n",prime[n]); 
	
	
	return 0;
}
