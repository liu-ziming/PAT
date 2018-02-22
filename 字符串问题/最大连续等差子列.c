#include<stdio.h>

#define N 100
void main()
{
	int a[N],i,j,k=0,n,m,d,count,flag;
	scanf("%d",&n);
	for(n;n>0;n--){
		scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf("%d",&a[i]);
		}
		flag=1;
		for(i=0;i<m;i++){
			if(m==2)
				flag=2;
			else{
				count=1;
				d=a[i]-a[i+1];
				for(j=i+1;j<m;j++)
					if(d==a[j]-a[j+1])count++;else break;				
			if(count>flag)
				flag=count+1;			
			}
		}
		printf("%d\n",flag);
	}

}

