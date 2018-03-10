

#include <stdio.h>
int gcd(int x,int y){
	if(x<y) return gcd(y,x);
	return y?gcd(y,x%y):x;
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",gcd(m,n)); 
	
	return 0;
 } 
