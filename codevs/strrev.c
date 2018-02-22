
//Äæ×ª×Ö·û´®

#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];
	gets(s);
	int i,j,len;
	len=strlen(s);
	/*
	for(i=0,j=len-1;i<j;i++,j--)
	{
		char t;
		t=s[i];s[i]=s[j];s[j]=t;
	}*/
	strrev(s); 
	puts(s);
}

 
