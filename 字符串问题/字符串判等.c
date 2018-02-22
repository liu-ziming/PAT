/*
问题描述：
判断两个由大小写字母和空格组成的字符串在忽略大小写和压缩掉空格后是否相等。
输入：
第1行是测试数据的组数n，每组测试数据占2行，第1行是第一个字符串s1，第2行是第二个字符串s2。
每组测试数据之间有一个空行，每行数据不超过100个字符（注意字符串的长度可能为0）。
输出：
n行，相等则输出YES，否则输出NO
样例输入：
3
a A bb BB ccc CCC
Aa BBbb CCCccc

a              dfadf              fasdf
adasddfsfsaf
样例输出：
YES
YES
NO

*/

#include  <stdio.h>
#include <string.h>
int main()
{
	int n;int i,j;char s1[100],s2[100],source[100],dest[100];
	scanf("%d",&n);getchar();
	while(n--)
	{
		gets(s1);gets(s2);
		//标准去空格算法 
		 j=0;
		for(i=0;s1[i]!='\0';i++)
			if(s1[i]!=' ') source[j++]=s1[i]; 
		source[j]='\0';
		j=0;
		for(i=0;s2[i]!='\0';i++)
			if(s2[i]!=' ') dest[j++]=s2[i];
		dest[j]='\0';
		if(stricmp(source ,dest)==0) printf("YES\n");//忽略大小写的判等 
		else printf("NO\n");
		
	}
	
	
 } 









