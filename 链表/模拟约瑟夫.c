//约瑟夫问题  纯模拟做

#include <stdio.h>
#include <stdlib.h>
#define MAX 300
int aLoop[MAX+10]; 
int main()
{
	int n,m,i;
	while(1)
	{
		scanf("%d%d",&n,&m);
		if(n==0) break;
		for(i=0;i<n;i++)
			aLoop[i]=i+1;
		int nPtr = 0;
		for(i=0;i<n;i++)
		{
			int nCounted = 0;
			while(nCounted<m){
				while(aLoop[nPtr]==0)
					nPtr=(nPtr+1)%n;
				nCounted++;
				nPtr=(nPtr+1)%n;
			} 
			nPtr--;
			if(nPtr<0) nPtr = n-1;//0位置 -1 是 n-1
			printf("%d  ",aLoop[nPtr]);
		//	if(i==n-1) printf("%d\n",aLoop[nPtr]);//最后一个 
			aLoop[nPtr] =0 ;
			
		}
	}
	
	
 } 
