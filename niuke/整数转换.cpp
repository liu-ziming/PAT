
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	unsigned int num;
	scanf("%d",&num);
	char s[100];
	itoa(num,s,10);
	int len=strlen(s);
	char t;
	t=s[0];s[0]=s[len-1];s[len-1] =t;
	puts(s);
	
	return 0;
}
