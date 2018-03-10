
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char s[103];
typedef struct substr{
	char s[100];
	int count ;
}subStr;
subStr substr[1000];
int k=0;
int cmp(const void *a,const void *b){
	struct substr *aa =(struct substr *)a;
	struct substr *bb =(struct substr *)b;
	return strcmp(aa->s,bb->s);
}
int main()
{
	gets(s);
	int i,j;
	int sublen,sourcelen;
	sublen = sourcelen = strlen(s);
	char sub[103];
	while(sublen>0){
		
		for(i=0;i<=sourcelen - sublen;i++){
		
			strncpy(sub,s+i,sublen);//Ã¿¸ö×Ó´® 
			sub[sublen]='\0';
			for(j=0;j<k;j++)
				if(strcmp(substr[j].s,sub)==0){
					substr[j].count++;
					break;
				} 
			if(j==k) {
				strcpy(substr[k].s,sub);
				substr[k].count=1;
				k++;
			}
			
		}
	sublen--;
	}
		
	
	
	qsort(substr,k,sizeof(substr[0]),cmp);
	
	for(i=0;i<k;i++){
		if(substr[i].count>1)
			printf("%s %d\n",substr[i].s,substr[i].count);
	}
	
	return 0;
 } 
