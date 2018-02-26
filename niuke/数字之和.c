
#include <stdio.h>

int main()
{
	int n;int sum1=0,sum2=0;
	double nxn;
	scanf("%d",&n);
	nxn = n*n;
	while(n){
		sum1+=n%10;
		n/=10;
	}
	while(nxn){
		sum2+=(int)nxn%10;
		nxn/=10;
	}
	printf("%d %d",sum1,sum2);
	
	return 0;
 } 
