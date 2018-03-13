//
#include <stdio.h>
double jie(int n){
	if(n==1) return 1;
	else return n*jie(n-1);
}

int main()
{
	int n;
	if(n<1) return 0;
	while(scanf("%d",&n)!=EOF)
	{
		int i;double sum=0;
		for(i=1;i<=n;i++){
			sum+=jie(i);
		}
		printf("%.0lf\n",sum);
	}
	
	
	return 0;
 } 

