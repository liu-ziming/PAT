/*
3-30. ��̣�����һ�����Ȳ�����100���ַ�����ɾ�����е��ظ��ַ���������磺
         �����ַ�����  abacaeedabcdcd       �������      abced

*/

#include <stdio.h>
#include <string.h>
int main()
{
	char s[100],new[100];
	gets(s);
	int i,j;
	int len=strlen(s);
	int k=0;
	for(i=0;i<len;i++) 
	{
		int flag=0;
		for(j=0;j<i;j++)
		    if(s[j]==s[i])
		        flag=1;
		if(flag==0)
		    new[k++]=s[i];
	}
	new[k]='\0';
	puts(new);
	
}
