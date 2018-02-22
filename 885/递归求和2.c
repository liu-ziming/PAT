/*
从键盘输入 n，使用递归求此数列的前 n 项和 2/1 3/2 5/3 8/5 13/8

*/

#include <stdio.h>

double func(double n,double x,double y)
{
	if(n==1)  return x/y;
	else return x/y + func(n-1,x+y,x);
}

void main()
{
	double n;
	scanf("%lf",&n);
	printf("%lf",func(n,2,1));
	
}

