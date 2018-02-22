// 1+2+4+7+11+16 ÇónÏîºÍ

#include  <stdio.h>

int main()
{
	int sum=0;
	int n,i;
	scanf("%d",&n);
	int x=1;
	for(i=0;i<n;i++)
	{
		x=x+i;
		sum=sum + x; 
		
	}
	printf("%d",sum);
	
}
