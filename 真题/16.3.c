//递归求字符串的长度
#include <stdio.h>
int len=0;
void lenght(char *s)
{
	if(s[0]=='\0') return ;
	else
	{
		len++;
		lenght(s+1);
	 } 
	
}



int main()
{
	char s[100];
	gets(s);
	lenght(s);
	printf("%d\n",len);
 } 
