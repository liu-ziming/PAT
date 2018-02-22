/*
2-9. 编程，输出555555的约数中最大的三位数。	
思路   从三位数中找约数 
*/

#include <stdio.h>
#include <math.h>

void main()
{
	int n;
	for(n=999;n>=100;--n)
	{
		if(555555%n==0)
		{
			printf("%d ",n);break; //最大的 
		}
	}
	
 } 
 

 
