// 25- 大数分解
// 分解因子 
/*
#include <stdio.h>
#include <math.h>
#define MAXSIZE 100
int main()
{
	int num;
	scanf("%d",&num);
	int i,j=0,k,u;int a[MAXSIZE];
	int tn=num;
	 for(k=0;k<100;k++)//反复找几遍，因为有些小的因子会错过 
	     for(i=2;i<sqrt(tn);++i)
	           if(num%i==0)  //i可以被整除 
	           {
	           	    for(u=2;u<i;u++)//如果i已经是素数，那就是因子 
	           	        if(i%u==0)
	           	            break;
	           	    if(u==i)
	           	    {
	           	    	a[j++]=i;
	           	    	num=num/i;
					}
			   }
	      
	
	a[j]='\0';
	j=0;
	while(a[j]!='\0')
	    printf("%d  ",a[j++]);
	
 } 
 
 */
 
 //pat解法   
 //思路，先求出素数表 Findprime（）  再进行质因子分解
 
 #include <stdio.h>
 #include <math.h>
 
 
 int isPrime(int n)
 {
 	if(n==1)  return 0 ;
 	int i;
 	int sqr=(int)sqrt(1.0*n);
 	for(i=2;i<sqr;i++)
 	    if(n%i==0)
 	        return 0;
 	return 1;
  } 
  
 
  int prime[100010];int pnum=0;
  //素数表
  int Find_prime()
  {
  	int i;
  	for(i=1;i<100010;i++)
  	    if(isPrime(i)==1)
  	        prime[pnum++]=i;  //加入素数表 
   } 
 
 
 int main()
 {
 	Find_prime();//get prime biao
 	int n;
 	scanf("%d",&n);
 	int factor[100];//因子
 	int j=0;
	if(n==1)  printf("1=1");
	else
	{
		printf("n=");
		int sqr = (int)sqrt(1.0*n);
		int i;
		for(i=0;i<pnum&&prime[i]<=sqr;++i)
		{
			while(n%prime[i]==0)
		    {
		    	factor[j++]=prime[i];
		    	
		    	n/=prime[i];
				
			}
			if(n==1)  break;//及时退出 
		 } 	
	 } 
 	if(n!=1)//必有一个大于sqr的因子
	 factor[j++]=n;
	int i;
	for(i=0;i<j;++i)
	{
		if(i!=0)  printf("*");
		printf("%d",factor[i]);
	 } 
	   
 	
 	
 	
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
