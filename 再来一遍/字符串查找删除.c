
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int jilu[100];
int index=0;
int match(char *master,char *pattern){
	int i,j,k;
	for(i=0;master[i]!='\0';i++){
		for(j=i,k=0;tolower(master[j])==tolower(pattern[k])&&master[j]!='\0';j++,k++);
		
		if(pattern[k]=='\0') {
			jilu[index++]=i;//printf("0000\n");/
		}
		
	}
}

int main()
{
	char s[100];
	char search[100];
	int flag[100]={0};
	char new[100];
	gets(s);
	gets(search);
	int len=strlen(search);
	int i,j,k;
	int L=strlen(s);
	match(s,search);
	for(i=0;i<index;i++){
		for(j=jilu[i];j<jilu[i]+len;j++) flag[j]=1;
	}
	j=0;
	for(i=0;i<L;i++){
		if(flag[i]==0) new[j++]=s[i];
	}
	new[j]='\0';
	puts(new);
	//Ç°ÒÆ¿Õ¸ñ
	i=1;
	while(new[i]){
		if(new[i]==' '){
			j=i;
			while(new[j]==' '&&new[j-1]!=' '&&j>0){
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
