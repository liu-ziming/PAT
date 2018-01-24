/*
3- 从键盘上任意输入一个长度不超过 20 的字符 串，对所输入的字符串，
按照 ASCII 码的大小从小到 大进行排序，请输出排序后的结果。 
*/ 

#include <stdio.h>
#include <string.h>

int main()
{
	char s[21];char t; 
	gets(s);
	int i,j;
	for(i=1;i<strlen(s);i++)     //插入排序 
	{
		t = s[i];
		j=i;
		while(t<s[j-1]&&j>0)
		{
			s[j] = s[j-1];
			j--;
		}
		s[j]=t;   //t  的插入位置搞清楚 
		
	}//for
	
	puts(s);
	

	
}
 




