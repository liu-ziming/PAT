//7-贪吃的猴子

#include <stdio.h>

double func(int i,int n)   //定义为double  保证其健壮性 
{
	if(i==1)
	    return 1;
	else
	    return (func(i-1,n) +n-i+1)*2;
	
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("第一天有%.0lf个桃子",func(n,n));
	
 } 
