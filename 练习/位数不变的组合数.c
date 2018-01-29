//  递归输出  1-  n  （n<=10)  中任意两个数组合的结果

//   此题为  位数 不变 ， 成分 改变 

#include <stdio.h>

int count = 0; //输出项计数
void func(int m,int n)
{
	int i;
	if(m==n)
	    return ;
	else
	{
		for(i=m+1;i<=n;++i)
		    if(++count%10==0)  //输出换行
			    printf("%d,%d\n",m,i);
			else
			     printf("%d,%d ",m,i);
		func(m+1,n);
		
	}
 } 
 
 void main()
 {
 	int n;
 	scanf("%d",&n);
 	if(n>1&&n<=10)
 	    func(1,n);
 	else
 	    printf("ERRO");
 }
