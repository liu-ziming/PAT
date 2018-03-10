
#include <stdio.h>

double jie(int x){
	if(x==1||x==0) return 1;
	else return x*jie(x-1);
}

int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	double y1=0,y2=0;
	for(i=1;i<=n;i+=2){
		y1+=jie(i);
	}
	for(i=2;i<=n;i+=2){
		y2+=jie(i);
	} 
	printf("%.0lf %.0lf\n",y1,y2);
	
	
	
	return 0;
 } 
