//字符串反码  人为定义

#include <stdio.h>
#include <string.h>

int main()
{
	char s[1000];
	int i;
	scanf("%s",s);
	while(strcmp(s,"!")){
		i=0;
		
		while(s[i]!='\0'){
			if(s[i]>='a'&&s[i]<='z'){
				s[i] = 'z'- (s[i]-'a');
			}
			else if(s[i]>='A'&&s[i]<='Z'){
				s[i] = 'Z' - (s[i]-'A');
			}
			i++;
		}
		
		puts(s);
		scanf("%s",s);
		
	}
	
	return 0;
}
 

