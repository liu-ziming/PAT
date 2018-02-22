/*
2017.2
输入n，判断n是否在n平方的右边出现。
比如1,5,6,25,都在它的平方最右侧出现，就输出yes，否则输出no，
这题好像跟前年的一样，题目的叙述有点问题，当时好多人问老师来着。
*/

#include <stdio.h>

int main()
{
	int n,n2;
	
	while(1)
	{
		scanf("%d",&n);
	n2=n*n;
	int flag=1;
	while(n&&n2)
	{
		int a=n%10;
		n/=10;
		int b=n2%10;
		n2/=10;
		if(a!=b)
		{
			flag=0;break;
		}
	}
	if(n2==0&&n!=0)flag=0;
	if(flag==1) printf("yes\n");
	else printf("no\n");
	 } 
}


 

