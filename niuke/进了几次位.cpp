
#include <stdio.h>
#include <string.h> 
int a[100];
int b[100];
int count =0;

void tran(int num[],int n)
{
	int i=0;
	memset(num,0,100);
	while(n){
		num[i]=n%10;
		n/=10;
		i++;
	}
	
}

int add(int a[],int b[])
{
	int i;
	for(i=0;i<100;i++){
		a[i]=a[i] + b[i];
		if(a[i]>9){
			a[i+1]+=1;
			a[i]  -=10;
			count ++;
		}
	}
	
	
	return 0;
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	tran(a,m);
	tran(b,n);
	add(a,b);
	if(count==0)
		printf("NO carry operation.\n");	
	else if(count==1) printf("%d carry operation.\n", count);
    else printf("%d carry operations.\n", count);
	return  0;
}
