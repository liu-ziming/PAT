
#include <stdio.h>
int gys(int x,int y){
	if(x>y) return gys(y,x);
	if(y%x==0) return x;
	else return gys(y%x,x);
}



void main()
{
	int count=0,i,j,m,n;
	scanf("%d%d",&m,&n);
	
	printf("%d\n",gys(m,n));
	
}111
