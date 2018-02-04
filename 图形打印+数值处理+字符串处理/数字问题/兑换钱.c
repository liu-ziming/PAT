/*
2-7. 用一元人民币兑换成1分、2分和5分硬币，编程，输出所有不同的兑换方法及兑换方法个数。
*/ 
#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,k;
	for(i=0;i<=100;++i)
	    for(j=0;j<=50;++j)
	        for(k=0;k<=20;++k)
	            if(1*i+2*j+3*k==100)
	                printf("%5d%5d%5d",i,j,k);
	
 } 


 
