// 6-����sumֵ//С������ 
#include <stdio.h>

double sum(double n)
{
	if(n==1)
	   return 1;
	else 
	   return sum(n-1)+1/n;
	
}

int main()
{
	double n;
	scanf("%lf",&n);
	printf("%lf",sum(n));
}

 
