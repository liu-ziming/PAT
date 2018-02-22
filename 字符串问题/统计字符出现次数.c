/*
3-29. 编程，输入字符串，输出字符串中每个字符所出现的次数。如：
         输入字符串：  abcedabcdcd
         则输出：      a=2   b=2   c=3   d=3   e=1

*/

#include <stdio.h>

int main()
{
	int count[26]={0};
	char s[100];
	gets(s);
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		count[s[i]-'a']++;
	}
	for(i=0;i<26;i++)
	    if(count[i]!=0)
		    printf("%c = %d\n",'a'+i,count[i]); 
	
} 

 
