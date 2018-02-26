//完数  等于因子和

#include <stdio.h>
int judge(int n){
	int i,sum=0;
	for(i=1;i<n;i++){
		if(n%i==0)
			sum+=i;
	}
	if(sum==n) return 1;
	else return 0;
}
int main(){
	int n;
	int i;
	scanf("%d",&n);
	int k=0;
	for(i=1;i<=n;i++){
		
		if(judge(i)==1){
			if(k++!=0) printf(" ");
			printf("%d",i);
		}
		
	}
	
	return 0;
} 
