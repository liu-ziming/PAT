
#include <stdio.h>
#include <math.h>
int count=0;
int n;
int p[9];
int print()
{
	count++;
	if(count==n){
		int i;
		for(i=1;i<=8;i++) printf("%d",p[i]);
		printf("\n");
	}
    return 0;
}
int find(int i,int k){
	int j;
	for(j=1;j<k;j++){
		if(p[j]==i||fabs(j-k)==fabs(p[j]-i)){
			return 0;
		}
	}
	return 1;
}
int place(int k)
{
	int i; 
	if(k>8) {
		print();return 0;
	}
	else {
		for(i=1;i<=8;i++){
			if(find(i,k)){
				p[k]=i;
				place(k+1);
			}
		}
	} 
}

int main()
{
	
	scanf("%d",&n);
	place(1);
	return 0;
}
