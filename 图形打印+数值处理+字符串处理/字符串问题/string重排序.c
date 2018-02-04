/*
3-9. 编程，输入一行字符，将其中的每个字符从小到大排列后输出。

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
char s[1000];
int cmp(const void *a,const void *b)
{
	return *(char *)a-*(char *)b;//必须相减  不能用大于小于返回 
}

int main()
{
	
	gets(s);
	int len ;
	len= strlen(s); 
	qsort(s,len,sizeof(s[0]),cmp);
	puts(s);
	
}
