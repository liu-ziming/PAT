// 13- 找出最大素数

#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	    if(n%i==0)
	        return 0;
	return 1;
}

int main()
{
	int n;
	scanf("%d",&n);
	while(n)
	{
		if(isPrime(n)==1)
		{
			printf("最大素数：%d",n);
			break;
		}		
		n--;
	}
	
 } 
