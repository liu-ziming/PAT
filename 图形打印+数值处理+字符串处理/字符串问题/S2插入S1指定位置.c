/*

3-22. 编程，输入两个字符串s1、s2和s1中任意字符k，在s1中的指定字符k的位置处插入字符串s2并输出。
*/
#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100],s2[100];
	char k;
	gets(s1);gets(s2);
	scanf("%c",&k);
	int i,j;int pos;
	for(i=0;s1[i]!='\0';i++)
	    if(s1[i]==k) 
	    {
	    	 pos =i;break;
		}
	int len=strlen(s2);
	for(i=pos,j=len;s1[i]!='\0';i++,j++)
	    s2[j]=s1[i];
	s2[j]='\0';
	for(i=pos,j=0;s2[j]!='\0';i++,j++)
	    s1[i]=s2[j];
	s1[i]='\0';
	puts(s1);
	
	
}




