/*
3-16�� ��̣����������ַ���s1��s2����s1��ɾ���κ�s2���е��ַ������磬s1��"abc123ad"��s2��"a1"�������"bc23d"��
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[100],s2[100],new[100];
	gets(s1);gets(s2);
	int i,j;int k=0;
	for(i=0;s1[i]!='\0';i++)
	{
		int flag=1;
		for(j=0;s2[j]!='\0';j++)
		    if(s1[i]==s2[j])
		       flag=0;
		if(flag==1)  new[k++]=s1[i];
	}
	new[k]='\0';
	puts(new);
	
	
	
}		

