/*

2-、编写一个求菲波那qie数列的递归函数，输入 n 值，
 使用该递归函数，输出如下图形。 
 例 如：当 n=6 时。 
             0 
           0 1 1
          0 1 1 2 3
         0 1 1 2 3 5 8 
       0 1 1 2 3 5 8 13 21 
    0 1 1 2 3 5 8 13 21 34 55 

*/


#include <stdio.h>

int func(int n)
{
	if(n==1||n==2)
		return 1;
	else if(n==0)
		return 0;
	else
		return func(n-1)+func(n-2);
}


int main() 
{
	int n;
	scanf("%d",&n);
    int i,j,k;
    for ( i = 0; i < n; ++i)
    {
    	for(j=0;j<n-i-1;++j)
    		printf("  "); //每行数字用空格隔开了，所有每行的空格要双倍 
    	for(k=0;k<2*i+1;++k)
    		printf("%d ",func(k) );
    	printf("\n");
    }


	return 0;
}
