
#include <stdio.h>
#include <string.h>
int cmp(const void *a ,const void *b){
	return *(char *)a - *(char *)b;
}
int main()
{
	char s[300];
	int len;
	gets(s); 
	len = strlen(s);
	qsort(s,len,sizeof(char),cmp);
	puts(s); 
	return 0;
		
}
