
#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000];
	while(scanf("%s",s)!=EOF){
		int count[1000]={0};
		int len = strlen(s);
		int i;
		for(i=0;i<len;i++){
			count[(int)s[i]]++;
		}
		int j;
		for(i=0;i<len;i++){
			if(count[(int)s[i]]>1){
				for(j=i;j<len;j++){
					if(s[i]==s[j]){
						printf("%c:%d",s[i],j);
						count[(int)s[i]]--;
						if(count[(int)s[i]]>0)
							printf(",");
					}
				}
				printf("\n");
			}
			
		}
		
	}
	
	
	
	return 0;
 } 
