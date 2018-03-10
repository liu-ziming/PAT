
// 问组合数 C  的二进制最后有多少个连续 的 0  
#include <stdio.h>


int main()
{
	int n,m;
	int a[1000]={-1};int i=0,j;
	int count=0;
	int num;
	scanf("%d%d",&n,&m);
	for(i=n-m+1;i<=n;i++)  //组合数就等于 比如p(6,1) = 6!/(6-1)! =6  
	{                      //n-m+1乘到n 
		int temp=i; 
		while((temp&1)==0){ // i%2 //而 最终二进制最后 0 的个数 就是上面乘积中 
			count++;       //每个数的二进制 最后 0 的个数  之和 
			temp=temp>>1;  //i/2
		}
	}
	printf("%d\n",count);
	return 0;
}
