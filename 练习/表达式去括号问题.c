
//ȥ�����ʽ������ �����ʽֻ���мӼ�����
//��֤ȥ�����ź���ʽֵ����

//������1-����ǰ����'-'ʱ�������ڲ���� 
#include <stdio.h>
#include <string.h>
#define MAXSIZE 50

int flag(char []);  //if there is ()
void getpos(char a[] ,int *left,int *right ); //get the position of ()
int del(char a[],int left,int right);//delete the '(' and ��)' 

int main()
 {
 	char a[MAXSIZE];
 	int left,right;int flagdel=1;  //�ɹ�ɾ����־ 
 	gets(a);
    int i=0;
    while(flag(a)==1&&flagdel==1)     //û�ж�һ�Σ�ɾ��һ������ 
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
 	         flag =1;            //  ����  forѭ���ﲻҪ���жϽ��ֱ��return  
 	if(flag==1)                  //   ������ ��������û�����ž�flag()��ʧЧ�� 
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
 	        else if(a[i]==')')  //ƥ��������ҵ����ڲ����ţ����� 
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
  	else if(a[left-1]=='-')          //������ǰ�ǡ�-�� �����ڲ�Ҫ��� 
  	    {
		  for(i=left,j=left;i<strlen(a);++i)
  	        if(i==left||i==right)    //��ɾ������λ�� 
  	            continue;
  	        else if(i>left&&i<right)  //�����ڲ���� 
  	                if(a[i]=='+')
  	                    a[j++]='-';  //ע�� ��a[j]�洢�ı��ķ��� 
  	                else if(a[i]=='-')     //jÿ�ζ�Ҫ+1  �� 
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
	return 1;     //ע�� �ַ�����β 
  }

 
