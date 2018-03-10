//Í³¼Æµ¥´Ê
#include <stdio.h>
#include<string.h>
char words[100][100];
int main(){
	int i=0;
	while(scanf("%s",words[i])&&words[i][strlen(words[i])-1]!='.')
	{
		
		printf("%d ",strlen(words[i]));
		i++;
	}
	printf("%d",strlen(words[i])-1);
	
	return 0;
}
