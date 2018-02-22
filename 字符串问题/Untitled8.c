
#include <stdio.h>
int func(int n)
{
	if(n==0)  return 0;
	else if(n==1||n==2)  return 1;
	else return  func(n-1)+func(n-2);
}
int main()
{
	int t;
	scanf("%d",&t);
	int n=0;
	while(1)
	{
		if(func(n)>t)
		    break;
		n++;
		
	}
	printf("%d",func(n));
	
 } 
