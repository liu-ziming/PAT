


#include <stdio.h>
#include <string.h>
#define m 10000
int cache[1000];
int a0,a1,p,q,k;
int  func(int k)
{
	if(k==0) return 1.0*a0;
	else if(k==1) return 1.0*a1;
	if(cache[k]!=0) return cache[k]; ///动态规划记录中间值 
	else return cache[k] = p*func(k-1)%m+q*func(k-2)%m;
	
}


int main()
{
	scanf("%d%d%d%d",&a0,&a1,&p,&q,&k);
	
	memset(cache,0,sizeof(cache));
	int ans = func(k-1);
	printf("%d",ans);
	
	
	return 0;
}
