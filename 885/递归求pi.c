/*
�ݹ鷽����У�
��д���� f(x) ,x �涨�еľ�ȷ�ȣ�
����������* �У�/6=1+1/(2*2)+1/(3*3)+��+1/(n*n),
*/

#include <stdio.h>
#include <math.h>
double func(double x,double n){
	if(1.0/(n*n)<x) return 1.0/(n*n);
	else return 1.0/(n*n) + func(x,n+1);
}

int main()
{
	double x,pi;
	scanf("%lf",&x);
	pi = sqrt(6*func(x,1));
	printf("%lf",pi);
	
 } 
 
