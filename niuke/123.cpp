
#include <stdio.h>

int main()
{
	int mark[1000]={0};
	int prime[1000];
	int psize=0;
	int i;
	for(i=2;i<1000;i++){
		if(mark[i]==0) prime[psize++] = i;
		else {
			continue;
		}
		int k;
		for(k=i*i;k<1000;k+=i)  mark[k]=1;
	}
	for(i=0;i<30;i++) printf("%3d ",prime[i]);
	printf("%\n");
	for(i=1;i<30;i++){
		printf(" %3d",prime[i]-prime[i-1]);
	}
	
	
	
 } 
