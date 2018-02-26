

#include <stdio.h>
#include <stdlib.h>

struct num{
	int x,y;
}num[1000];
int cmp(const void *a,const void *b){
	struct num *aa = (struct num *)a;
	struct num *bb = (struct num *)b;
	if(bb->x!=aa->x)  return aa->x - bb->x ;
	else            return aa->y - bb->y ; 
}
int main()
{
	int n;
	int i; 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&num[i].x,&num[i].y);
	}
	qsort(num,n,sizeof(num[0]),cmp);
	printf("%d %d\n",num[0].x,num[0].y);
	
	return 0;
 } 
 
