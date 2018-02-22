#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000];int len ;int i,r=0,h=0;char new[100][100];
	gets(s);
	len = strlen(s);
	for(i=0;i<len;i++){
		if(s[i]!=' ')
		    new[r][h++]=s[i];
		else
		{
			new[r][h]='\0';
			r++;h=0;
		}
	}
	for(i=r;i>=0;i--)
	{
		printf("%s",new[i]);
		if(i!=0)printf(" ");
	}
	
 } 
