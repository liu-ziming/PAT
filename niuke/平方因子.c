//平方因子

#include <stdio.h>

int judge(int n)
{
	int i;
	for(i=2;i*i<n;i++){
		if(n%(i*i)==0) return 1; 
	}
	return 0;
 } 
 
 
int main()
{
	int n;
	scanf("%d",&n);
	if(judge(n)==1)  printf("YES\n");
	else             printf("NO \n"); 
	
	return 0;
 } 
