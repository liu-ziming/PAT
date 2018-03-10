//  最简真分数的组合数

#include <stdio.h>
int gcd(int x,int y){
	if(x==0)return y;
	else return gcd(y%x,x);
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1];
	int i,j;
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	int count=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){                   //真分数定义为 
			if(a[i]<a[j]&&gcd(a[i],a[j])==1)  //分子小于分母  最大公约数位 1 
				count++;
		}
	}
	printf("%d\n",count); 
	
	
	return 0;
 } 
