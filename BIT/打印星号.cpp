#include <stdio.h>
define MAX 30
int main()
{
    int n;
    int i,j,k;
    int a[MAX];
    scanf("%d",&n);
    if(n<0||n>9)
    {
    	scanf("%d",&n);    
	}
	for(i=0;i<=n;++i)
	{
		for(j=0;j<=n-i;++j)
		    a[j]=a[2*n-j]='*';
		for(k=0;k<=2*i-1;++k)
		    a[k] = ' '    ;
		for(j=0;j<=2*n;++j)
		    printf("%c",a[j]);    
	}
	
	
 } 
