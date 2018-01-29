/*编写程序 输入表达式-只有加减号- 保持该表达式不变的情况下
/*将输入的表达式中的括号全部去掉，并输出去掉括号后的表达式。
/*例如（a-(b+c))
    改为a-b-c
*/ 

#include <stdio.h>
#define MAXSIZE 100
int main() 
{
	char A1[MAXSIZE],A2[MAXSIZE]; 
	gets(A1);
	char *p = A1;
	int i=0,j=0;
	while(p!='\0')
	{
		if((*p!='(')&& (*p!=')'))
		    A2[j++] = A1[i++];
		else
		    ++i;
	    ++p;	
	}
	A2[j]='\0';
	puts(A2);
	
 } 
 
