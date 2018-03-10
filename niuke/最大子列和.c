
#include <stdio.h>

int main()
{
	int n,a[10000000];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)  scanf("%d",&a[i]);
	int sum=0;int max=-1;
	for(i=0;i<n;i++){
		sum+=a[i];
        if(sum>max)max=sum;
		if(sum<0) sum=0;
	}
	printf("%d\n",max);
	
	
	
	return 0;
 } 
