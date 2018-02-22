/*
 3-21. 用空格分开的字符串称为单词。输入多行字符串，直到遇到了单词"stop"时才停止。最后输出单词的数量。
*/

#include<stdio.h>
#include<string.h>
#define N 100
void main()
{
	int count=1,i,j;
	char a[N];
	scanf("%s",a);
	while(strcmp(a,"stop")!=0){
		scanf("%s",a);
		count++;
		
	}
	printf("%d\n",count);	
}




 

