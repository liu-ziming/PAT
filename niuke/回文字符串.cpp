
#include <stdio.h>
#include <string.h>

int main()
{
	char s[1000];
	while(scanf("%s",s)!=EOF){
		int len =strlen(s);
		int i,j;
		for(i=0,j=len-1;i<j;i++,j--){
			if(s[i]!=s[j])break;
		}
		if(i>=j) printf("Yes!\n");
		else printf("No!\n");
		
		
	}
	
	
	return 0;
}
