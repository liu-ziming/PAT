
//最长回文子串长度  算法  

#include <stdio.h>
#define N 1000

char b[N],a[N<<1];
int p[N<<1] ;  //左移一位 相当于 2 倍
int min(int a,int b)
{
	return a<b?a:b;
} 
 
int main()
{
	int i,n,id,maxL,maxId;
	while(scanf("%s",&b[1])!=EOF)
	{
		maxL = maxId = 0;
		for(i=1;b[i]!='\0';i++) 
		{
			a[i<<1] = b[i];
			a[(i<<1)+1] = '#';
		}
		a[0]='?';a[1]='#';;
		n=(i<<1)+2;a[n]=0;
		maxId=maxL=0;    //init
		for(i=1;i<n;i++)
		{
			if(maxId>i)  // 起到 简化计算的作用 
			    p[i]=min(p[2*id-i],maxId-i);  //id 记录目前最长子串的中心，maxId记录最长回文子串一半的长度
			else 
			    p[i] = 1;
			while(a[i+p[i]]==a[i-p[i]])//计算i中心最长回文子串 
			    p[i]++;
			if(p[i]+i>maxId)//更新目前最大回文子串  的右端下标和中心下标 
			{
				maxId=p[i] + i;
				id=i;
			 } 
			if(p[i]>maxL)  //更新目前最大回文子串的长度
			    maxL = p[i];
			 
			 //最大长度L=  2*p[i]-1  ，再去除 # ，（L- 1）/2 =p[i] -1 即maxL -1  
		 } 
		 printf("%d\n",maxL-1);
	}
	
	
 } 

