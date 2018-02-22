/*
 3-8. 编程，输入一行字符，将其反序后再输出。
*/

#include <stdio.h>
#include <string.h>
/* 
int main()
{
	char s1[100];
	gets(s1);
	int len=strlen(s1);
	int i;
	for(i=0;i<=len/2;i++)
	{
		char temp;
		temp = s1[i];
		s1[i] = s1[len-i-1];
		s1[len-i-1] = temp;
	}
	puts(s1);
 } */
 
//递归写法

void overturn(char *s,int n)
{
	if(n==1||n==0)   return;
	else
	{
		char temp;
		temp=s[0];s[0]=s[n-1];s[n-1]=temp;
		overturn(s+1,n-2);
	}
 } 
 
int main()
{
	char s[100];
	gets(s);
	int len = strlen(s);
	overturn(s,len);
	puts(s);
}
