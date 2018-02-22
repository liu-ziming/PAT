/*
 2-22. 一个数如果恰好等于它的各因子（该数本身除外）之和（如：6=3+2+1），则称其为"完数"；若因子之和大于该数，则称其为"盈数"。求出2到60之间所有"完数"和"盈数"，并以如下形式输出：
		E: e1 e2 e3 ......(ei为完数)
		G: g1 g2 g3 ......(gi为盈数)
*/

#include<stdio.h>
#include<math.h>

//求各因子之和 
int func(int n)
{
	int sum=0;int j; 
	for(j=1;j<=n/2;j++)   //注意是小于等于 
	    if(n%j==0)  sum+=j;
	return sum;
 } 

int main()
{
	int i;int sum;
	printf("E: ");
	for(i=2;i<=60;++i)
	{
		
		sum=func(i);
		if(i==sum)
		    printf("%d ",i);
	}
	printf("\nG: ");
	for(i=2;i<=60;++i)
	{
		sum=func(i);
		if(i<sum)
		    printf("%d ",i);
	}
	
}
