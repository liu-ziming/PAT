// 18 -等值数列段
//最大子串问题 


#include <stdio.h>

int main()
{
	int a[51];
	int n;
	scanf("%d\n",&n);
	int i,j;
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	int begin,end,maxlen=0;
	for(i=0;i<n;i++)
	{
		int len=0;
		for(j=i+1;j<n;j++)
		    if(a[j]==a[i])
		        len++;
		    else
		        break;
		if(len>maxlen)
		{
			maxlen=len;
			begin=i;
			end  =j-1;
		}
	}
	if(maxlen==0)
	    printf("No equal number list");
	else
	    printf("from %d to %d",begin,end);
	
	
 } 
