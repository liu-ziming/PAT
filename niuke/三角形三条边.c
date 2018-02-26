
#include <stdio.h>

int max(int a,int b ,int c){
	if(a>b)
		if(a>c) return a;
		else return c;
	else 
		if(b>c) return b;
		else return c;
}



int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int s = a + b + c - 2*max(a,b,c);
	printf("%d",s);
	
}
