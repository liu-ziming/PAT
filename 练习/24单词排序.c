// 24-  单词排序

// 排序问题  递减排序字符串

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
int cmp(const void *a,const void *b)
{
	char *aa=(char *)a;
	char *bb=(char *)b;
	return ( strcmp(aa,bb)>0?-1:1);
	
}

int main()
{
	char s[5][100];
	int i;
	for(i=0;i<5;i++)
	    scanf("%s",s[i]);

	qsort(s,5,sizeof(s[0]),cmp);
	printf("从打到小排序后：   \n");
	for(i=0;i<5;i++)
	    printf("%s\n",s[i]);
	return ;
	
 } 

 
