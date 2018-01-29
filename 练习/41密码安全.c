
/*
 
 密码安全
 
 字符串统计字符类型问题
 
*/

#include <stdio.h>
#include <string.h>

int  check(char *s)
{
	int len=strlen(s);
	if(len==0)  return ; 
	int flag[4]={0};
	if(len<6)
	{
		printf("Not Safe\n");
		return ;
	}
	
     while(*s!='\0')
     {
     	if(*s>='0'&&*s<='9')
     	  flag[0]++;		 
    	else if(*s>='A'&&*s<='Z')
    	    flag[1]++;
     	else if(*s>='a'&&*s<='z')
    	   flag[2]++;			 
		else 
     	   flag[3]++;			 
     	++s;
	 }
	int i;int elem=0;
	for(i=0;i<4;++i)
	{
		if(flag[i]!=0)
		    elem++;
	}
	switch(elem)
	{
		case 0: break;
		case 1: printf("Not Safe\n");break;
		case 2: printf("Medium Safe\n");break;
		default :printf("Safe\n");
	}
}


int main()
{
    int N;
    scanf("%d",&N);
    char s[N][20];
    int i;
	for(i=0;i<N;i++)
	{
		scanf("%s",s[i]);
		check(s[i]);
	}
	
		
 } 
