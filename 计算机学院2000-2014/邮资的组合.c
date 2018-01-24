/*
1- 某人有 8 角的邮票 5 张，1 元的邮票 4 张，1 元 8 角的邮票 6 张，用这些邮票中的一张或若干张 可以得到多少中不同的邮资？ 
*/

#include <stdio.h>

int main()
{
	int m,b,c;
	int n=0;
	double a[1000];
	for(m=0;m<6;m++)
	    for(b=0;b<5;b++)
	        for(c=0;c<7;c++)
	        {
	        	a[n++]=0.8*m+1*b+1.8*c;
	        	printf("%.1lf ",0.8*m+1*b+1.8*c);
	        	if(n%10==0)
	        	    printf("\n");
			}
	
	printf("\n可以组成%d中\n",n);
	int i,j,n2=0; //去重复后又n2种 
	double t;
	for(i=0;i<n;i++)
	{
		t=a[i];
		int flag = 1;
		for(j=0;j<i;j++)
		    if(t==a[j]&&i!=j)
		    {
		    	flag=0;
		    	
		    	break;
			}
	    if(flag==1)
		{
			printf("%.1lf ",t);
			n2++;
	        if(n2%10==0)
	            printf("\n");
		}
		
		
	}
	printf("\n去重复后共%d种",n2); 
 } 
 
