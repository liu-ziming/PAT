
//字符串去掉指定 字符c

#include <stdio.h>

#include <string.h>

int main()
{
	char s[1000],c;
	int i=0,j=0;
	scanf("%s",s);
	getchar();
	scanf("%c",&c);
	while(s[i]!='\0'){
		if(s[i]!=c){
			s[j++] = s[i++];
		}
		else
			i++; // 不要忘记  跳过 的时候 i++ 
	}
	s[j] = '\0';
	puts(s);
	
	return 0;
 } 

