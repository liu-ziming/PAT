/*
3-20."1898─要发就发"。将不超过2004(修改为60，不然看不出效果)的所有素数从小到大排成第一行，第二行上的每个数都等于它"右肩"上的素数与"左肩"上的素数之差。编程，输出第二行数中满足下列条件的整数：第二行数中若干个连续整数的和恰好是1898。
        第一行：2   3   5   7   11   13   17  .....  1979   1987   1993
　　　　第二行：  1   2   2   4    2    4     .....       8      6

*/
#include<stdio.h>
#include<string.h>
int isprime(int n)
{
	int i;int flag=1;
	for(i=2;i<=n/2;++i)
	    if(n%i==0)
	        flag=0;
	return flag;
}

int main()
{
	int i,j=0;int a[100];
	for(i=2;i<=60;i++)
	    if(isprime(i)==1)
	        a[j++]=i;
	a[j]='\0';
	for(i=0;a[i]!='\0';i++)
	    printf("%3d   ",a[i]);
	printf("\n");
	for(i=1;a[i]!='\0';i++)
	    printf("   %3d",a[i]-a[i-1]);
	
	
}
