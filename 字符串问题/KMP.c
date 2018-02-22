/*
kmp 算法

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void prefix_table(char pattern[],char prefix[],int n)
{
	prefix[0]=0;
	int len=0;
	int i=1;
	while( i<n )
	{
		if(pattern[i]==pattern[len]){
			len++;
			prefix[i]=len;
			i++;
		}
		else
		{
			if(len>0)  len=prefix[len- 1];
			else {
				prefix[i]=len;
				i++;
			} 
		}
	}
}

void move_prefix_table(char prefix[],int n)
{
	int i=n-1;
	for(i;i>=0;i--)
		prefix[i]=prefix[i-1];
	prefix[0]=-1;
}
void kmp_search(char text[],char pattern[])
{
	int n=strlen(pattern);
	int m=strlen(text);
	char *prefix = malloc(sizeof(int)*n);
	prefix_table(pattern,prefix,n);
	move_prefix_table(prefix,n);
	int i=0,j=0;
	//text[i]     ,len(text)    m
	//pattern[j]  ,len(pattern)  n
	while(i<m)
	{
		if(j==n-1&&text[i]==pattern[j]){
			printf("Found pattern at %d\n",i-j);
			j=prefix[j];//继续往下找看是否还有匹配 
		}
		if(text[i]==pattern[j]){
			i++;j++;
		}
		else{
			j=prefix[j];
			if(j== -1){ //如果j是-1； 后移一位 
				i++;j++;
			}
		}
	}
}
int main()
{
	char pattern[] ="ABABCABAA";
	char text[]  = "ABABABCABAABABABAB";
	kmp_search(text,pattern);
 } 













