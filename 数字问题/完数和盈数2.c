//完数和盈数 

#include <stdio.h>

int judge(int x)
{
	int i,sum=0;
	for(i=1;i<=x/2;i++)
	{
		if(x%i==0) sum+=i;
	}
	if(sum==x) return 1;
	else if(sum>x) return -1;
	else return 0;
}

int main()
{
	int E[100],G[100];
	int i=0,j=0,k;
	for(k=2;k<=60;k++){
		int flag=judge(k);
		if(flag==1) //完数
		{
			E[i++]=k;
		}
		else if(flag==-1)//盈数 
		{
			G[j++]=k;
		}
	}
	printf("E:"); 
	for(k=0;k<i;k++){
		printf(" %d",E[k]);
	}
	printf("\nG:");
	for(k=0;k<j;k++){
		printf(" %d",G[k]);
	}
}
 
