
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char s[100];
	char search[100];
	int flag={0};
	char new[100];
	gets(s);
	gets(search);
	int len=strlen(search);
	int i,j,k;
	while(s[i]){
		
		for(j=i,k=0;j<i+len;j++,k++){
			if(toupper(s[j]!=toupper(s[k]))break;
		}
		if(k==len-1){
			for(j=i;j<i+len;j++) {
				flag[j]=1;
			}
		}
		
	}
	i=0;j=0;
	while(s[i]){
		if(flag[i]==0) new[j++]=s[i];
		i++;
	}
	new[j]='\0';
	//Ç°ÒÆ¿Õ¸ñ
	i=1;
	while(new[i]){
		if(new[i]==' '){
			j=i;
			while(new[j]==' '&&new[j-1]!=' '){
				char t;
				t=new[j];new[j]=new[j-1];new[j-1]=t;
				j--;
			}
		}
		
		i++;
	} 
	puts(new);
	
	return 0;
 } 
