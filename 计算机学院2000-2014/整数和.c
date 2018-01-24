/*
 2- 编写程序， 读入一个整数 N。 若 N 为非负数， 则计算 N 到 2N 之间的整数和；若 N 为一个负数， 则求 2N 到 N 之间的整数和。 
 */
#include <stdio.h>
int main()
{
	int N;int sum=0;
	int i;
	printf("读入N : \n");
	scanf("%d",&N);
    if(N>=0)
    {
    	for(i=N;i<=2*N;i++)
            sum+=i;
        printf("sum = %d",sum);
	}
    else
    {
    	for(i=2*N;i<=N;i++)
            sum+=i;
        printf("sum = %d",sum);
	}
    
	
 } 
