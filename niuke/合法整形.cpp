
#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];
	
	while(scanf("%s",s)!=EOF){
		int i=0;
		int flag=1;
		if(s[0]=='0'){
			if(s[1]=='x'||s[1]=='X'){//16
				i=2;
				while(s[i]){
					if(s[i]>='0'&&s[i]<='9'||s[i]>='A'&&s[i]<='Z')
						i++;
					else {
						flag=0;break;
					} 
				}
			}	
			else{//8
				i=1;
				while(s[i]){
					if(s[i]>='0'&&s[i]<='7') 
						i++;
					else{
						flag=0;break;
					}
				}
			}
		}	
		else{ //10
			i=0;
			while(s[i]){
				if(s[i]>='0'&&s[i]<='9')
					i++;
				else{
					flag=0;break;
				}
			} 
		}
		if(flag==1) printf("YES\n");
		else printf("NO\n");
		
	}
	
	
	return 0;
}
