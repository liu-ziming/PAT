#include<stdio.h>
#define MAXSIZE 100
int main(){
    char ch[MAXSIZE];
    printf("ÇëÊäÈë×Ö·û´®\n");
    gets(ch);
    char *p=ch;
    char *q=ch;
     //(a-(b+c))

	while(*q!='\0')q++;q--;
	
	if(*p=='('){*p=' ';*q=' ';p++;q--;}
	
    while(p<=q&&*q!=')')q--;
	while(p<=q){
		
	while(*p!='('&&p<=q)p++;
	if(p<=q){

		if(*(p-1)=='+'){
		*p=' ';p++;
		*q=' ';
		while(p<=q&&*q!=')')q--;
		}

		if(*(p-1)=='-'){
		*p=' ';p++;
       
              while(*p!='('&&p<=q){
			  if(*p=='+')*p='-';
              else if(*p=='-')*p='+';
			   p++;
			  }
			  *q=' ';q--;
              while(*q!=')'&&p<=q){
					 if(*p=='+')*p='-';
              else if(*p=='-')*p='+';
			   q--;
			  }//(a-(e+(b-c)+d))
		
		}
	
	}
	}

	puts(ch);
return 0;}
