

#include <stdio.h>
#include <math.h> 
int ping;
int n;
int func(int count,int x[],int j)//count �Ƶݹ����//x[]��¼·��//j��֤�ӵ�ÿ�����ǵ����� 
{
	int i;
	if(count==1) {
		printf("1\n");return ;
	}
	if(count==0){
		int sum=0;
		for(i=0;i<n;i++) sum+=x[i];
		if(sum==ping){
			for(i=n-1;i>=0;i--) 
				printf("%d ",x[i]);
			printf("\n");
		}
		
	}
	else{
		
		for(i=j;i<ping/2;i=i+2){
			x[count-1]=i;//printf("%d\n",x[count-1]);
			func(count-1,x,i+2);
			x[count-1]=0;
		}
	}
	return ;
}


int main()
{
	
	scanf("%d",&n);
	int x[n];
	ping = pow(n,n);
	func(n,x,1);
	
}

