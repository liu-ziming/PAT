//字符平台  

//可能不止一个
 
#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];int len;
	int i,j,count,maxc=1;
	char zifu,maxzifu;
	gets(s);
	len =strlen(s);

	for(i=0;i<len;i++)//运算字符平台最长长度maxc 
	{
		if(len==1){
			maxc=1;break;
		}	
		else
		{
			count=1;zifu=s[i]; 
			for(j=i+1;j<len;j++)
			    if(s[j]==zifu) count++;else break;
			if(count>maxc)
			{
				 maxc = count;
			}
		 } 
	}
	//输出符合的字符平台 
	for(i=0;i<len;i++)
	{
		if(len==1){
			printf("%d,%c",1,*s);break;
		}
		else
		{
			zifu=s[i];count=1;
			for(j=i+1;j<len;j++)
			    if(s[j]==zifu) count++;else break;
			if(count==maxc)
			{
				printf("%d,%c\n",i+1,zifu);
			}
		 } 
	}
	
 } 
