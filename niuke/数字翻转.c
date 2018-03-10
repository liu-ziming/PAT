
#include <stdio.h>

int main()
{
	int a,b,aa=0,bb=0;  
	int sum,ssum;
	scanf("%d%d",&a,&b);
	sum = a+b;
	while(a){
		aa=aa*10 + a%10;
		
		a/=10;
	}
	while(b){
		bb = bb*10 + b%10;
		b/=10;
	}
	ssum = aa+bb;
	if(ssum==sum) printf("%d\n",sum);
	else printf("%d",sum);
	
	
	return 0;
}
