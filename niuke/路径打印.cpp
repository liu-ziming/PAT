
#include <stdio.h>

int main()
{
	int n;
    while(scanf("%d",&n)!=0){
	getchar(); 
	int i;
	char s[100];
	for(i=0;i<n;i++){
		gets(s);
		int count =0;
		int j=0;
		while(s[j]){
			if(s[j]>='a'&&s[j]<='z'){
				count++;
				printf("%c",s[j]);
			}
			if(s[j]=='\\'){
				printf("\n");
				int k;
				for(k=0;k<count;k++) printf(" ");
			}
			j++;
		printf("\n");
		}//while
	}
    }
	
	return 0;
 } 
