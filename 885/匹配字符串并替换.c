/*

从键盘输入一个长字符串，一个匹配字符串，一个替换字符串。
首先在长 字符串中查找匹配字符串，
如果有匹配字符串，则用替换字符串替换。
例:输 入:abcdd bc a 结果为:aadd 输入:adc d aaa 结果:aaaac

*/

//暴力模式匹配

#include <stdio.h>
#include <string.h>

int main()
{
	char source[1000],pattern[1000];
	char *qian,*hou,new[1000];
	char *q;
	int i=0,j=0,k=0;int start=-1;
	gets(source);
	gets(pattern);
	gets(new);
	for(i=0;source[i]!='\0';i++)
	{
		for(j=i,k=0;source[j]&&source[j]==pattern[k];j++,k++) ;
		if(pattern[k]=='\0') {
			start=i;//子串位置 
			break;
			
		}
	}
	if(start==-1){
		printf("匹配失败");return ;
	}
	hou=&source[start+strlen(pattern)];//源字符串分成三段 
	q=&source[start+strlen(pattern)-1];
	*q='\0';
	q=&source[start];
	*q='\0';
	qian=source;
	//替换中间
	strcat(qian,new);
	strcat(qian,hou);
	puts(source);
	
	
	
 } 


