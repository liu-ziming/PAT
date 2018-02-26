#include <stdio.h>

int main()
{
	int n;int a[1000];int i;
	int max=-1,maxpos,min=99999,minpos;
	scanf("%d",&n);
	while(n<1||n>20){
		scanf("%d",&n);
	}
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>max){
			 maxpos =i;
			 max = a[i];
		}
		if(a[i]<min){
			minpos = i;
			min =a[i];
		}
	}
	if(minpos!=maxpos){
		int t;
		t= a[maxpos];a[maxpos] = a[minpos];a[minpos]=t;
	}
	for(i=0;i<n;i++){
		if(i!=0) printf(" ");
		printf("%d",a[i]);
	}
	
	
 } 
