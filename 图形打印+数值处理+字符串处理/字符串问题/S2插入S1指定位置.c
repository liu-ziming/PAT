/*

3-22. ��̣����������ַ���s1��s2��s1�������ַ�k����s1�е�ָ���ַ�k��λ�ô������ַ���s2�������
*/
#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100],s2[100];
	char k;
	gets(s1);gets(s2);
	scanf("%c",&k);
	int i,j;int pos;
	for(i=0;s1[i]!='\0';i++)
	    if(s1[i]==k) 
	    {
	    	 pos =i;break;
		}
	int len=strlen(s2);
	for(i=pos,j=len;s1[i]!='\0';i++,j++)
	    s2[j]=s1[i];
	s2[j]='\0';
	for(i=pos,j=0;s2[j]!='\0';i++,j++)
	    s1[i]=s2[j];
	s1[i]='\0';
	puts(s1);
	
	
}




