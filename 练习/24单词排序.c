// 24-  ��������

// ��������  �ݼ������ַ���

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
	printf("�Ӵ�С�����   \n");
	for(i=0;i<5;i++)
	    printf("%s\n",s[i]);
	return ;
	
 } 

 
