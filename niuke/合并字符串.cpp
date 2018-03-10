//合并两个字符串
// 交替顺序，S1正向，S2逆向

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[1000],s2[1000];
	gets(s1);
	gets(s2);
	char ne[1000];
	int index=0;
	int i=0;
	int j=strlen(s2)-1;
	for(;i<strlen(s1)&&j>=0;i++,j--){
		ne[index++]=s1[i];
		ne[index++]=s2[j];
	}
	while(i<strlen(s1)) ne[index++]=s1[i++];
	while(j>=0) ne[index++]=s2[j--];
	ne[index]='\0';
	puts(ne);
		
	return 0;
 } 
