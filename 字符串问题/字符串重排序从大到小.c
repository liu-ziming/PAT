/*

3-10. ��̣�����һ���ַ��������е�ÿ���ַ��Ӵ�С���к������

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
char s[1000];
int cmp(const void *a,const void *b)
{
	return *(char *)b-*(char *)a;//�������  �����ô���С�ڷ��� 
}

int main()
{
	
	gets(s);
	int len ;
	len= strlen(s); 
	qsort(s,len,sizeof(s[0]),cmp);
	puts(s);
	
}
