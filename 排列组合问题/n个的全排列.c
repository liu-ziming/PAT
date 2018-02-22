/*
递归求n个不同字符的全排列
*/

#include <stdio.h>
#include <string.h> 
int n;

void perm(char s[],int k)
{
	int i,j;char t;
	if(k==0)  
	{
		for(j=0;j<n;j++)  
		    printf("%c",s[j]) ;
		printf("\n");
	}
	else
	{
		
		for(i=0;i<=k;i++)
		{
			
			t=s[k];s[k]=s[i];s[i]=t;
			perm(s,k-1); 
			t=s[k];s[k]=s[i];s[i]=t;
		}
	}
	
 } 


int main()
{
	
	char s[100];
	gets(s);
	n=strlen(s);
	perm(s,n-1);   //注意调用下标是  n-1 
	
	
 } 
