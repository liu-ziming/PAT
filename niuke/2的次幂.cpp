
#include <stdio.h>
int getbit(int n,int i){
	return n>>i&1;    //n��2��i���ݣ���1�����ж�2��i�����Ƿ���� 
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
				print(i);   //ָ����Ϊ1 ��0  �͵ݹ���� 
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
