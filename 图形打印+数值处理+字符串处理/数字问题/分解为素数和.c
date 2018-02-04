/*
2-14. 编程，任意输入一个偶数n，请将它分解为两个素数之和。输出形式为：*=*+*

*/
#include<stdio.h>
int fun(n)
{
	int i;int flag=0;
	for(i=2;i<n/2;++i)
	{
		if(n%i==0)
		{
			flag=1;break;
		}
	}
	if(flag==0)
	    return 1;
	else
	    return 0;
}

int main()
{
	int n;
	scanf("%d",&n);
	while(n%2!=0)
	{
		printf("输入偶数:");
		scanf("%d",&n);
	}
	int i;
	for(i=0;i<n;++i)
	{
	    if(fun(i)&&fun(n-i)&&i<n-i) //条件三 防止重复输出 
	        printf("%3d = %3d + %3d\n",n,i,n-i) ;
	}
	
}

