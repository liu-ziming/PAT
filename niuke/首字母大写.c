

#include <stdio.h>
int what(char x)
{
	if(x>='a'&&x<='z') return 1;
	else if(x>='A'&&x<='Z')  return 2;
	else if(x==' '||x=='\n'||x=='\t'||x=='\r') return 3;
	
}

int main()
{
	char sentence[1000];
	int i=0;
	while(gets(sentence)!=EOF){ 
	while(sentence[i]){
		if(i==0&&what(sentence[i])==1) sentence[i]-=32;
		if(what(sentence[i])==1&&what(sentence[i-1])==3){
			sentence[i] -= 32;
		}
		i++;
	}
	puts(sentence);
	} 
	
	return 0;
}
