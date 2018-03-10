
//两个无序数组判断相等（元素一样）
#include <stdio.h> 
int main()
{
	int a[1000],b[1000];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		int numa=0;
		int numb=0;
		int t = a[i];
		for(j=0;j<n;j++){
			if(t==a[j])
				numa++;
		}
		for(j=0;j<n;j++){
			if(t==b[j])
				numb++;
		}
		if(numa!=numb){
			printf("no equal");
			return 0;
		}
	}
	printf("equal");
	
	
	return 0;
 } 
