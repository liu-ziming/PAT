/*
3-14. ��̣����������Ѿ�����С����˳�����кõ��ַ������������ַ����ϲ�Ϊһ���µĴ�С���������ַ����������
*/
#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100],s2[100];char s[100];
	gets(s1);gets(s2);
	char *p,*q,*r;
	p=s1;q=s2;r=s;
	while(*p!='\0'&&*q!='\0')
	{
		if(*p<*q)
		    *r++=*p++;
		else
		    *r++=*q++;
		
	}
	while(*p) *r++=*p++;
	while(*q) *r++=*q++;
	*r='\0';
	puts(s);
	
}
