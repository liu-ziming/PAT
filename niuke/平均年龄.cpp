#include <stdio.h>

int main()
{
	float aver=0,sum=0;
	int n;
	int a[1000];
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	aver = sum / n;
	printf("%.2lf",aver);
	
	
	return 0;
}

