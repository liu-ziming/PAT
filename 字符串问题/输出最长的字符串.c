/* 
3-18. 编程，输入若干个字符串，当输入字符串的长度为0时停止输入。输出最长的字符串。
*/ 
#include<stdio.h>
#include<string.h>

int main()
{
	char str[100],temp[100]="\0";
	gets(str);
	while(str[0]!='\0')
	{
		if(strlen(str)>strlen(temp))
		    strcpy(temp,str);
		gets(str);
	} 
	puts(temp);
 } 





