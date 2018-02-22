/*
1.函数void  fun(char  *s)用来将字符串s中所有的字符前移一个位置，串中第一个字符移到最后。
如原字符串为Mn.123xyz，调用函数后为：n.123xyzM.请直接在函数fun的{}中输入内容.
*/

 

#include <stdio.h>

void func(char *s)
{
	int t;
	t=s[0];
	int i;
	for(i=0;s[i+1]!='\0';i++)
	    s[i]=s[i+1];
	s[i]=t;
}

int main()
{
	char s[100];int n,i; 
	gets(s);
	scanf("%d",&n);
	for(i=0;i<n;i++)   //循环左移n位就调用n次 
	    func(s);
	
	puts(s);
	
 } 
