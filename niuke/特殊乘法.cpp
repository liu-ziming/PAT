#include <stdio.h>

int main()
{
	long long m,n;
	scanf("%I64d%I64d",&m,&n);
	int a[1000]={0},b[1000]={0};
	int lena=0,lenb=0;
	while(m){
		a[lena++]=m%10;
		m/=10;
	}
	while(n){
		b[lenb++]=n%10;
		n/=10;
	}
	int i,j;
	long long sum=0;
	for(i=0;i<lena;i++){
		for(j=0;j<lenb;j++){
			sum+=a[i]*b[j];
		}
	}
	printf("%I64d",sum);
	return 0;
}
