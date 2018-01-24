/*

2-.写一个类，能接受 int 型的变量，接收变量后能存 储原变量（譬如 12345）和其反向变量(54321) ，最 多处理数量为 10 个，当输入达到 10 个或者输入变 量为 0 的时候停止。并且在类销毁前输出存储的所有 变量。
 例如： 输入:12345,2234,0 输出:1234554321 22344322 

 */

//其实就是数字反向处理问题

#include <stdio.h>
//反响函数
int rev(int *a,int *b)
{
	while(*a)
	{
		*b=(*b)*10+(*a)%10;
		(*a)=*a/10;
	}
	return ;
}

int main()
{
	int init[10],after[10]={0};
	int count=0;int i=0;
	while(scanf("%d",&init[i])&&i<10)
	{
		if(init[i]==0)
		    break; 
		i++;
		count++;
		
 
	}
	
	for(i=0;i<count;i++)
	{
		printf("%d  ",init[i] );
		rev(&init[i],&after[i]);
		printf("%d\n",after[i] );
	}






}
