/*3-一个数如果恰好等于它的各因子（该数本身除外） 子和，
 如： 6=3+2+1， 则称其为“完数”；若因子 之和大于该数，
 则称其为“盈数”。求出 2 到 60 之 间所有“完数”和“盈数”
 ， 并以如下形式输出： E: e1e2e3......(ei 为完数)G:g1g2g3......(gi 为盈数)
 
*/

#include <stdio.h>

//完数
int isE(int n)
{
	int sum=0,i;
	for(i=1;i<n;i++)
	    if(n%i==0)
	        sum+=i;
	if(sum==n)
	    printf(" %d",n);
	
 } 
 
 int isG(int n)
 {
 	int sum=0,i;
	for(i=1;i<n;i++)
	    if(n%i==0)
	        sum+=i;
	if(sum>n)
	    printf(" %d",n);
 	
 	
  } 

int main()
{
	int i;
	printf("E:");
	for(i=2;i<=60;i++)
	    isE(i);
	
	printf("\nG:");
	for(i=2;i<=60;i++)
	    isG(i); 
	
	
 } 
