
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int cmp(const void *a,const void *b){
	return *(int *)a - *(int *)b;
}
int main()
{
	int a[100];
	char ch;
	int i=0,j;
	do{
		scanf("%d",&a[i++]);
		ch=getchar();
	}while(ch!='\n');
	qsort(a,i,sizeof(int ),cmp);
	do{
		for(j=0;j<i;j++) printf("%d",a[j]);
		printf("\n"); 
	}while(next_permutation(a,a+i-1));
	
}
