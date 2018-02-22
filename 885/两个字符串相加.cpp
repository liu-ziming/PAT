/*
从键盘中输入两个字符串 str1,str2，合并 str1,str2 到 str3 当中，
规 则应该是,str1 的第 1 个字符+str2 的第 1 个字符，
str1 的第 2 个字符加 str2 的第 2 个字符。。
如果其中一个字符串合并完毕，将剩余的字符串直接加入到 str3 后面。

*/

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[1000],s2[1000],s3[1000];
	gets(s1);
	gets(s2);
	int i=0,j=0,k=0; 
	while(s1[i]&&s2[j]){
		s3[k++]=s1[i++] + s2[j++];
	}
	if(s1[i]){
		s3[k]=s1[i];
		i++;k++;
		
	}
	if(s2[j]){
		s3[k++] = s2[j++];
	}
	s3[k] = '\0';
	puts(s1);
	puts(s2);
	puts(s3);	
	
	
 } 












