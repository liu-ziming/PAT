/*
2016.3
输入字符串，以换行为结束符，递归求字符串的长度（不可用任何变量来统计，不是递归不得分）
*/

#include <stdio.h>

int len(char *s)
{
	if(*s=='\0') return 0;
	else 
	{
		
		return 1+len(s+1); 
	}
}

int main()
{
	char s[1000];
	gets(s);
	int n=len(s);
	printf("strlen == : %d",n);
	
}
