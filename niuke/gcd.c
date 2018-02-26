//GCD

#include <stdio.h>

int gcd(int x,int y){
	if(x>y) return gcd(y,x);
	if(x==0) return y;
	else return gcd(y%x,x);
}

int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d",gcd(x,y)); 
	
}
