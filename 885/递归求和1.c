
#include <stdio.h>
#include <math.h>

double fun(double n)
{
	if(n==1) return 1.0/2;  // ע������ø�������������  0   
	else return fun(n-1) + 1.0/pow(2,n);
}


int main()
{
	double n,sum=0;
	scanf("%lf",&n);
	printf("%lf",fun(n));
	
}


