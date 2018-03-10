//最长上升子序列

#include <stdio.h>
#define MAX 1000
int b[MAX];
int amaxLen[MAX];


int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&b[i]);
	}
	amaxLen[1]=1;
	for(i=2;i<=n;i++){
		int temp=0;
		for(j=1;j<i;j++){
			if(b[j]<b[i]){
				if(amaxLen[j]>temp)
					temp = amaxLen[j];
			}
		}
		amaxLen[i] = temp +1;
	}
	int max=-1;
	for(i=1;i<=n;i++){
		if(max<amaxLen[i]){
			max = amaxLen[i];
		}
	}
	printf("%d",max);
	
	return 0;
 } 
