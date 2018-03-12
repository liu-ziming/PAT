
#include <stdio.h>
#include <math.h>

int main()
{
	int f=1;
	double n,i=1,sum=0,x;
	double jing;
	scanf("%lf",&jing);
	do{
		x = 4/(4*i-3);
		x = x*f;
		sum+=x;
		f=-f;
		i++;
	}while(fabs(x)>jing);
	printf("%lf %lf",i-1,sum);
	
	
	return 0;
}
