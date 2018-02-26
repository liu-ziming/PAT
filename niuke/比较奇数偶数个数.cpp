
#include <stdio.h>

int main()
{
	int n;
	int a[10000];
	int i;
	int ou=0,ji=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		if(a[i]%2==0) ou++;
		else          ji++;
	}
	if(ji>=ou)  printf("YES\n");
	else        printf("NO\n");
	
	
	
	return 0;
 } 
