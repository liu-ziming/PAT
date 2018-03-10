#include <stdio.h>
int y[1000][1000];
int func(int i,int j)
{
	if(j==0||i==j)return 1;
	return func(i-1,j) + func(i-1,j-1);
}
int main()
{
	int n;
	//>=2
	int i,j;
	
	while(scanf("%d",&n)!=EOF){
	for(i=0;i<n;i++)
		for(j=0;j<=i;j++)
			y[i][j]=func(i,j);
	//printf
	for(i=1;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j!=0) printf(" ");
			printf("%d",y[i][j]);
		}
		printf("\n");
	}
    }//while
	
	return 0;
}
