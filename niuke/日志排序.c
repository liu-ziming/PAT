
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <malloc.h>
typedef struct note{
	char s[1000];
	char data[500];
	char time[500];
	char res[500];
	
}T;
T note[1000];

int cmp(const void *a ,const void *b)
{
	T *aa =(T *)a;
	T *bb =(T *)b;
	if(strcmp(aa->res,bb->res)!=0) return strcmp(aa->res,bb->res);
	else if(strcmp(aa->data,bb->data)!=0) return strcmp(aa->data,bb->data);
	return strcmp(aa->time,bb->time);
	
}
int main()
{
	int i,j,k;int n;
	i=0;
	do{
		gets(note[i++].s);
	}while(note[i-1].s[0]!=' ');
	
	n=i;
	
	for(i=0;i<n;i++){
		j=0;
		while(note[i].s[j]==' ')j++;
		while(note[i].s[j]!=' ') j++;
		while(note[i].s[j]==' ')j++;
		k=0;
		while(note[i].s[j]!=' '){
			note[i].data[k++]=note[i].s[j++];
		}
		note[i].data[k]='\0';
		while(note[i].s[j]==' ')j++;
		k=0;
		while(note[i].s[j]!=' '){
			note[i].time[k++]=note[i].s[j++];
		}
		note[i].time[k]='\0';
		while(note[i].s[j]==' ')j++;
		k=0;
		while(note[i].s[j]!='\0'){
			note[i].res[k++]=note[i].s[j++];
		}
		note[i].res[k]='\0';
	} 
	qsort(note,n,sizeof(note[0]),cmp);
	for(i=0;i<n;i++){
		puts(note[i].s);
	}
	
	return 0;
 } 
