/*3-11. 编程，找出一个二维数组中的鞍点，
即该位置上的元素是该行上的最大值，是该列上的最小值。
二维数组也可能没有鞍点。
*/ 
#include<stdio.h>
#include<string.h>

int main()
{
	int maxrow=0,mincol=0;
	int i,j;int max,min;
	int a[100][100]; 	
	int n;
	scanf("%d",&n);
	for(i=0;i<n;++i)
	    for(j=0;j<n;++j)
	        scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		max=a[i][0];
		maxrow=0;
		for(j=0;j<n;j++)   
	    	if(a[i][j]>max)
			{
				max=a[i][j];
				maxrow = i;
			}			
		
		min = a[0][maxrow];
		mincol = 0; 
	    for(j=0;j<n;++j)
	        if(a[j][maxrow]<min)
	        {
	        	min=a[j][maxrow];
	        	mincol = j;
			}
	            
	    if(max==min)
	    {
	    	printf("%d %d",maxrow,mincol);
	    	return;
		}
	        
	}
 } 
