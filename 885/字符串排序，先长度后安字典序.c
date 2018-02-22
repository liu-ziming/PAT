
/*
.输入有限个字符串，先按字符串长度排序，
若长度一样，再把字符 串按字母表排序

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int cmp(const void *a,const void *b){
	char *aa= (char *)a;
	char *bb= (char *)b;
	if(strlen(aa)!=strlen(bb))
		return strlen(aa) - strlen(bb);
	else
		return strcmp(aa,bb);
}

int main()
{
	char s[1000][100];
	char ch;int i=0;int len;
	do{
		scanf("%s",s[i++]);
		ch=getchar();
	}while(ch!='\n');
	len = i;
	qsort(s,len,sizeof(s[0]),cmp);
	for(i=0;i<len;i++){
		printf("%s\n",s[i]);
	}
	
	
}



