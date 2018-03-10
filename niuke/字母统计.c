//×ÖÄ¸Í³¼Æ

#include <stdio.h>
#include <string.h>

int main()
{
	char s[10000];
	char count[26]={0};
	gets(s);
	int i=0;
	while(s[i]!='\0'){
		if(s[i]>='A'&&s[i]<='Z'){
			count[s[i]-'A']++;
		}
		
		i++;
	}
	for(i=0;i<=25;i++){
		printf("%c:%d\n",i+'A',count[i]);
	}
	return 0;
}
 
