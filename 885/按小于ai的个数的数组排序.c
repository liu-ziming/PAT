/*
给出数组 a[1..n]，统计数组 a 中小于 a[i]的个数，
并存放于数组 c[1...n] 当中。
然后根据 c 中存放的个数将 a 数组重新排序。 
例 a 数组中的元素: 2,9,4,5 数组 a 中比 a[0]小的为 0,
则 c[0]的值为 0， 数组 a 中比 a[1]小的数有 3 个，
所以 c[1]的值为 3 
*/

#include <stdio.h>

struct node{
	int a;
	int c;
}node[1000];
int main()
{
	int i,j; 

	int n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&node[i].a);
		node[i].c=0; 
	}
	for(i=0;i<n;i++)
	{
		int t=node[i].a;
		for(j=0;j<n;j++){
			if(node[j].a<t)
				node[i].c++;
		}
	}
	//sort
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(node[j].c<node[i].c){  //条件 
				struct node t;
				t=node[i];node[i]=node[j];node[j]=t;
			}
		}
	
	
	for(i=0;i<n;i++)
	{
		printf("%d ",node[i].a);
	}
	
 } 






