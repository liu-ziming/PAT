/*
2015����
�Ӽ�������nֱ ��nΪ������1<=n<=9) ����д�����ӡ��ͼ������ͼ��
����n=3 
*******
*** ***
**   **
*     *
**   **
*** ***
*******

*/ 


#include <stdio.h>
#define MAX 30
int main()
{
    int n;
    int i,j,k;
    int a[MAX];
    scanf("%d",&n);
    if(n<1||n>9||n%2==0)
    {
    	scanf("%d",&n);    
	}
	for(i=0;i<=n;++i)
	{
		for(j=0;j<=n-i;++j)
		    {
		    	a[j]='*';
				a[2*n-j]='*';
			}
		for(k=n-i+1;k<=n+i-1;++k)
		    a[k] = ' '    ;
		for(j=0;j<=2*n;++j)
		    printf("%c",a[j]);
		printf("\n");    
	}
	for(i=0;i<n;++i)
	{
		for(j=0;j<=i+1;++j)
		    {
		    	a[j]='*';
				a[2*n-j]='*';
			}
		for(k=i+2;k<=2*n-2-i;++k)
		    a[k] = ' '    ;
		for(j=0;j<=2*n;++j)
		    printf("%c",a[j]);
		printf("\n");    
	}
	
 } 
