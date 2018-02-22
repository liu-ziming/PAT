
#include <stdio.h>
#include <string.h>
#define N 3 
int n;int total=0;
int func(int count,char x[])
{
	int i;
	if(count ==0 ){
		for(i=0;i<n;i++)
			printf("%c",x[i]);
		printf("\n");
		total++;
	}
	else{
		for(i=0;i<N;i++){
			x[count-1]='a'+i;
			func(count-1,x);
		}
	}
}

int main()
{
	scanf("%d",&n);
	char x[n];
	func(n,x);
	printf("total:%d",total);
}

