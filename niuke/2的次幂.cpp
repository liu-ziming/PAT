
#include <stdio.h>
int getbit(int n,int i){
	return n>>i&1;    //n除2的i次幂，与1并，判断2的i次幂是否存在 
} 
int print(int n){
	int isfirst=1;
	int i;
	for(i=15;i>=0;i--){
		if(getbit(n,i)){
			if(isfirst==0) printf("+");
			else isfirst=0;
			if(i==0) printf("2(0)");
			else if(i==1)printf("2");
			else{
				printf("2(");
				print(i);   //指数不为1 或0  就递归输出 
				printf(")");
			}
		}
	}
}

int main()
{
	int n;
	;
	while(scanf("%d",&n)!=EOF){
		print(n);
		printf("\n");
	}
	
	
	return 0;
 } 
