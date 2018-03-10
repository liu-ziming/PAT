
#include <stdio.h>
#include <stdlib.h>
struct rat{
	int num;
	char color[100];
}rat[1000],Rat;
int cmp(const void *a,const void *b){
	struct rat *aa=(struct rat *)a;
	struct rat *bb=(struct rat *)b;
	return bb->num-aa->num;
}


int main()
{
	int n;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&rat[i].num);
        scanf("%s",rat[i].color);
	}
	qsort(rat,n,sizeof(rat[0]),cmp);
	for(i=0;i<n;i++){
		printf("%s\n",rat[i].color);
	}
	
	return 0;
 } 
