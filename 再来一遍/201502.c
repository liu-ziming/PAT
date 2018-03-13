//类循环组合

#include <stdio.h>
#define m 3
char num[3]={'a','b','c'};
char rcd[100];
int n;
int count =0;
void perm(int l){
	int i;
	if(l==n){
		for(i=0;i<n;i++){
			printf("%c",rcd[i]);
		}
		count++;
		printf(" ");return ;
	}
	for(i=0;i<m;i++){
		rcd[l]=num[i];
		perm(l+1);
	} 
}

int main()
{
	scanf("%d",&n);
	perm(0);
	printf("%d",count);
	
} 
