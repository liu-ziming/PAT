/* 
3-18. ��̣��������ɸ��ַ������������ַ����ĳ���Ϊ0ʱֹͣ���롣�������ַ�����
*/ 
#include<stdio.h>
#include<string.h>

int main()
{
	char str[100],temp[100]="\0";
	gets(str);
	while(str[0]!='\0')
	{
		if(strlen(str)>strlen(temp))
		    strcpy(temp,str);
		gets(str);
	} 
	puts(temp);
 } 





