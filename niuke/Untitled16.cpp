
#include <stdio.h>

int main()
{
	int num,a[5];
	int i;
	scanf("%d",&num);
	for(i=0;i<5;i++)  scanf("%d",&a[i]);
	int sum=0;
	for(i=0;i<5;i++){
		if(a[i]<num)
			sum+=a[i];
	}
	printf("%d",sum); 
	
	
	return 0;
}
