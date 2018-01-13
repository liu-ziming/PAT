
//去除表达式的括号 （表达式只含有加减），
//保证去除括号后表达式值不变

//分析：1-括号前面是'-'时，括号内部变号 
#include <stdio.h>
#include <string.h>
#define MAXSIZE 50

int flag(char []);  //if there is ()
void getpos(char a[] ,int *left,int *right ); //get the position of ()
int del(char a[],int left,int right);//delete the '(' and ‘)' 

int main()
 {
 	char a[MAXSIZE];
 	int left,right;int flagdel=1;  //成功删除标志 
 	gets(a);
    int i=0;
    while(flag(a)==1&&flagdel==1)     //没判断一次，删除一对括号 
    {
    	getpos(a,&left,&right);
    	flagdel=del(a,left,right);
    	
	}
	if(flagdel==1) 
	    puts(a);
 }
 
 int flag(char a[])
 {
 	int i,flag=0;
 	for(i=0;a[i]!='\0';++i)    
	    if(a[i]=='('||a[i]==')')
 	         flag =1;            //  错误：  for循环里不要对判断结果直接return  
 	if(flag==1)                  //   导致了 如果最外层没有括号就flag()就失效了 
 	    return 1;
 	else
 	    return 0;
 }
 
 void getpos(char a[],int *left,int *right)
 {
 	int i=0;
 	while(a[i]!='\0')
 	    {
 	    	if(a[i]=='(')
 	            *left = i;
 	        else if(a[i]==')')  //匹配从左向右的最内侧括号！！！ 
 	        {
 	        	*right = i;
 	        	break;
			}
 	    ++i;
		 }
 	        
 	
  } 
  
  int del(char a[],int left,int right)
  {
  	int i;int j;
  	if(left==0||a[left-1]=='+')
  	    for(i=left,j=left;i<strlen(a);++i)
  	        if(i==left||i==right)
  	            continue;
  	        else
  	            a[j++] = a[i];
  	else if(a[left-1]=='-')          //左括号前是‘-’ 括号内部要变号 
  	    {
		  for(i=left,j=left;i<strlen(a);++i)
  	        if(i==left||i==right)    //待删除括号位置 
  	            continue;
  	        else if(i>left&&i<right)  //括号内部变号 
  	                if(a[i]=='+')
  	                    a[j++]='-';  //注意 是a[j]存储改变后的符号 
  	                else if(a[i]=='-')     //j每次都要+1  ！ 
  	                    a[j++]='+';
  	                else
  	                    a[j++]=a[i];
  	        else
			    a[j++] = a[i];
	    }
	else if(a[left-1]=='/')
	    { 
	   	    printf("the equation is erro") ;
	   	    return 0;
		} 
	a[j]='\0';
	return 1;     //注意 字符串结尾 
  }

 
