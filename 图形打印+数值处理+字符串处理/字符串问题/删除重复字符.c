/*
3-30. 编程，输入一个长度不超过100的字符串，删除串中的重复字符后输出。如：
         输入字符串：  abacaeedabcdcd       则输出：      abced

*/

#include <stdio.h>
#include <string.h>
int main()
{
	char s[100],new[100];
	gets(s);
	int i,j;
	int len=strlen(s);
	int k=0;
	for(i=0;i<len;i++) 
	{
		int flag=0;
		for(j=0;j<i;j++)
		    if(s[j]==s[i])
		        flag=1;
		if(flag==0)
		    new[k++]=s[i];
	}
	new[k]='\0';
	puts(new);
	
}
