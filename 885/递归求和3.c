/*
���� k, n  <sum = k+ kk+kkk+kkkk+.... �ӵ�n��k

*/

#include <stdio.h>

int k,n;

int func(int x,int n)
{
	if(n==1) return 10*x+k;
	else return 10*x+k + func(10*x+k,n-1);
 } 
 
int main()
{
	scanf("%d%d",&k,&n);
	while(k>9||k<1||n>9||n<1) {
		printf("\n��������:");
		 scanf("%d%d",&k,&n);
	}
	printf("%d",func(0,n));
}
 












