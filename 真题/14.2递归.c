
#include <stdio.h>
double jie(double i)
{
	if(i==1||i==0) return 1;
	else return i*jie(i-1);
}

double sumc(double n){
	int i;double sum=0;
	for(i=0;i<n;i++) sum+=jie(i+1);
	return sum;
}

int main()
{
	double n;	double sum;
	scanf("%lf",&n);

	sum=sumc(n);
	printf("%.0lf",sum);
}
