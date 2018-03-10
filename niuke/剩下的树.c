#include <stdio.h>

typedef struct Loc{
	int l,r;
}Loc;
int main()
{
	int L,n;
	scanf("%d",&L);
	scanf("%d",&n);
	int i;
	int a[L+1];//代表所有树 
	Loc loc[n+1];//代表位置区间 
	for(i=1;i<=L;i++){
		a[i]=1;
	}
	for(i=0;i<n;i++){
		scanf("%d%d",&loc[i].l,&loc[i].r);
	}
	int j;
	for(i=0;i<n;i++){
		for(j=loc[i].l;j<=loc[i].r;j++){
			a[j]=0;
		}
	}
	int count=0;
	for(i=1;i<=L;i++){
		if(a[i]!=0) count++;
	}
	printf("%d\n",count);
	
	
	return 0;
}
