/* 
3-24. ��̣����������Ѿ�����С����˳�����кõ��ַ�����
�������ַ����ϲ�Ϊһ���µĴ�С���������ַ�����
��ɾ���ظ����ַ���Ȼ��������ַ�����
*/ 
#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100],s2[100],new[100];
	gets(s1);gets(s2);
	int i=0,j=0;int k=0;
	while(s1[i]!='\0'&&s2[j]!='\0')
	{
		if(s1[i]<s2[j])    new[k++]=s1[i++];
		else  new[k++]=s2[j++];
		
	}
	while(s1[i]!='\0')  new[k++]=s1[i++];
	while(s2[j]!='\0')  new[k++]=s2[j++];
	new[k]='\0'; 
	j=0;
	for(i=0;new[i]!='\0';i++)
	{
		if(new[i]==new[i+1]) continue ;
		else   new[j++]=new[i];
	} 
	new[j]='\0'; 
	puts(new);
 } 





