/*
3-27. ��̣�������������ַ������Ӻ󣬽��´���ȫ���ո��Ƶ����׺������
*/ 
#include<stdio.h>
#include<string.h>
 
int main()
{
	char s1[100],s2[100];
	gets(s1);gets(s2);
	strcat(s1,s2);
	int i=1,j;
	
	while(s1[i])
	{
		if(s1[i]==' ')
		{
			j=i;
			while(s1[j]==' '&&s1[j-1]!=' '&&j>0){
				char t;
				t=s1[j];s1[j]=s1[j-1];s1[j-1]=t;
				j--;
			} 
		 } 
		i++;
	}
	
	printf("%s",s1);
 } 
