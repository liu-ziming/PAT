/*
3-31. 编程，输入一行字符串，请将其中的字符按照单词进行分割，输出该行中包含的全部单词。(单词是用空格、\t或\n分割的字符串。)
*/
#include<stdio.h>
#include<string.h>

int main()
{
   char s[100];
   int i=0;
   gets(s);
   
   while(s[i]!='\0'){
	   while(s[i]==' '||s[i]=='\t'||s[i]=='\n'&&s[i]!='\0')
		   i++;
	   
	   while(s[i]!=' '&&s[i]!='\n'&&s[i]!='\t'&&s[i]!='\0')
	       printf("%c",s[i++]);
	    printf("\n");
   }
   printf("\n");

	
}
