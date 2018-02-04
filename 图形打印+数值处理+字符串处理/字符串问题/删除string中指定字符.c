/*
3-7．编程，输入一个字符串并删除其中的指定字符。
例如，对于字符串abcdcf，指定删除c，则结果为：abdf。

*/

#include <stdio.h>

int main()
{
	char s[100],c;
	gets(s);
	scanf("%c",&c);
	char *p,*q;
	p=s;
	while(*p!='\0')
	{
		if(*p==c)
		{
			q=p;
			while(*q!='\0')
			{
				*q=*(q+1);
				q++;
			}
		}
		else    //必须else  ，不然会忽略连续重复的情况 
		    p++;
		
	 } 
	puts(s);
	
	
}

