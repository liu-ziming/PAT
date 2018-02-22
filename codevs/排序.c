
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}
 
void main()
{
	int n;int i,j;
	scanf("%d",&n);
	int a[n+1];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,n,sizeof(a[0]),cmp);
	for(i=0;i<n;i++)
	{
		if(i!=0)printf(" ");
		printf("%d",a[i]); 
	}
	
}
