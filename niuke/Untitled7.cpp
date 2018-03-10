
#include <stdio.h>
int T,M;
int a[1000][2];
int time=0,price=0;
int max=-1;
int fun(int i)
{
	int k;
	
	if(time>T){
		if(price>max)  max = price;
		//price = time=0
		return 1;
	}
	for(k=0;k<1000;k++){
		price+=k*a[i][1];
		time+=k*a[i][0];
		fun(i+1);
	}
	
	return 0;
}
int main()
{
	
	scanf("%d%d",&T,&M);
	int i;
	for(i=0;i<M;i++){
		scanf("%d%d",&a[i][0],&a[i][1]);
	}
	
	fun(0);
	
	
	return 0;
}
