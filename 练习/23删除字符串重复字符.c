//23-ɾ���ظ��ַ�
//����һ������ظ��ַ���������  
// ������������һ���µ��ַ�����ÿ������ַ�ʱ������Ƿ��Ѿ����������ַ��� 
//�ַ�������

#include <stdio.h>
#include <string.h>
#define MAXSIZE 100

int main()
{
	char s[MAXSIZE];
	gets(s);
	int len =strlen(s);
	int i,j;
	for(i=0;i<len;++i)
	    if(s[i]!='0')    // '0'����ظ����ַ� 
	        for(j=i+1;j<len;++j)
	            if(s[j]==s[i])
	                s[j]='0';
	for(i=0;i<len;++i)
	    if(s[i]!='0')
	        printf("%c",s[i]);
	    
	
	
 } 
