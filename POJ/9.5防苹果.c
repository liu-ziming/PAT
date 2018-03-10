/*
9.5防苹果

无顺序组合问题

*/
#include <stdio.h>

 
int count(int x,int y)
{
	if(y==1||x==0)  return 1;   //只有一个盘子或者0个苹果结束 
	if(x<y)   return count(x,x);        //盘子多与苹果了，苹果 苹果 
	return    count(x,y-1)+count(x-y,y);  //分两类  至少一个盘子y空   全部不空，每个盘子减少一个苹果x-y  
	
 } 

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		int x,y;    //x个苹果y个盘子 
		scanf("%d%d",&x,&y);
		printf("%d\n",count(x,y));
	}
	
	
	
}
