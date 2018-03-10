
#include <stdio.h>

int main()
{
	int n,m;
	int source[1000],search[1000];
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++) scanf("%d",&source[i]);
	scanf("%d",&m)  ; 
	for(i=0;i<m;i++)
	scanf("%d",&search[i]);
	for(i=0;i<m;i++){
		int flag=0;
		for(j=0;j<n;j++){
			if(source[j]==search[i])
				flag=1;
		}
		if(flag==1)printf("YES\n");
		else       printf("NO\n") ;
	}
	
	
	return 0;
}
 
