/*
3-26. 编程，输入五个字符串，请将它们按从大到小的顺序排列后输出。
*/
#include<stdio.h>
#include<string.h>


int main()
{
	char s[100][100];
	int i;
	for(i=0;i<5;++i)
	    scanf("%s",s[i]);
	int j;
	for(i=0;i<5;++i)
	    for(j=i+1;j<5;j++)
	        if(strcmp(s[i],s[j])<0)
	        {
	        	char t[100];
	        	strcpy(t,s[i]);strcpy(s[i],s[j]);strcpy(s[j],t); 
			}
	printf("排序后\n");
	for(i=0;i<5;i++)
	    printf("%s\n",s[i]);
	
}
