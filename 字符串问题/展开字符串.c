/*
3-28．编程，输入两个字符串s1、s2，将s1复制到s2并输出s1和s2。
复制时，若字符串s1中存在缩写形式 （如： a - z ) 
应转换为字符串s2中的完整形式（abcd……xyz）。
"-"号之前的字符必须小于"-"号之后的字符才是合法的缩写形式。
例如，s1=abc-fg，则s2=abcdefg，如果s1=abc-af，则 s2=abc-af。
应能够处理任意可显示的ASCII字符。
*/
#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100],s2[100];
	gets(s1);
	int i;int j=0;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]=='-')
		{
			int m=s1[i-1];
			int n=s1[i+1];
			if(m<n)
			{
				char r;
				for(r=m+1;r<=n-1;r++)
				    s2[j++]=r;
			}
			else
			{
				
				s2[j++]='-';
				
			}
		 } 
		 else
		{
			s2[j++]=s1[i];
		}
	}
	s2[j]='\0';
	puts(s2);
	
	
	
	
}


