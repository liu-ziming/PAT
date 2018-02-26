#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		int a[1000];
		int i;
		int x,pos=-1;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		scanf("%d",&x);
		for(i=0;i<n;i++){
			if(x==a[i]){
				pos = i;break;
			}
		}
		printf("%d",pos);
	}
	
	
}
