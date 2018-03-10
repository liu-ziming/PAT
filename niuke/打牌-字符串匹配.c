

#include <stdio.h>
#include <string.h>

int match(char *m,char *text)
{
	//模式匹配
	int i,j,k;
	for(i=0;m[i];i++){
		for(j=i,k=0;m[j]==text[k];j++,k++) ; 
		if(text[k]=='\0'){
			return 1;
		}
	} 
	return 0;
}
int main()
{
	char m[101],text[101];
	int i,j,k;
	int len;
	gets(m);
	gets(text);
	len = strlen(text);
	if(len<5){	
		while(text[0]<='9'){
			i=0;
			while(text[i]!='\0'){
				text[i]=text[i]+1;
				i++;
			}
			
			if(match(m,text)==1){
				printf("YES\n");
				return 0; 
			}
		}
	}
	else if(len==5){
		while(text[len-1]<'9'){  //未到最大的56789 ,就不断增大 
			i=0;
			while(i<len-1){ 
				text[i]=text[i+1];
			}
			text[len-1]=text[len-1] + 1;
			if(match(m,text)==1){
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}
