
#include <stdio.h>

int main()
{
	char s1[1000],s2[1000];
	scanf("%s%s",s1,s2);
	char *p,*q;
	p=s1;
	q=s2;
	while(*p) p++;
	while(*q) *p++=*q++;
	*p='\0';
	puts(s1);
	
	
}
