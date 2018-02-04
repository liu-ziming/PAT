/*
2-5. 编程，求全部水仙花数。所谓水仙花数是指一个三位数，其各位数字立方的和等于该数。如：153 = 1'3 + 5'3+ 3'3
*/ 
#include<stdio.h>
#include<math.h>
void main()
{
	int n;
	for(n=100;n<1000;++n)
	{
		int t=n;int sum=0;
		while(t)
		{
			sum+=pow(t%10,3);
			t/=10;
		}
		if(n==sum)
		    printf("%d ",n);
	}
 } 
