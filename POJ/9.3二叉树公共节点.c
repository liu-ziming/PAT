/*

9.3例题二叉树

//递归问题
//思路：每个节点 n 的父节点为 n/2  ，递归向上找相遇 
*/

#include <stdio.h>

int common(int x,int y)
{
	if(x==y)  return x;
	else if(x>y)   return common(x/2,y);
	else if(x<y)   return common(x,y/2);
    return ;
 } 

int main()
{
    int x,y;
	scanf("%d%d",&x,&y);
	printf("%d\n",common(x,y));
}
