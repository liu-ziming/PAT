/*
3.���������ַ������Կո����������س�������
���ַ�����ascii������к��������������ac cf bgh\n��
���ac bgh ca��
*/


#include <stdio.h>
#include <string.h> 

int main()
{
	char s[1000][1000];
	int n=0;char c;	int j,i;
	do
	{
		scanf("%s",s[n++]);
		scanf("%c",&c);
	}while(c!='\n');


	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		    if(strcmp(s[j],s[i])<0)
		    {
		    	char t[1000];
		    	strcpy(t,s[j]);strcpy(s[j],s[i]);strcpy(s[i],t);
			}
	}
	for(i=0;i<n;i++)
		printf("%s ",s[i]);
	
	
}



