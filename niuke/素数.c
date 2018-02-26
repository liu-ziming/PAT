

#include <stdio.h>
#include <math.h>
int sushu(int x)
{
	int i;int flag=1;
	for(i=2;i<=sqrt(x);i++){
		if(x%i==0) flag=0;
	}
	if(flag==1) return 1;
	else return 0;
}

int main()
{
	int n;
	int i;
	
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(i%10==1&&sushu(i)==1){
			printf("%d ",i);
		}
	}
	return 0;
}
