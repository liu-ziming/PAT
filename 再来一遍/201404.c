
#include <stdio.h>

int main()
{
	char s[100];
	
	int i,j,k;
	while(scanf("%s",s)!=EOF){
		int count[100]={0};
		int len = strlen(s);
		int max=-1;
		for(i=0;i<len;i++){
			for(j=i;j<len;j++){
				if(s[j]!=s[i])break;
				else count[i]++;
			}
			if(count[i]>max) {
				max=count[i];  //最大长度 字符平台 
			}
		}
		for(i=0;i<len;i++){
			if(count[i]==max){
				printf("%d,%c\n",i+1,s[i]);
			}
		}
		
		
		
	}
	
	
	
	return 0;
}
