//Á¬½Ó×Ö·û´®
#include <stdio.h>
#include <string.h>

int main(){
	char s1[1000],s2[1000];
	int i=0,j=0;
	scanf("%s%s",s1,s2);
	while(s1[i])  i++;
	while(s2[j]){
		s1[i++] = s2[j++];
	} 
	s1[i] = '\0';
	puts(s1);
	
	return 0;
} 
