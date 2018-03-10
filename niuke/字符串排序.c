
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a,const void *b)
{
	
	return strlen((char *)a) - strlen((char *)b );     
}
int main()
{
	int n;
	char str[1000][100];
	int i;
	scanf("%d",&n);
	getchar();//读取n 后的换行 
	for(i=0;i<n;i++){
		gets(str[i]);
		if(strcmp(str[i],"stop")==0)
			break;
	}
	int len=i;
	qsort(str,len,sizeof(str[0]),cmp);
	for(i=0;i<len;i++){
		puts(str[i]);
	}
	
	
	
	return 0;
}
