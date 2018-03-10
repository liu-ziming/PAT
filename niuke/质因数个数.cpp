



//质因数分解个数

#include <stdio.h>
#include <math.h>
#define MAXN 10010
int prime[1000];
int mark[1000]={0};
int pnum=0;
typedef struct Y{
	int x;
	int count;
}Y;
Y factor[1000];
void init()
{
	int i;
	for(i=2;i<MAXN;i++){
		if(mark[i]==1) continue;
		prime[pnum++] = i;
		int j;
		for(j=i*i;j<MAXN;j+=i)
			mark[j] = 1;
	}
	
	
}


int num=0;//下标 
int main()
{
	init();
   /* int k;
    for(k=0;k<pnum;k++){
        printf("%d",prime[k]);
    }*/
	int n;
	scanf("%d",&n);
	if(n==1){
		printf("%d\n",1);return 0;
	}
	else{
		int i;
		int sqr =sqrt(n);
		for(i=0;i<pnum&&prime[i]<=sqr;i++){
			if(n%prime[i]==0){
				factor[num].x=prime[i];
				factor[num].count = 0;
				while(n%prime[i]==0){
					factor[num].count++;
					n/=prime[i];
				}
				num++;//下一个质因数 
                if(n==1) break;
			}
			
			
		}
		if(n!=1){
			factor[num].x=n;
			factor[num++].count=1;
		}
		int ans=0;//质因数个数
		int j;
		for(j=0;j<num;j++){
			ans+=factor[j].count;
		} 
		printf("%d\n",ans);
		
	}
	
	return 0;
}
 
