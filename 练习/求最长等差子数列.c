#include <stdio.h>
#define MAXSIZE 100
int main()
{
	int i,j,k;
	int n,m;  int a[MAXSIZE];int delta;
	int maxlen=1,count=0;
	scanf("%d\n",&n);
	while(n)
	{
		maxlen=1;
		scanf("%d\n",&m);
		for(i=0;i<m;++i)
		    scanf("%d",&a[i]);
		if(m==1)
		    maxlen=1;
		else if(m==2)
		    maxlen =2;
		else 
		    for(j=1;j<m;j++)
	    	{
			    delta=a[j]-a[j-1];
			    count =1; //每次重新找等差数列先初始化计数器 
			    for(k=j+1;k<m;k++)            //从每个J开始向后查询最长等差数列 
			        if(delta==(a[k]-a[k-1]))
			            count++;
			        else        
					    break;
				if(maxlen<count+1)
				    maxlen=count+1; //count统计了等差数列有多少个差值 
				 
	    	}
	    printf("%d\n",maxlen);
		
		
		
		n--;
	}
	
	
 } 
