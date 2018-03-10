//IPºÏ·¨£¿£¿

#include <stdio.h>
#include <string.h> 
int judge(char s[])
{
	int len = strlen(s);
	int i=0;
	int countNum=0,countDian=0;
	int flag=1;
	if(s[0]<'0'||s[0]>'9'||s[len-1]<'0'||s[len-1]>'9')
		return 0;
	while(s[i]!='\0'){
		if(s[i]>='0'&&s[i]<='9'){
			countNum++;
			while(s[i]>='0'&&s[i]<='9'&&s[i]) {
				int t=s[i]-'0';
				if(t<0||t>255) flag=0;
				i++;
			}
		}
		if(s[i]=='.'&&s[i]){
			 countDian++;
			 i++;
		}
		
	} 
	if(countNum==4&&countDian==3&&flag==1) return 1;
	else return 0; 
	
	
}

int main()
{
	char s[100];
	int i=0;
	gets(s);
	int f=judge(s);
	if(f==1) printf("YES!\n");
	else printf("NO!\n");
	
	return 0;
 } 
