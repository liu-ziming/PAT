//输入  n  ， 递归  计算表达式  
//  s=1!+2!+3!+.... +n!

#include<stdio.h>

int singlesum(int n)
{
	if(n==1)
	    return 1;
	else
	    return n*singlesum(n-1);
}

void main()
{
	int n;int sum=0;
	scanf("%d",&n);
	while(n<1)
	{
		printf("Try Again : ");
		scanf("%d",&n);
	}
	int i=1;
	for(;i<=n;++i)
	    sum+=singlesum(i);
	printf("s = %d",sum);
 } 
