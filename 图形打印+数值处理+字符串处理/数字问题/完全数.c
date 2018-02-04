/*
2-17. 如果一个数恰好等于它的因子之和，则称该数为"完全数"。
如：6的因子是1、2、3，而6＝1＋2＋3，则６是个"完全数"。
编程，输出1000以内的全部"完全数"。

*/ 
#include <stdio.h>
#include <math.h>
void main()
{
	int n;
	int i,j,k;
	for(i=2;i<=1000;++i)            //因子之和算法 
	{
		int sum=0;              
		for(j=1;j<=i/2;++j)
		{
			if(i%j==0)
			    sum+=j; 
		}
		if(i==sum)
		   printf("%d ",sum);
	}
	
 } 
