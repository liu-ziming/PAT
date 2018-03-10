
#include <stdio.h>
int cmp(const void *a,const void *b){
	return *(int *)a-*(int * )b;
}

int main()
{
	int n;
	int a[10000];
	int re; 
	scanf("%d",&n);
	while(n!=0){
	
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	qsort(a,n,sizeof(int),cmp);
	if(n%2==0){
		re = (a[n/2]+a[n/2-1])/2;
		
	}
	else{
		re = a[n/2];
	} 
	printf("%d",re);
	scanf("%d",&n);
	}
	
	return 0;
}
