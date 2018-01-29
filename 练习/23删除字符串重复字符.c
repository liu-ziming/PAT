//23-删除重复字符
//方法一：标记重复字符，最后不输出  
// 方法二：建立一个新的字符串，每次添加字符时检查其是否已经存在于新字符串 
//字符串问题

#include <stdio.h>
#include <string.h>
#define MAXSIZE 100

int main()
{
	char s[MAXSIZE];
	gets(s);
	int len =strlen(s);
	int i,j;
	for(i=0;i<len;++i)
	    if(s[i]!='0')    // '0'标记重复的字符 
	        for(j=i+1;j<len;++j)
	            if(s[j]==s[i])
	                s[j]='0';
	for(i=0;i<len;++i)
	    if(s[i]!='0')
	        printf("%c",s[i]);
	    
	
	
 } 
