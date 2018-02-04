
// 回文数
/* 
har*itoa(int value,char*string,int radix);
int value 被转换的整数，char *string 转换后储存的字符数组，int radix 转换进制数，如2,8,10,16 进制等
*/ 

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	while(n>0)
	{
		int m=n*n;
		char s[10];
		itoa(m,s,10);
		int len=strlen(s);
		int i;int flag=1;
		for(i=0;i<=len/2;++i)
		    if(s[i]!=s[len-i-1])
		    {
		    	flag=0;break;
			}
		if(flag==1)  printf("%d %d\n",n,m);
		
		
		n--;
	}
	
 } 
 




