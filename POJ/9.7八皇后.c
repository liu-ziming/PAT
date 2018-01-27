/*
9.7 八皇后问题

*/


#include <stdio.h>
int num=0,ans[92][8],hang[8],n,b,i;

void queen(int i)
{
	int j,k;  // j k  必须是局部变量 ，否则结果出不来，很容易混乱 
	if(i==8)
	{
		for(j=0;j<8;++j)
		    ans[num][j]=hang[j]+1;//写入一组新值 
		num++;
		return ;
		    
	}
	
	{
		for(j=0;j<8;++j)  //列 
		{
			for(k=0;k<i;++k)  // 0~i-1行 与 （i,j) 比较 
		        if(j==hang[k]||(j-hang[k]==i-k)||(hang[k]-j==i-k))
		             break;
		    if(k==i)
		    {
		    	hang[i]=j;
		    	queen(i+1);
			}
		}//for
		        
	}
}

int main()
{
	num=0;
	queen(0);
	scanf("%d",&n);
	int i;
	for(i=0;i<n;++i)
	{
		scanf("%d",&b);
		int j;
		for(j=0;j<8;j++)
		    printf("%d",ans[b-1][j]);
		printf("\n");
	}
	
	
 } 
