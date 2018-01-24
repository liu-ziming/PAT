//输入任意 4 个字符(如：abcd)，并按反序输出(如： dcba)。 

#include <stdio.h>

int main()
{
	char s[4];
	int i;
	for(i=0;i<4;i++)
	    scanf("%c",&s[i]);
	getchar(); 
	for(i=3;i>=0;i--)
	    printf("%c",s[i]); 
 } 
