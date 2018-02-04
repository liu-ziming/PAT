/*2-1. 编程，输出200以内所有完全平方数C（满足C2=A2+B2）及其个数。
*/ 
#include<stdio.h>

void main()
{
	int c,a,b;int num=0;
	for(c=1;c<=200;++c)
	    for(b=1;b<c;++b)
	        for(a=1;a<=b;++a)
	        {
	        	if(c*c==a*a+b*b)
	        	{
	        		printf("%d  ",c);
	        		num++;
	        		a=201;b=201;
				}	        	
			}
	printf("\n%d",num);            
 } 
