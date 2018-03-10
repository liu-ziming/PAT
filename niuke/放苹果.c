

#include <stdio.h>

int fun(int n,int m)
{
	if( n==1||m==0 ) return 1;
	if(n>m)  return fun(m,m);
	return fun(n,m-n) + fun(n-1,m);
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",fun(n,m));
	
	return 0;
}
