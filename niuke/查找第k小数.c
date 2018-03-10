
//

#include <stdio.h>

int main()
{
	int n;
	int a[1000],loc[1000]={0};
	int i ;
	int k;int count = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		loc[a[i]]++;
	} 
	scanf("%d",&k);
	for(i=0;i<1000;i++){
		if(loc[i]!=0)
			count++;
		if(count==k)
			break;
	}
	printf("%d\n",i);
	
	
	
	return 0;
}
