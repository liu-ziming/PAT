#include <stdio.h>
int main()
{
	int n,total=0,now=0;int to;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;++i)
	{
		scanf("%d",&to);
	
		if(to>now)
			total+=((to-now)*6);
		else
			total+=((now-to)*4);
		total+=5;
		now = to;
		
	}
	printf("%d",total);
	return 0;
}
