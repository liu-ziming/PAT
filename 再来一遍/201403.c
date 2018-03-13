
#include <stdio.h>

int main()
{
	int m,n;
	int i,a,b,c,d;
	scanf("%d%d",&m,&n);
	if(m>n) {
		int t;
		t=m;m=n;n=t;
	}
	for(i=m;i<=n;i++){
		if(i%2==0){
			int t=i;
			a=t%10;t/=10;
			b=t%10;t/=10;
			c=t%10;t/=10;
			d=t%10;
			if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
			printf("%d%d%d%d\n",d,c,b,a);
		}
	}
	
	
	
	return 0;
}
