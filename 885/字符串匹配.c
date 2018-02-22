/*
输入一串代码，要求统计里面的if ,while ,for 关键字的位置；
注意 ：引号内的不统计 
要求按照出现顺序依次输出  ；
*/
/* 思路 
先把引号内都设置成 #  ， 接着 直接用字符串 模式匹配
*/
#include <stdio.h>
#include <string.h>
void predeal(char *s)
{
	int i;int flag=0;
	while(s[i]){
		if(s[i]=='"')
			if(flag==0)//遇到引号， 即 左引号 
				flag=1;//设为1 开始置 #
			else{
				flag=0;//右引号  置 0 
			} 
		else if(flag==1){
			s[i]='#';
		}	
		
		i++;
	}
}

int main()
{
	char code[301],_if[3]="if",_while[6]="while",_for[4]="for";
	gets(code);
	predeal(code);
	int i,j,k,m,n;
	for(i=0;code[i]!='\0';i++)
	{
		for(j=i,k=0;code[j]==_if[k];j++,k++);
		if(_if[k]=='\0'){
			printf("if : %d\n",i+1);
		}
		for(j=i,k=0;code[j]==_while[k];j++,k++);
		if(_while[k]=='\0'){
			printf("while : %d\n",i+1);
		}
		for(j=i,k=0;code[j]==_for[k];j++,k++);
		if(_for[k]=='\0'){
			printf("for : %d\n",i+1);
		}
	}
	
	
	
}
 

