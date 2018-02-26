
#include <stdio.h>
#include <stdlib.h>

int insert_sort(int a[],int n){
	int i;int j;
	for(i=1;i<n;i++){
		int t=a[i];
		j=i;
		while(j>0&&a[j]<t){
			a[j] = a[j-1];
			j--;
		}
		a[j]=t;
	}
}
int main()
{
	int n;
	int ai[1000];
	int i;
	int strenth =0;//总的消耗体力 
	scanf("%d",&n); 
	for(i=0;i<n;i++){
		scanf("%d",&ai[i]);
	}
	insert_sort(ai,n);
	while(n>1){
		int t = ai[n-1] + ai[n-2];
		strenth +=t; 
		ai[n-2] =t;
		n--;
		insert_sort(ai,n);
	}
	printf("%d\n",strenth);
	

	return 0; 
}





