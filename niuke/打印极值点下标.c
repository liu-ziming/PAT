//极值的下标

#include <stdio.h>

int main()
{
	int k;
	scanf("%d",&k);
	int i;
	int a[k+1];
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
	}
	if(a[0]<a[1]||a[0]>a[1]) printf("%d ",0); 
	for(i=1;i<k-1;i++){
		if((a[i]>a[i-1]&&a[i]>a[i+1])||(a[i]<a[i-1]&&a[i]<a[i+1])){
			printf("%d ",i);
		}
	}
	if(a[k-2]>a[k-1]||a[k-2]<a[k-1]) printf("%d",k-1);
	printf("\n");
	
	
	return 0;
 } 
