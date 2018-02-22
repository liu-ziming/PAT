/*
3-17. 编程，输入一行文字，判断该行文字是否是回文。（使用递归试试）
     　　例如，读入：MA DAM I MAD AM       输出：YES
　　     　　　读入：ABCDBA.           输出：NO

*/

#include <stdio.h>
#include <string.h>

int func(char s[],int n)
{
	if(n==0||n==1)
	    return 1;
	else if(s[0]==s[n-1])   return 1*func(s+1,n-2);
	else return 0*func(s+1,n-2);
}

int main()
{
	char s[100];
	gets(s);
	int len =strlen(s); 
	int flag=func(s,len);
	if(flag==1)  printf("YES");
	else  printf("NO");             
	
 } 
