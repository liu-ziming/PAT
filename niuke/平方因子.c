//平方因子

#include <stdio.h>

int judge(int n)
{
	int i;
	for(i=2;i*i<=n;i++){    //注意这里的等于号  ，用例 4  会通不过 
		if(n%(i*i)==0) return 1; 
	}
	return 0;
 } 
 
 
int main()
{
	int n;
	scanf("%d",&n);
	if(judge(n)==1)  printf("YES\n");
	else             printf("NO \n");   //注意 用例 n= 1  ，本题可以不单独判断 
	
	return 0;
 } 
