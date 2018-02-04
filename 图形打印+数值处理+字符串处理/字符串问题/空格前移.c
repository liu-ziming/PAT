/*
3-27. 编程，将输入的两行字符串连接后，将新串中全部空格移到串首后输出。
*/ 
#include<stdio.h>
#include<string.h>
 
int main()
{
	char s1[100],s2[100];
	gets(s1);gets(s2);
	strcat(s1,s2);
	int i=1,j;
	
	while(s1[i])
	{
		if(s1[i]==' ')
		{
			j=i-1;
			s1[i]=s1[j];
			while(s1[j]!=' '&&j>0)  //前移到 遇到空格  或者到最前头 
			{
				s1[j]=s1[j-1];
				j--;
			}
			if(j==0) s1[j]=' ';   //如果移动到了最前头，最前头不是空格 ，则操作后第一个字符一定是  空格 
			
		 } 
		i++;
	}
	
	printf("%s",s1);
 } 
